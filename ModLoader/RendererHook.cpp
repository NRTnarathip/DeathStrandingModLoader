#include "RendererHook.h"
#include "utils.h";
#include <Windows.h>
#include "DirectXTex.h"
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <iostream>
#include <sstream>
#include <string>

#define DISABLE_RENDERER_HOOK_LOG // toggle here

#ifdef DISABLE_RENDERER_HOOK_LOG
void logEmpty(const char* format, ...) {}
#define log(...) logEmpty(__VA_ARGS__)
#endif


ID3D12CommandQueue* m_pCommandQueue_render = nullptr;
CopyTextureRegion_t backup_CopyTextureRegion;
ID3D12Resource_Map_t backup_Resource_Map;
ID3D12Resource_Unmap_t backup_Resource_Unmap;

std::unordered_set<ID3D12Resource*> g_resourceListToSave;
std::unordered_set<ID3D12Resource*> g_resourceHeapCPULookup;

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

uint8_t* GetRenderContext() {
	return *(uint8_t**)GetFuncAddr(0x4f6d430);
}

uint8_t* GetRingBufferUpload() {
	auto renderCtx = GetRenderContext();
	return renderCtx + 0xb48;
}

uint8_t* GetRingBufferUploadBufferPtr() {
	return *(uint8_t**)(GetRingBufferUpload() + 0x20);
}


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
	//log("try save texture to file: %s", filename.c_str());
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
	//log("readback buffer map status: %d", hr);

	if (SUCCEEDED(hr) && mappedData) {
		// Create DirectXTex image
		//log("createing directXTex Image");
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

		//hr = DirectX::SaveToWICFile(image,
		//	DirectX::WIC_FLAGS_NONE, DirectX::GetWICCodec(DirectX::WIC_CODEC_PNG),
		//	(wfilename + L".png").c_str());

		log("saving file: %s status: %d", filename.c_str(), hr);

		readbackBuffer->Unmap(0, nullptr);
	}

	readbackBuffer->Release();
	return hr;
}

