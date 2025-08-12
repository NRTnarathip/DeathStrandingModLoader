#include "RendererHook.h"
#include "utils.h";
#include <Windows.h>
#include "DirectXTex.h"

ID3D12CommandQueue* m_pCommandQueue_render = nullptr;
CopyTextureRegion_t backup_CopyTextureRegion;

int GetHighestID3D12DeviceVersion(ID3D12Device* pDevice)
{
	for (int i = 14; i >= 1; --i)
	{
		IID iid;
		switch (i)
		{
		case 14: iid = __uuidof(ID3D12Device14); break;
		case 13: iid = __uuidof(ID3D12Device13); break;
		case 12: iid = __uuidof(ID3D12Device12); break;
		case 11: iid = __uuidof(ID3D12Device11); break;
		case 10: iid = __uuidof(ID3D12Device10); break;
		case 9:  iid = __uuidof(ID3D12Device9);  break;
		case 8:  iid = __uuidof(ID3D12Device8);  break;
		case 7:  iid = __uuidof(ID3D12Device7);  break;
		case 6:  iid = __uuidof(ID3D12Device6);  break;
		case 5:  iid = __uuidof(ID3D12Device5);  break;
		case 4:  iid = __uuidof(ID3D12Device4);  break;
		case 3:  iid = __uuidof(ID3D12Device3);  break;
		case 2:  iid = __uuidof(ID3D12Device2);  break;
		case 1:  iid = __uuidof(ID3D12Device1);  break;
		default: continue;
		}

		IUnknown* pUnknown = nullptr;
		if (SUCCEEDED(pDevice->QueryInterface(iid, (void**)&pUnknown)))
		{
			pUnknown->Release();
			return i;
		}
	}

	return 0; // Only ID3D12Device base supported
}

ID3D12GraphicsCommandList* g_readbackCommandList;
ID3D12CommandAllocator* g_commandAllocator;
ID3D12Fence* g_fence;
UINT64 g_fenceValue = 0;
HANDLE g_fenceEvent = nullptr;

void WaitForGPU(ID3D12CommandQueue* commandQueue, ID3D12Fence* fence,
	UINT64& fenceValue, HANDLE fenceEvent)
{
	const UINT64 currentFence = ++fenceValue;
	commandQueue->Signal(fence, currentFence);
	if (fence->GetCompletedValue() < currentFence)
	{
		fence->SetEventOnCompletion(currentFence, fenceEvent);
		WaitForSingleObject(fenceEvent, INFINITE);
	}
}

// Create readback buffer for texture data
ID3D12Resource* CreateReadbackBuffer(const D3D12_RESOURCE_DESC& textureDesc, UINT64& bufferSize) {
	// Calculate required buffer size
	D3D12_PLACED_SUBRESOURCE_FOOTPRINT footprint;
	UINT numRows;
	UINT64 rowSizeInBytes;
	auto device = RendererHook::Instance().GetDevice();
	device->GetCopyableFootprints(&textureDesc, 0, 1, 0,
		&footprint, &numRows, &rowSizeInBytes, &bufferSize);

	// Create readback buffer
	CD3DX12_HEAP_PROPERTIES heapProps(D3D12_HEAP_TYPE_READBACK);
	CD3DX12_RESOURCE_DESC bufferDesc = CD3DX12_RESOURCE_DESC::Buffer(bufferSize);

	ID3D12Resource* readbackBuffer = nullptr;
	HRESULT hr = device->CreateCommittedResource(
		&heapProps,
		D3D12_HEAP_FLAG_NONE,
		&bufferDesc,
		D3D12_RESOURCE_STATE_COPY_DEST,
		nullptr,
		IID_PPV_ARGS(&readbackBuffer)
	);

	return SUCCEEDED(hr) ? readbackBuffer : nullptr;
}

