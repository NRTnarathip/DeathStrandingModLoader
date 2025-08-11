#include "winlator_patch.h"
#include "utils.h"
#include <windows.h>
#include <psapi.h>
#include <iostream>
#include <thread>
#include <stdlib.h>
#include "mydx12.h"
#include <d3d12.h>
#include <dxgi1_6.h>
#include <wrl.h>
#include <Windows.h>
#include <winternl.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <mutex>
#include <vector>
#include <map>
#include <unordered_map>

//global, static variable
// allocatorAddr, cmdListAddr
std::unordered_map<uintptr_t, uintptr_t> m_allocatorCmdListMap;
IDXGISwapChain3* my_swapChain;
std::vector<D3D12_CPU_DESCRIPTOR_HANDLE> m_renderTargetViewList;

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

ID3D12Device** my_ppeDvice = (ID3D12Device**)GetAddressFromRva(0x5558FA0);
ID3D12Device* GetDxDevice() {
	return *my_ppeDvice;
}
HRESULT GetDeviceRemoveCode() {
	return GetDxDevice()->GetDeviceRemovedReason();
}

typedef void* (*mi_win_virtual_allocx)(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags);
mi_win_virtual_allocx fpVirtualAllocX = nullptr;
typedef PVOID(__stdcall* PVirtualAlloc2)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);

const size_t* m_mi_os_page_size_ptr = (size_t*)GetAddressFromRva(0x4f53748);;
size_t _mi_os_page_size() {
	return *m_mi_os_page_size_ptr;
}

void* HookedVirtualAllocX(LPVOID a1_addr, size_t a2_allocSize, size_t try_alignment, DWORD a4_flags) {
	//log("[Hook Begin] mimalloc VirtualAllocX calling");
	//log("addr: %p, allocSize: %zu, try_alignedSize: %zu, flags: 0x%X", a1_addr, a2_allocSize, try_alignment, a4_flags);
	//log("calling..");
	void* returnResult = fpVirtualAllocX(a1_addr, a2_allocSize, try_alignment, a4_flags);
	//log("VirtualAllocX result: %p", returnResult);

	if (returnResult == NULL) {
		DWORD err = GetLastError();
		//log("VirtualAllocX failed with error: %x", err);

		if (err != ERROR_INVALID_ADDRESS &&   // If linked with multiple instances, we may have tried to allocate at an already allocated area (#210)
			err != ERROR_INVALID_PARAMETER) { // Windows7 instability (#230)
			// return it with null;
		}
		else {
			//log("try allocate with VirtualAlloc v2");
			auto osPageSize = _mi_os_page_size();
			auto pVirtualAlloc2 = (PVirtualAlloc2)(*(uintptr_t*)GetAddressFromRva(0x7e6e150));

			if (try_alignment > 0 && (try_alignment % osPageSize) == 0 && pVirtualAlloc2 != NULL) {
				MEM_ADDRESS_REQUIREMENTS reqs = { 0, 0, 0 };
				reqs.Alignment = try_alignment;
				MEM_EXTENDED_PARAMETER param = { {0, 0}, {0} };
				param.Type = MemExtendedParameterAddressRequirements;
				param.Pointer = &reqs;
				returnResult = pVirtualAlloc2(GetCurrentProcess(), a1_addr, a2_allocSize, a4_flags, PAGE_READWRITE, &param, 1);
				//log("VirtualAllocV2 result: %p", returnResult);
			}
		}
	}

	//log("result: %p", returnResult);
	//log("[Hook End] mimalloc VirtualAllocX");
	return returnResult;
}

