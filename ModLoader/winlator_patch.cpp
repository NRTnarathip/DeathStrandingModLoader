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

typedef HRESULT(*CreateCommittedResource_t)(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_PROPERTIES* pHeapProperties,
	D3D12_HEAP_FLAGS HeapFlags,
	_In_  const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialResourceState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riidResource,
	_COM_Outptr_opt_  void** ppvResource);

int m_createCommittedResourceCallCounter = 0;
CreateCommittedResource_t fpCreateCommittedResource = nullptr;
HRESULT Hook_CreateCommittedResource(
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
	log(" - format: 0x%x", desc->Format);
	log(" - w: %d, h: %d", desc->Width, desc->Height);
	log(" - dimension: %d", desc->Dimension);
	log(" - sample.count: %d", desc->SampleDesc.Count);
	log(" - sample.quality: %d", desc->SampleDesc.Quality);
	log(" - mipmapLevels: %d", desc->MipLevels);
	log(" - flags: %d", desc->Flags);
	log(" - layout: %d", desc->Layout);
	log(" - alignment: %d", desc->Alignment);
	log("HeapFlags: %d", HeapFlags);
	log("Initial States: %d", InitialResourceState);

	HRESULT result = 0;
	if (m_createCommittedResourceCallCounter == 1) {
		HeapFlags = D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES;
		log("use new heap flags: %d", HeapFlags);
	}

	log("calling original func..");
	result = fpCreateCommittedResource(self, pHeapProperties, HeapFlags, desc, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
	log("Hook End CreateCommittedResource");
	log("	result: %x", result);
	return result;
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
	log("calling original function...");
	auto result = origin_CreateCommandQueue(self, pDesc, riid, ppCommandQueue);
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

	if (fpCreateCommittedResource == nullptr) {
		DisableHook(GetFuncAddr(0x19ab970));

		HookFuncAddr(vtable[27], &Hook_CreateCommittedResource, reinterpret_cast<LPVOID*>(&fpCreateCommittedResource));
		log("setup hook CreateCommittedResource");

		//HookFuncAddr(vtable[29], &HK_CreatePlacedResource, reinterpret_cast<LPVOID*>(&fpCreatePlacedResource));
		//log("setup hook HK_CreatePlacedResource");

		HookFuncAddr(vtable[8], &HK_CreateCommandQueue, &origin_CreateCommandQueue);
		log("hook create command queue");

	}

	auto res = fpMyCreateDefaultRenderer(param_1, param_2, param_3, param_4);
	log("Hook End HK_MyCreateDefaultRenderer");
	log("	result: %d", res);

	return res;
}

typedef uint64_t(*HK_MyCreateCommitRes3_t)(uint64_t a1);
HK_MyCreateCommitRes3_t fpHK_MyCreateCommitRes3;
__int64 HK_MyCreateCommitRes3(__int64 a1) {
	log("Hooking HK_MyCreateCommitRes3");
	log("a1: %d", a1);
	auto res = fpHK_MyCreateCommitRes3(a1);
	log("result: %d", res);
	log("Hook End HK_MyCreateCommitRes3");
	return res;
}

typedef HRESULT(*DXGI_Present_t)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
DXGI_Present_t backup_DXGI_Present;
HRESULT HK_DXGIPresent(IDXGISwapChain* self, UINT syncInterval, UINT flags) {
	log("Begin HK_DXGI_Present");
	log("syncInternal: %d", syncInterval);
	log("flags: 0x%x", flags);
	auto res = backup_DXGI_Present(self, syncInterval, flags);
	log("End HK_DXGI_Present");
	log("  result: %x", res);
	return res;
}

typedef HRESULT(*CreateSwapChainForHwnd_t)(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
	);
CreateSwapChainForHwnd_t backup_CreateSwapChainForHwnd;
IDXGISwapChain1** my_ppSwapChain;

HRESULT HK_CreateSwapChainForHwnd(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
) {
	log("Hook Begin HK_CreateSwapChainForHwnd");
	my_ppSwapChain = ppSwapChain;
	auto res = backup_CreateSwapChainForHwnd(
		self,
		pDevice, hWnd, pDesc,
		pFullscreenDesc, pRestrictToOutput, ppSwapChain);
	log("Hook End HK_CreateSwapChainForHwnd");
	log("  result: 0x%x", res);

	log("setup hook Present, other...");

	IDXGISwapChain* swapChain = reinterpret_cast<IDXGISwapChain*>(*ppSwapChain);
	void** vtable = *(void***)(swapChain);
	auto presentFuncAddr = vtable[8];

	HookFuncAddr(presentFuncAddr, &HK_DXGIPresent, &backup_DXGI_Present);
	log("hook HK_DXGIPresent");

	return res;
}

typedef HRESULT(*MySetupDx12_t)(char* p1, uint64_t a2, int p3);
MySetupDx12_t backup_MySetupDx12;
HRESULT HK_MySetupDx12(
	char* p1, uint64_t p2, int p3)
{
	log("Hook Begin: HK_MySetupDx12");
	auto result = backup_MySetupDx12(p1, p2, p3);
	log("Hook End: HK_MySetupDx12");
	log("  result: %d", result);

	{
		IDXGIFactory2* pFactory = *(IDXGIFactory2**)(p1 + 0x10);
		log(" pFactory: %p", pFactory);
		void** vtable = *(void***)pFactory;
		void* target = vtable[15];
		log(" vtable CreateSwapChainForHwnd: %p", target);
		HookFuncAddr(target, &HK_CreateSwapChainForHwnd, &backup_CreateSwapChainForHwnd);
	}

	return result;
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
	HookFuncRva(0x19ab970, &HK_MyCreateDefaultRenderer, &fpMyCreateDefaultRenderer);
	HookFuncRva(0x19a6980, &HK_MySetupDx12, &backup_MySetupDx12);
	//HookFuncRva(0x1963570, &HK_MyCreateCommitRes3, &fpHK_MyCreateCommitRes3);

	//SetupHookRenderer();
	// hook vtable

#endif

	log("winlator patch successfully.");
}