// Save D3D12 texture to file
HRESULT SaveD3D12TextureToFile(ID3D12Resource* resource, const std::string& filename)
{
	log("try save texture to file: %s", filename.c_str());
	auto g_device = RendererHook::Instance().GetDevice();

	// setup first time
	if (g_readbackCommandList == nullptr) {
		// Create command allocator and command list for readback
		g_device->CreateCommandAllocator(
			D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_commandAllocator));

		g_device->CreateCommandList(
			0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_commandAllocator, nullptr,
			IID_PPV_ARGS(&g_readbackCommandList));

		g_device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&g_fence));
	}

	D3D12_RESOURCE_DESC desc = resource->GetDesc();

	// Only handle 2D textures for now
	if (desc.Dimension != D3D12_RESOURCE_DIMENSION_TEXTURE2D) {
		return E_FAIL;
	}

	// Create readback buffer
	UINT64 bufferSize;
	ID3D12Resource* readbackBuffer = CreateReadbackBuffer(desc, bufferSize);
	if (!readbackBuffer) {
		return E_FAIL;
	}

	// Reset command list
	g_commandAllocator->Reset();
	g_readbackCommandList->Reset(g_commandAllocator, nullptr);

	// Transition resource to copy source if needed
	CD3DX12_RESOURCE_BARRIER barrier = CD3DX12_RESOURCE_BARRIER::Transition(
		resource,
		D3D12_RESOURCE_STATE_COMMON, // Assume common state, might need adjustment
		D3D12_RESOURCE_STATE_COPY_SOURCE
	);
	g_readbackCommandList->ResourceBarrier(1, &barrier);

	// Copy texture to readback buffer
	D3D12_PLACED_SUBRESOURCE_FOOTPRINT footprint;
	UINT numRows;
	UINT64 rowSizeInBytes;
	g_device->GetCopyableFootprints(&desc, 0, 1, 0,
		&footprint, &numRows, &rowSizeInBytes, &bufferSize);

	CD3DX12_TEXTURE_COPY_LOCATION srcLocation(resource, 0);
	CD3DX12_TEXTURE_COPY_LOCATION dstLocation(readbackBuffer, footprint);

	backup_CopyTextureRegion(
		g_readbackCommandList,
		&dstLocation, 0, 0, 0, // Destination location
		&srcLocation, nullptr // Source location
	);

	// Transition back
	barrier = CD3DX12_RESOURCE_BARRIER::Transition(
		resource,
		D3D12_RESOURCE_STATE_COPY_SOURCE,
		D3D12_RESOURCE_STATE_COMMON
	);
	g_readbackCommandList->ResourceBarrier(1, &barrier);

	// Close and execute command list
	g_readbackCommandList->Close();

	ID3D12CommandList* commandLists[] = { g_readbackCommandList };
	m_pCommandQueue_render->ExecuteCommandLists(1, commandLists);

	WaitForGPU(m_pCommandQueue_render, g_fence, g_fenceValue, g_fenceEvent);

	// Map and read data
	void* mappedData = nullptr;
	CD3DX12_RANGE readRange(0, bufferSize);
	HRESULT hr = readbackBuffer->Map(0, &readRange, &mappedData);

	if (SUCCEEDED(hr) && mappedData) {
		// Create DirectXTex image
		log("createing directXTex Image");
		DirectX::Image image;
		image.width = static_cast<size_t>(desc.Width);
		image.height = static_cast<size_t>(desc.Height);
		image.format = desc.Format;
		image.rowPitch = static_cast<size_t>(footprint.Footprint.RowPitch);
		image.slicePitch = static_cast<size_t>(bufferSize);
		image.pixels = static_cast<uint8_t*>(mappedData);

		// Save as DDS file
		std::wstring wfilename(filename.begin(), filename.end());
		hr = DirectX::SaveToDDSFile(image, DirectX::DDS_FLAGS_NONE, (wfilename + L".dds").c_str());
		log("saving status: %d", hr);

		// Alternative: Save as PNG if DDS fails
		if (FAILED(hr)) {
			log("try saving as PNG instead");
			std::wstring pngFilename = wfilename + L".png";
			hr = DirectX::SaveToWICFile(image, DirectX::WIC_FLAGS_NONE,
				DirectX::GetWICCodec(DirectX::WIC_CODEC_PNG),
				pngFilename.c_str());
			log("saving png status: %d", hr);
		}

		readbackBuffer->Unmap(0, nullptr);
	}

	readbackBuffer->Release();
	return hr;
}