typedef char(*My_Sus2_t)(__int64 a1, __int64 a2, HWND a3, char a4);
My_Sus2_t fpMySus2 = nullptr;
char HookMySus2(__int64 param1, __int64 param2, HWND param3, char param4) {
	// disable de bugger
	log("Hook Begin Sus2");
	log("a1 %x", param1);
	log("a2 %x", param2);
	log("a3 %x", param3);
	log("a4 %x", param4);
	//auto result = fpMySus2(a1, a2, a3, 0);

	// Basic initialization without DXGI debug interface

	struct GraphicsContext {
		void* vtable;
		bool enableDebugLayer;
		int unknown_0x0c;
		HWND windowHandle;
		int windowWidth;
		int windowHeight;
		// ... other members
	};

	GraphicsContext* context = (GraphicsContext*)param1;

	// Initialize basic members
	context->vtable = (void*)param2;
	context->windowHandle = param3;
	context->enableDebugLayer = param4;

	// Get window dimensions
	RECT clientRect;
	GetClientRect(param3, &clientRect);
	context->windowWidth = max(1, clientRect.right - clientRect.left);
	context->windowHeight = max(1, clientRect.bottom - clientRect.top);

	// Skip all DXGI debug interface calls
	// Just do minimal initialization

	// Create fence event (this part seems safe)
	HANDLE fenceEvent = CreateEventA(nullptr, FALSE, FALSE, nullptr);
	if (fenceEvent) {
		// Store fence event at appropriate offset
		*(HANDLE*)((uint8_t*)param1 + 0x40) = fenceEvent;
	}

	// Mark as initialized
	*(bool*)((uint8_t*)param1 + 0xa0) = true;

	// Don't call the original function - we're replacing it entirely
	//log("result: %s", result == 0 ? "false" : "true");
	log("Hook End Sus2");
	return 1;
}

int m_createCommittedResourceCallCounter = 0;
typedef HRESULT(*CreateCommittedResource_t)(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_PROPERTIES* pHeapProperties,
	D3D12_HEAP_FLAGS HeapFlags,
	_In_  const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialResourceState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riidResource,
	_COM_Outptr_opt_  void** ppvResource);
CreateCommittedResource_t backup_CreateCommittedResource = nullptr;
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
	m_createCommittedResourceCallCounter++;

	log("Hook Begin CreateCommittedResource | call time: %d", m_createCommittedResourceCallCounter);
	log("D3D12_RESOURCE_DESC:");
	//log(" - format: 0x%x", desc->Format);
	log(" - w: %d, h: %d", desc->Width, desc->Height);
	//log(" - dimension: %d", desc->Dimension);
	//log(" - sample.count: %d", desc->SampleDesc.Count);
	//log(" - sample.quality: %d", desc->SampleDesc.Quality);
	//log(" - mipmapLevels: %d", desc->MipLevels);
	//log(" - flags: %d", desc->Flags);
	//log(" - layout: %d", desc->Layout);
	//log(" - alignment: %d", desc->Alignment);
	log("  HeapFlags: %d", HeapFlags);
	log("  Initial States: %d", InitialResourceState);

	HRESULT result = 0;
	//if (m_createCommittedResourceCallCounter == 1)
	if (HeapFlags & D3D12_HEAP_FLAG_SHARED || HeapFlags & D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER)
	{
		HeapFlags &= ~D3D12_HEAP_FLAG_SHARED;
		HeapFlags &= ~D3D12_HEAP_FLAG_SHARED_CROSS_ADAPTER;
		log("patch new heap flags: %d", HeapFlags);
	}

	log("calling original func..");
	result = backup_CreateCommittedResource(self, pHeapProperties, HeapFlags, desc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
	log("	result: %x", result);
	log("device remove code: %x", GetDeviceRemoveCode());

	log("Hook End CreateCommittedResource");
	return result;
}

typedef HRESULT(*CreateSharedHandle_t)(
	ID3D12Device* self,
	_In_  ID3D12DeviceChild* pObject,
	_In_opt_  const SECURITY_ATTRIBUTES* pAttributes,
	DWORD Access,
	_In_opt_  LPCWSTR Name,
	_Out_  HANDLE* pHandle);
CreateSharedHandle_t backup_CreateSharedHandle;
HRESULT HK_CreateSharedHandle(
	ID3D12Device* self,
	_In_  ID3D12DeviceChild* pObject,
	_In_opt_  const SECURITY_ATTRIBUTES* pAttributes,
	DWORD Access,
	_In_opt_  LPCWSTR Name,
	_Out_  HANDLE* pHandle)
{
	log("Hook Begin: HK_CreateSharedHandle");
	log(" pOjbect: %p", pObject);
	log(" Name: %ls", Name);
	auto res = backup_CreateSharedHandle(self, pObject, pAttributes, Access, Name, pHandle);
	log("Hook End: HK_CreateSharedHandle");
	return res;
}