HRESULT SaveTexture(ID3D12Resource* resource,
	const D3D12_PLACED_SUBRESOURCE_FOOTPRINT& placeFootprint,
	D3D12_RESOURCE_DESC& desc,
	const std::string& filename)
{
	DirectX::Image image;
	auto footprint = placeFootprint.Footprint;
	image.width = footprint.Width;
	image.height = footprint.Height;
	image.format = footprint.Format;
	image.rowPitch = footprint.RowPitch;
	image.slicePitch = placeFootprint.Footprint.RowPitch * desc.Height;

	void* pixels;
	resource->Map(0, nullptr, &pixels);
	image.pixels = (uint8_t*)pixels + placeFootprint.Offset;


	// Save as DDS file
	std::wstring wfilename(filename.begin(), filename.end());
	auto hr = DirectX::SaveToDDSFile(image, DirectX::DDS_FLAGS_NONE, (wfilename + L".dds").c_str());

	resource->Unmap(0, 0);

	log("saving raw bytes file: %s status: %d", filename.c_str(), hr);

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

	//log("calling original func");
	backup_ExecuteCommandLists(self, NumCommandLists, ppCommandLists);

	// error here
	//static int saveCounter = 0;
	//for (ID3D12Resource* res : g_resourceListToSave) {
	//	saveCounter++;
	//	std::string fileName = "mod_loader_internal/dst_0x" + ToHex(((uintptr_t)res));
	//	fileName += "_(" + ToHex(saveCounter) + ")";
	//	log("saving resource: %p, counter: %d", res, saveCounter);
	//	SaveD3D12TextureToFile(res, fileName);
	//}
	//g_resourceListToSave.clear();


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


HRESULT STDMETHODCALLTYPE HK_Resource_Map(
	ID3D12Resource* self, UINT Subresource,
	_In_opt_  const D3D12_RANGE* pReadRange,
	_Outptr_opt_result_bytebuffer_(_Inexpressible_("Dependent on resource"))  void** ppData)
{
	log("Hook Begin HK_Resource_Map");
	log("  resource: %p", self);
	//log("sub resource: %d", Subresource);
	bool isWriteData = pReadRange == nullptr || pReadRange->End == 0;
	log("  is write data: %s", isWriteData ? "true" : "false");
	HRESULT res = backup_Resource_Map(self, Subresource, pReadRange, ppData);
	log("  pData: %p", *ppData);

	auto desc = self->GetDesc();
	log("  size: %d x %d", desc.Width, desc.Height);

	if (desc.Width == 536870912) {
		log("  found main stream buffer 512mb");
		auto ringBuffer = ((uint8_t*)ppData) - 0x20;
		char bufferType = *(char*)(ringBuffer + 0x0);
		size_t bufferSize = *(size_t*)(ringBuffer + 0x8);
		log("  ring buffer: %p", ringBuffer);
		log("  bufferType: %d", bufferType);
		log("  bufferSize: %zu", bufferSize);


	}

	return  res;
}

void HK_Resource_Unmap(ID3D12Resource* self, UINT Subresource, _In_opt_
	const D3D12_RANGE* pWrittenRange)
{
	log("Begin HK_Resource_Unmap_1D");
	log("  resource: %p", self);
	auto desc = self->GetDesc();
	log("  size: %d x %d", desc.Width, desc.Height);
	log("  sub resource: %d", Subresource);
	backup_Resource_Unmap(self, Subresource, pWrittenRange);
}



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
	auto srcDesc = pSrc->pResource->GetDesc();
	D3D12_HEAP_PROPERTIES temp_heapProps = {};
	log("src resource: %p", pSrc->pResource);
	pSrc->pResource->GetHeapProperties(&temp_heapProps, nullptr);
	log("src heap type: %d", temp_heapProps.Type);
	log("src size : %d x %d", srcDesc.Width, srcDesc.Height);
	log("src resource index: %d", pSrc->SubresourceIndex);
	log("src footprint offset: %d", pSrc->PlacedFootprint.Offset);
	log("src footprint size: %u x %u",
		pSrc->PlacedFootprint.Footprint.Width,
		pSrc->PlacedFootprint.Footprint.Height);

	pDst->pResource->GetHeapProperties(&temp_heapProps, nullptr);
	auto dstDesc = pDst->pResource->GetDesc();
	log("dst resource: %p", pDst->pResource);
	log("dst size : %d x %d", dstDesc.Width, dstDesc.Height);
	log("dst heap type: %d", temp_heapProps.Type);
	log("dst resource index: %d", pDst->SubresourceIndex);
	log("dst footprint offset: %d", pDst->PlacedFootprint.Offset);
	log("dst footprint size: %u x %u",
		pDst->PlacedFootprint.Footprint.Width,
		pDst->PlacedFootprint.Footprint.Height);
	log("dst x: %d, y: %d, z: %d", DstX, DstY, DstZ);


	// WIP: replace texture
	auto srcResource = pSrc->pResource;
	auto srcFootPrint = pSrc->PlacedFootprint.Footprint;
	bool isOnTexturePatcher = false;
	static bool isEnableTexturePatcher = false;
	if (isEnableTexturePatcher
		&& srcFootPrint.Width == 1920 && srcFootPrint.Height == 1080
		&& dstDesc.Format == DXGI_FORMAT_BC3_UNORM_SRGB) {
		log("found texture 1920x1080, try replace with custom texture...");
		auto src = pSrc;
		DirectX::ScratchImage newImageReplace;
		DirectX::TexMetadata metadata;
		//HRESULT hr = DirectX::LoadFromDDSFile(textureFileName.c_str(),
		//	DirectX::DDS_FLAGS_NONE, &metadata, srcImage);
		DirectX::ScratchImage pngImage;
		auto hr = DirectX::LoadFromWICFile(L"mods/sony.png", DirectX::WIC_FLAGS_NONE, nullptr, pngImage);
		hr = DirectX::Compress(pngImage.GetImages(), pngImage.GetImageCount(),
			pngImage.GetMetadata(), DXGI_FORMAT_BC3_UNORM_SRGB,
			DirectX::TEX_COMPRESS_DEFAULT, 0.0f, newImageReplace);

		if (SUCCEEDED(hr)) {
			void* srcBuffer;
			srcResource->Map(0, nullptr, &srcBuffer);

			DirectX::ScratchImage decodeImg;

			uint8_t* targetPixels = (uint8_t*)srcBuffer + src->PlacedFootprint.Offset;
			auto img = newImageReplace.GetImage(0, 0, 0);
			memcpy(targetPixels, img->pixels, newImageReplace.GetPixelsSize());
			srcResource->Unmap(0, nullptr);
			log("replaced texture!");
		}
	}

	// Call original function
	backup_CopyTextureRegion(self, pDst, DstX, DstY, DstZ, pSrc, pSrcBox);
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
ID3D12Resource_SetName_t backup_ID3D12Resource_SetName;
HRESULT HK_ID3D12Resource_SetName(ID3D12Resource* self, _In_z_ LPCWSTR Name) {
	log("Hook Begin: HK_ID3D12Resource_SetName");
	log("  Name: %ls", Name);
	auto res = backup_ID3D12Resource_SetName(self, Name);
	//log("Hook End: HK_ID3D12Resource_SetName");
	return res;
}

// Additional patch for CreatePlacedResource
typedef HRESULT(*CreatePlacedResource_t)(
	ID3D12Device* device,
	ID3D12Heap* pHeap,
	UINT64 HeapOffset,
	const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialState,
	const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riid,
	void** ppvResource);
CreatePlacedResource_t backup_CreatePlacedResource;

HRESULT HK_CreatePlacedResource(
	ID3D12Device* device,
	ID3D12Heap* pHeap,
	UINT64 HeapOffset,
	const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialState,
	const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riid,
	void** ppvResource
) {

	auto res = backup_CreatePlacedResource(
		device, pHeap, HeapOffset, pDesc,
		InitialState, pOptimizedClearValue, riid, ppvResource
	);

	if (pDesc->Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE2D) {
		auto resource = (ID3D12Resource*)*ppvResource;
		log("Hook Begin: CreatePlacedResource");
		log("resource: %p", resource);
		log("state: %d", InitialState);
		log("size: %d x %d", pDesc->Width, pDesc->Height);
		D3D12_HEAP_PROPERTIES heapProps;
		resource->GetHeapProperties(&heapProps, nullptr);
		log("heap type: %d", heapProps.Type);
	}

	return res;
}


CreateCommittedResource_t backup_CreateCommittedResource;
HRESULT HK_CreateCommittedResource(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_PROPERTIES* pHeapProperties,
	D3D12_HEAP_FLAGS HeapFlags,
	_In_  D3D12_RESOURCE_DESC* desc,
	D3D12_RESOURCE_STATES InitialResourceState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riidResource,
	_COM_Outptr_opt_  void** ppvResource)
{
	log("Hook Begin CreateCommittedResource");
	log("  resource: %p", *ppvResource);
	log("  format: %d", desc->Format);
	log("  size: %d x %d", desc->Width, desc->Height);
	log("  heapType: %d", pHeapProperties->Type);
	log("  dimension: %d", desc->Dimension);
	log("  sample.count: %d", desc->SampleDesc.Count);
	log("  sample.quality: %d", desc->SampleDesc.Quality);
	log("  mipmapLevels: %d", desc->MipLevels);
	log("  flags: %d", desc->Flags);
	log("  layout: %d", desc->Layout);
	log("  alignment: %d", desc->Alignment);
	log("  HeapFlags: %d", HeapFlags);
	log("  Initial States: %d", InitialResourceState);

	if (IsWineEnvironment()) {
		if (HeapFlags & D3D12_HEAP_FLAG_SHARED || HeapFlags & D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER)
		{
			HeapFlags &= ~D3D12_HEAP_FLAG_SHARED;
			HeapFlags &= ~D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER;
			log("patch new heap flags: %d", HeapFlags);
		}
	}

	auto retValue = backup_CreateCommittedResource(self, pHeapProperties, HeapFlags, desc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);

	auto resource = (void*)*ppvResource;
	auto vtable = *(void***)resource;
	if (backup_Resource_Map == nullptr) {
		log("setup hook ID3D12Resource");
		HookFuncAddr(vtable[8], &HK_Resource_Map, &backup_Resource_Map);
		HookFuncAddr(vtable[9], &HK_Resource_Unmap, &backup_Resource_Unmap);
	}

	return retValue;
}

CreateHeap_t backup_CreateHeap;
HRESULT HK_CreateHeap(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_opt_  void** ppvHeap)
{
	log("Hook Begin: HK_CreateHeap");

	auto retValue = backup_CreateHeap(self, pDesc, riid, ppvHeap);
	return retValue;
}

CreateReservedResource_t backup_CreateReservedResource;
HRESULT HK_CreateReservedResource(
	ID3D12Device* self,
	_In_  const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riid,
	_COM_Outptr_opt_  void** ppvResource)
{

	log("Hook Begin: HK_CreateReservedResource");
	auto retResult = backup_CreateReservedResource(self, pDesc, InitialState,
		pOptimizedClearValue, riid, ppvResource);
	ID3D12Resource* resource = (ID3D12Resource*)*ppvResource;
	log("  resource: %p", resource);
	auto desc = *pDesc;
	log("  format: %d", desc.Format);
	log("  size: %d x %d", desc.Width, desc.Height);
	log("  dimension: %d", desc.Dimension);
	log("  mips: %d", desc.MipLevels);

	return retResult;
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
		// important for winlator
		if (IsWineEnvironment()) {
			HookFuncAddr(deviceVTable[27], &HK_CreateCommittedResource, &backup_CreateCommittedResource);
		}

#if false
		// debug zone
		//HookFuncAddr(deviceVTable[8], &HKStatic_CreateCommandQueue, &backup_CreateCommandQueue);
		//HookFuncAddr(deviceVTable[12], &HK_CreateCommandList, &backup_CreateCommandList);
		//HookFuncAddr(deviceVTable[29], &HK_CreatePlacedResource, &backup_CreatePlacedResource);
		//HookFuncAddr(deviceVTable[30], &HK_CreateReservedResource, &backup_CreateReservedResource);
		//HookFuncAddr(vtable[31], &HK_CreateSharedHandle, &backup_CreateSharedHandle);
		//HookFuncAddr(vtable[20], &HK_CreateRenderTargetView, &backup_CreateRenderTargetView);
#endif
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