CreateSwapChainForHwnd_t backup_CreateSwapChainForHwnd;
HRESULT HKStatic_CreateSwapChainForHwnd(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
) {
	return RendererHook::Instance().HK_CreateSwapChainForHwnd(self, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
}

size_t callCounter_ExecuteCommandLists;
ExecuteCommandLists_t backup_ExecuteCommandLists;
void __stdcall HKStatic_ExecuteCommandLists(
	ID3D12CommandQueue* self,
	_In_  UINT NumCommandLists,
	_In_reads_(NumCommandLists)  ID3D12CommandList* const* ppCommandLists)
{
	RendererHook::Instance().HK_ExecuteCommandLists(self, NumCommandLists, ppCommandLists);
}

void __stdcall RendererHook::HK_ExecuteCommandLists(
	ID3D12CommandQueue* self,
	_In_  UINT NumCommandLists,
	_In_reads_(NumCommandLists)  ID3D12CommandList* const* ppCommandLists)
{
	callCounter_ExecuteCommandLists++;

	//log("Hook Begin: HK_ExecuteCommandLists");
	//log("call counter: %d", callCounter_ExecuteCommandLists);
	//log("pre: device fail code: %x", GetDeviceRemoveCode());
	//log("  numCommandLists: %d", NumCommandLists);
	//log("  ppCmdLists: %p", ppCommandLists);

	for (int i = 0; i < NumCommandLists; ++i)
	{
		ID3D12CommandList* cmd = ppCommandLists[i];
		D3D12_COMMAND_LIST_TYPE type = cmd->GetType();
		//log("added [%d] cmd list: %p, list type: %d", i, cmd, type);
	}

	//log("calling original func");
	backup_ExecuteCommandLists(self, NumCommandLists, ppCommandLists);

	//log("Hook End: HK_ExecuteCommandLists");
}

CreateCommandQueue_t backup_CreateCommandQueue;
HRESULT STDMETHODCALLTYPE HKStatic_CreateCommandQueue(
	ID3D12Device* self,
	_In_  const D3D12_COMMAND_QUEUE_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_  void** ppCommandQueue)
{
	return RendererHook::Instance().HK_CreateCommandQueue(self, pDesc, riid, ppCommandQueue);
}

#include "utils.h"
void HK_CopyTextureRegion(
	ID3D12GraphicsCommandList* self,
	const D3D12_TEXTURE_COPY_LOCATION* pDst,
	UINT                              DstX,
	UINT                              DstY,
	UINT                              DstZ,
	const D3D12_TEXTURE_COPY_LOCATION* pSrc,
	const D3D12_BOX* pSrcBox
) {
	log("Hook Begin: HK_CopyTextureRegion");
	//log("  pDst: %p", pDst);
	log("  DstX: %d, DstY: %d, DstZ: %d", DstX, DstY, DstZ);
	//log("  pSrc: %p", pSrc);
	//log("  pSrcBox: %p", pSrcBox);
	// Call original function
	backup_CopyTextureRegion(self, pDst, DstX, DstY, DstZ, pSrc, pSrcBox);
	log("Hook End: HK_CopyTextureRegion");

	if (pSrc && pSrc->pResource)
	{
		ID3D12Resource* srcRes = pSrc->pResource;

		D3D12_RESOURCE_DESC desc = srcRes->GetDesc();
		log("resource dimension: %d", desc.Dimension);

		if (desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE2D)
		{
			std::string fileName = "mod_loader_internal/texture_dump_0x" + std::to_string((uintptr_t)srcRes);
			SaveD3D12TextureToFile(pSrc->pResource, fileName);
		}
	}
}


HRESULT RendererHook::HK_CreateCommandQueue(
	ID3D12Device* self,
	_In_  const D3D12_COMMAND_QUEUE_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_  void** ppCommandQueue) {

	//log("Hook Begin: HK_CreateCommandQueue");
	//log("	desc ptr 0x%p", pDesc);
	//if (pDesc) {
	//	log("	desc flags: %d", pDesc->Flags);
	//	log("	desc type: %d", pDesc->Type);
	//	log("	desc priority: %d", pDesc->Priority);
	//}
	HRESULT result = 0;
	//log("calling original function...");
	result = backup_CreateCommandQueue(self, pDesc, riid, ppCommandQueue);
	ID3D12CommandQueue* pCommandQueue = *(ID3D12CommandQueue**)ppCommandQueue;
	if (pDesc->Type == D3D12_COMMAND_LIST_TYPE_DIRECT) {
		m_pCommandQueue_render = pCommandQueue;

		if (backup_ExecuteCommandLists == NULL) {
			void** vtable = *(void***)pCommandQueue;
			log("setup hook ID3D12CommandQueue");
			HookFuncAddr(vtable[10], &HKStatic_ExecuteCommandLists, &backup_ExecuteCommandLists);
		}
	}


	//log("Hook End: HK_CreateCommandQueue");
	//log("	result: %d", result);
	return result;
}

CreateCommandList_t backup_CreateCommandList;
HRESULT STDMETHODCALLTYPE HK_CreateCommandList(
	ID3D12Device* self,
	_In_  UINT nodeMask,
	_In_  D3D12_COMMAND_LIST_TYPE type,
	_In_  ID3D12CommandAllocator* pCommandAllocator,
	_In_opt_  ID3D12PipelineState* pInitialState,
	REFIID riid,
	_COM_Outptr_  void** ppCommandList)
{
	//log("Hook Begin: CreateCommandList");
	//log("  nodeMask: %d", nodeMask);
	//log("  type: %d", type);
	//log("  pCmdAllocator: %p", pCommandAllocator);
	//log("  pInitState: %p", pInitialState);
	//log("calling backup_CreateCommandList");
	auto res = backup_CreateCommandList(
		self, nodeMask, type, pCommandAllocator,
		pInitialState, riid, ppCommandList);
	//log("  result: %d", res);
	//log("  pCommandList: %p", *ppCommandList);
	//log("  ppCommandList: %p", ppCommandList);
	ID3D12CommandList* pCmdList = *(ID3D12CommandList**)ppCommandList;

	if (type == D3D12_COMMAND_LIST_TYPE_DIRECT && backup_CopyTextureRegion == NULL) {
		ID3D12GraphicsCommandList* graphicsCmdList = (ID3D12GraphicsCommandList*)pCmdList;
		log("  setup hook for ID3D12GraphicsCommandList");
		void** vtable = *(void***)pCmdList;
		HookFuncAddr(vtable[16], &HK_CopyTextureRegion, &backup_CopyTextureRegion);
	}

	//log("Hook End: CreateCommandList");
	return res;
}


MySetupDx12_t backup_MySetupDx12;
HRESULT HKStatic_MySetupDx12(char* p1, uint64_t p2, int p3) {
	return RendererHook::Instance().HK_SetupDx12(p1, p2, p3);
}

HRESULT RendererHook::HK_SetupDx12(char* p1, uint64_t p2, int p3)
{
	log("Hook Begin: HK_MySetupDx12");
	auto result = backup_MySetupDx12(p1, p2, p3);
	log("  result: %d", result);
	log("Hook End: HK_MySetupDx12");

	// init variable
	m_pDevice = *(ID3D12Device14**)GetAddressFromRva(0x5558FA0);
	m_pFactory = *(IDXGIFactory2**)(p1 + 0x10);

	log("m_pDevice: %p", m_pDevice);
	log("m_pFactory: %p", m_pFactory);
	log("device level: %d", GetHighestID3D12DeviceVersion(m_pDevice));


	// ready hooks api
	// Factory Hooks
	{
		void** factoryVTable = *(void***)m_pFactory;
		HookFuncAddr(factoryVTable[15], &HKStatic_CreateSwapChainForHwnd, &backup_CreateSwapChainForHwnd);
	}

	// Device Hooks
	{
		void** deviceVTable = *(void***)m_pDevice;
		// error
		HookFuncAddr(deviceVTable[8], &HKStatic_CreateCommandQueue, &backup_CreateCommandQueue);
		HookFuncAddr(deviceVTable[12], &HK_CreateCommandList, &backup_CreateCommandList);
		//HookFuncAddr(vtable[27], &HK_CreateCommittedResource, &backup_CreateCommittedResource);
		//HookFuncAddr(vtable[31], &HK_CreateSharedHandle, &backup_CreateSharedHandle);
		//HookFuncAddr(vtable[20], &HK_CreateRenderTargetView, &backup_CreateRenderTargetView);
	}

	return result;
}

HRESULT RendererHook::HK_CreateSwapChainForHwnd(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain)
{
	log("Hook Begin HK_CreateSwapChainForHwnd");
	auto res = backup_CreateSwapChainForHwnd(
		self,
		pDevice, hWnd, pDesc,
		pFullscreenDesc, pRestrictToOutput, ppSwapChain);
	log("Hook End HK_CreateSwapChainForHwnd");
	log("  result: 0x%x", res);

	// init variable
	m_pSwapChain = *(IDXGISwapChain3**)ppSwapChain;

	// Hooks
	void** vtable = *(void***)(m_pSwapChain);
	//auto presentFuncAddr = vtable[8];
	//HookFuncAddr(presentFuncAddr, &HK_DXGIPresent, &backup_DXGI_Present);

	return res;

}


RendererHook::RendererHook()
{
	log("initialize renderer hook..");

	HookFuncRva(0x19a6980, &HKStatic_MySetupDx12, &backup_MySetupDx12);

	log("done initialize renderer hook");
}