// Additional patch for CreatePlacedResource
int m_PatchCreatePlacedResourceCallCounter = 0;
typedef HRESULT(*PatchCreatePlacedResource_t)(
	ID3D12Device* device,
	ID3D12Heap* pHeap,
	UINT64 HeapOffset,
	const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialState,
	const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riid,
	void** ppvResource);
PatchCreatePlacedResource_t fpCreatePlacedResource = nullptr;

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
	m_PatchCreatePlacedResourceCallCounter++;
	D3D12_RESOURCE_DESC modifiedDesc = *pDesc;

	// Apply similar patches as CreateCommittedResource
	UINT descFlags = static_cast<UINT>(modifiedDesc.Flags);

	log("Hook Begin: CreatePlacedResource");
	log("desc flags: 0x%x", pDesc->Flags);

	if (descFlags & D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS) {
		descFlags &= ~D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS;
		modifiedDesc.Flags = static_cast<D3D12_RESOURCE_FLAGS>(descFlags);
		log("patch CreatePlacedResource: removed ALLOW_SIMULTANEOUS_ACCESS");
	}

	auto res = fpCreatePlacedResource(
		device, pHeap, HeapOffset, &modifiedDesc,
		InitialState, pOptimizedClearValue, riid, ppvResource
	);
	log("Hook End: CreatePlacedResource");
	log("	result: 0x%x", res);
	return res;
}

void LogFuncPtr(void* funcPtr) {
	auto modName = GetModuleNameFromAddress(funcPtr);
	log("[LogFuncPtr Begin]");
	log("func ptr %p", funcPtr);
	log("mod name: %s", modName);
	auto base = GetModuleHandleA(modName);
	log("func rva: %x", (uintptr_t)funcPtr - (uintptr_t)base);
	log("[LogFuncPtr End]");
}

size_t callCounter_ExecuteCommandLists;
typedef void (*ExecuteCommandLists_t)(
	ID3D12CommandQueue* self,
	_In_  UINT NumCommandLists,
	_In_reads_(NumCommandLists)  ID3D12CommandList* const* ppCommandLists);
ExecuteCommandLists_t backup_ExecuteCommandLists;
void STDMETHODCALLTYPE HK_ExecuteCommandLists(
	ID3D12CommandQueue* self,
	_In_  UINT NumCommandLists,
	_In_reads_(NumCommandLists)  ID3D12CommandList* const* ppCommandLists)
{
	callCounter_ExecuteCommandLists++;

	log("Hook Begin: HK_ExecuteCommandLists");
	log("call counter: %d", callCounter_ExecuteCommandLists);
	log("pre: device fail code: %x", GetDeviceRemoveCode());
	log("  numCommandLists: %d", NumCommandLists);
	log("  ppCmdLists: %p", ppCommandLists);

	std::vector<ID3D12CommandList*> filteredCmdLists;
	for (int i = 0; i < NumCommandLists; ++i)
	{
		ID3D12CommandList* cmd = ppCommandLists[i];
		D3D12_COMMAND_LIST_TYPE type = cmd->GetType();

		bool testClearGrayColor = false;
		if (testClearGrayColor &&
			NumCommandLists == 2 && i == 0) {
			log("skip [%d] cmd list: %p, list type: %d", i, cmd, type);
			log("try reset & manual draw back buffer");
			auto allocatorPtr = (ID3D12CommandAllocator*)(m_allocatorCmdListMap[(uintptr_t)cmd]);
			auto graphicsCmd = (ID3D12GraphicsCommandList*)cmd;
			log("allocator ptr: %p", allocatorPtr);
			auto resetHR = graphicsCmd->Reset(allocatorPtr, nullptr);
			log("reseted hr: %x", resetHR);
			log("device code: %x", GetDeviceRemoveCode());
			// 1. Transition render target to render target state (if needed)
			UINT backBufferIndex = my_swapChain->GetCurrentBackBufferIndex();
			log("current back buffer index: %d", backBufferIndex);

			ID3D12Resource* backBufferResource = nullptr;
			HRESULT hr = my_swapChain->GetBuffer(backBufferIndex, IID_PPV_ARGS(&backBufferResource));
			D3D12_RESOURCE_BARRIER barrier = {};
			barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
			barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
			barrier.Transition.pResource = backBufferResource;
			barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
			barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
			barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;

			graphicsCmd->ResourceBarrier(1, &barrier);

			// 2. Set the render target
			int rtvIndex = backBufferIndex;
			log("rtv index: %d", rtvIndex);
			D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = m_renderTargetViewList[rtvIndex];
			graphicsCmd->OMSetRenderTargets(1, &rtvHandle, FALSE, nullptr);
			log("set OM rtv to: %p", rtvHandle.ptr);

			// 3. Clear to gray color (RGBA format)
			float grayColor[4] = { 0.5f, 0.5f, 0.5f, 1.0f }; // Gray color
			graphicsCmd->ClearRenderTargetView(rtvHandle, grayColor, 0, nullptr);
			log("clear color gray");

			// 4. Transition back to present state before executing
			barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
			barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
			graphicsCmd->ResourceBarrier(1, &barrier);

			// 5. Close and execute the command list
			graphicsCmd->Close();
			log("closed cmd list");
		}

		filteredCmdLists.push_back(cmd);
		log("added [%d] cmd list: %p, list type: %d", i, cmd, type);
	}

	// patch command lists
	{
		ppCommandLists = filteredCmdLists.data();
		NumCommandLists = filteredCmdLists.size();
	}

	log("calling original func");
	backup_ExecuteCommandLists(self, NumCommandLists, ppCommandLists);

	log("post: device fail code: %x", GetDeviceRemoveCode());
	log("Hook End: HK_ExecuteCommandLists");
}


typedef  HRESULT(*CreateCommandQueue_t)(
	ID3D12Device* self,
	_In_  const D3D12_COMMAND_QUEUE_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_  void** ppCommandQueue);
CreateCommandQueue_t origin_CreateCommandQueue;

HRESULT __stdcall HK_CreateCommandQueue(
	ID3D12Device* self,
	_In_  const D3D12_COMMAND_QUEUE_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_  void** ppCommandQueue) {

	log("Hook Begin: HK_CreateCommandQueue");
	log("	desc ptr 0x%p", pDesc);
	if (pDesc) {
		log("	desc flags: %d", pDesc->Flags);
		log("	desc type: %d", pDesc->Type);
		log("	desc priority: %d", pDesc->Priority);
	}
	HRESULT result = 0;
	log("calling original function...");
	result = origin_CreateCommandQueue(self, pDesc, riid, ppCommandQueue);
	ID3D12CommandQueue* pCommandQueue = *(ID3D12CommandQueue**)ppCommandQueue;

	if (backup_ExecuteCommandLists == NULL) {
		void** vtable = *(void***)pCommandQueue;
		HookFuncAddr(vtable[10], &HK_ExecuteCommandLists, &backup_ExecuteCommandLists);
		log("setup hook ID3D12CommandQueue");
	}

	log("Hook End: HK_CreateCommandQueue");
	log("	result: %d", result);
	return result;
}

typedef __int64 (*MyCreateDefaultRenderer_t)(uint64_t* param_1, int param_2,
	int param_3, char param_4);
MyCreateDefaultRenderer_t fpMyCreateDefaultRenderer = nullptr;
__int64 HK_MyCreateDefaultRenderer(uint64_t* param_1, int param_2, int param_3, char param_4)
{
	log("Hook Begin HK_MyCreateDefaultRenderer");

	log("calling HK_MyCreateDefaultRenderer");
	ID3D12Device* device = *(ID3D12Device**)GetAddressFromRva(0x5558FA0);
	void** vtable = *(void***)device;

	DisableHook(GetFuncAddr(0x19ab970));// disable CreateDefaultRenderer

	auto res = fpMyCreateDefaultRenderer(param_1, param_2, param_3, param_4);
	log("Hook End HK_MyCreateDefaultRenderer");
	log("	result: %d", res);

	return res;
}

typedef void (*CreateRenderTargetView_t)(
	ID3D12Device* device,
	_In_opt_  ID3D12Resource* pResource,
	_In_opt_  const D3D12_RENDER_TARGET_VIEW_DESC* pDesc,
	_In_  D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
CreateRenderTargetView_t backup_CreateRenderTargetView;
void HK_CreateRenderTargetView(
	ID3D12Device* device,
	_In_opt_  ID3D12Resource* pResource,
	_In_opt_  const D3D12_RENDER_TARGET_VIEW_DESC* pDesc,
	_In_  D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor)
{
	log("Hook Begin CreateRenderTargetView");
	log("  format: 0x%x", pDesc->Format);
	log("  dimension: 0x%x", pDesc->ViewDimension);
	//auto resDesc = pResource->GetDesc();
	//log("resource desc");
	//log("  w: %d, h: %d", resDesc.Width, resDesc.Height);
	backup_CreateRenderTargetView(device, pResource, pDesc, DestDescriptor);
	m_renderTargetViewList.push_back(DestDescriptor);
	log("Hook End CreateRenderTargetView");
}

size_t callCounter_DXGI_Present;
typedef HRESULT(*DXGI_Present_t)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
DXGI_Present_t backup_DXGI_Present;
HRESULT HK_DXGIPresent(IDXGISwapChain* self, UINT syncInterval, UINT flags) {
	callCounter_DXGI_Present++;
	log("Begin HK_DXGI_Present");
	log("call counter: %d", callCounter_DXGI_Present);
	log("syncInternal: %d", syncInterval);
	log("flags: 0x%x", flags);

	IDXGISwapChain3* swap3 = nullptr;
	UINT renderIndex = -1;
	if (SUCCEEDED(my_swapChain->QueryInterface(IID_PPV_ARGS(&swap3)))) {
		renderIndex = swap3->GetCurrentBackBufferIndex();
		log("BackBuffer Index: %d", renderIndex);
		swap3->Release();
	}
	else {
		log("failed to request QueryInterface");
	}

	log("pre: device remove code: %x", GetDeviceRemoveCode());
	log("calling original function");
	//log("skip render present");
	HRESULT res = 0;
	if (callCounter_DXGI_Present >= 500) {
		res = backup_DXGI_Present(self, syncInterval, flags);
	}

	log("  result: %x", res);
	log("post: device remove code: %x", GetDeviceRemoveCode());
	log("End HK_DXGI_Present");
	return res;
}


typedef HRESULT(*CreateCommandList_t)(
	ID3D12Device* self,
	_In_  UINT nodeMask,
	_In_  D3D12_COMMAND_LIST_TYPE type,
	_In_  ID3D12CommandAllocator* pCommandAllocator,
	_In_opt_  ID3D12PipelineState* pInitialState,
	REFIID riid,
	_COM_Outptr_  void** ppCommandList
	);
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
	log("Hook Begin: CreateCommandList");
	log("  nodeMask: %d", nodeMask);
	log("  type: %d", type);
	log("  pCmdAllocator: %p", pCommandAllocator);
	log("  pInitState: %p", pInitialState);
	log("pre: device remove code: %x", GetDeviceRemoveCode());
	log("calling backup_CreateCommandList");
	auto res = backup_CreateCommandList(
		self, nodeMask, type, pCommandAllocator,
		pInitialState, riid, ppCommandList);
	log("  result: %d", res);
	log("  pCommandList: %p", *ppCommandList);
	log("  ppCommandList: %p", ppCommandList);
	ID3D12CommandList* pCmdList = *(ID3D12CommandList**)ppCommandList;
	m_allocatorCmdListMap[(uintptr_t)pCmdList] = (uintptr_t)pCommandAllocator;

	log("post: device remove code: %x", GetDeviceRemoveCode());
	log("Hook End: CreateCommandList");
	return res;
}

extern void SetupWinlatorPatcher() {
	if (IsWineEnvironment() == false) {
		log("Not running in Wine environment, skipping winlator patcher");
		return;
	}

	log("starting winlator patcher...");
	HookFuncRva(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);

#if true
	// debug zone
	//HookFuncRva(0x19ab970, &HK_MyCreateDefaultRenderer, &fpMyCreateDefaultRenderer);
	//HookFuncRva(0x1963570, &HK_MyCreateCommitRes3, &fpHK_MyCreateCommitRes3);

	//SetupHookRenderer();
	// hook vtable

#endif

	log("winlator patch successfully.");
}

