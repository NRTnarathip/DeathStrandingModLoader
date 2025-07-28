#include "winlator_patch.h"
#include "utils.h"
#include <windows.h>
#include <psapi.h>
#include <iostream>
#include <thread>
#include <stdlib.h>
#include "mydx12.h"
#include <Windows.h>
#include <winternl.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>

typedef void* (*mi_win_virtual_allocx)(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags);
mi_win_virtual_allocx fpVirtualAllocX = nullptr;
typedef PVOID(__stdcall* PVirtualAlloc2)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);

const size_t* m_mi_os_page_size_ptr = (size_t*)GetAddressFromRva(0x4f53748);;
size_t _mi_os_page_size() {
	return *m_mi_os_page_size_ptr;
}

void* HookedVirtualAllocX(LPVOID a1_addr, size_t a2_allocSize, size_t try_alignment, DWORD a4_flags) {
	//log("[Hook Begin] VirtualAllocX calling");
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

	//log("[Hook End] VirtualAllocX");
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

CreateCommittedResource_t fpCreateCommittedResource = nullptr;
HRESULT Hook_CreateCommittedResource(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_PROPERTIES* pHeapProperties,
	D3D12_HEAP_FLAGS HeapFlags,
	_In_  const D3D12_RESOURCE_DESC* des,
	D3D12_RESOURCE_STATES InitialResourceState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riidResource,
	_COM_Outptr_opt_  void** ppvResource)
{

	log("Hook Begin CreateCommittedResource");
	log("D3D12_RESOURCE_DESC:");
	log(" - format: 0x%x", des->Format);
	log(" - w: %d, h: %d", des->Width, des->Height);
	log(" - dimension: %d", des->Dimension);
	log(" - sample.count: %d", des->SampleDesc.Count);
	log(" - sample.quality: %d", des->SampleDesc.Quality);
	log(" - mipmapLevels: %d", des->MipLevels);
	log(" - flags: %d", des->Flags);
	log(" - layout: %d", des->Layout);
	log(" - alignment: %d", des->Alignment);

	log("calling func..");
	auto result = fpCreateCommittedResource(self, pHeapProperties, HeapFlags, des, InitialResourceState, pOptimizedClearValue, riidResource, ppvResource);
	log("result: %x", result);
	log("Hook End CreateCommittedResource");
	return result;
}


typedef __int64 (*MySetupDXGIFactory2_t)(uint64_t* param_1, int param_2,
	int param_3, char param_4);
MySetupDXGIFactory2_t fpHook_MySetupDXGIFactory2 = nullptr;

void LogFuncPtr(void* funcPtr) {
	auto modName = GetModuleNameFromAddress((uintptr_t)funcPtr);
	log("[LogFuncPtr Begin]");
	log("func ptr %p", funcPtr);
	log("mod name: %s", modName);
	auto base = GetModuleHandleA(modName);
	log("func rva: %x", (uintptr_t)funcPtr - (uintptr_t)base);
	log("[LogFuncPtr End]");
}

__int64 Hook_MySetupDXGIFactory2(uint64_t* param_1, int param_2, int param_3, char param_4)
{
	log("Hook Begin Hook_MySetupDXGIFactory2");

	log("calling fpHook_MySetupDXGIFactory2");
	ID3D12Device* device = *(ID3D12Device**)GetAddressFromRva(0x5558FA0);
	log("device ptr: %p", device);
	void** vtable = *(void***)device;
	LogFuncPtr(vtable[27]);
	LogFuncPtr(vtable[25]);
	system("pause");

	if (fpCreateCommittedResource == nullptr) {
		DisableHook(GetFuncAddr(0x19ab970));
		HookFuncAddr(vtable[27], &Hook_CreateCommittedResource, reinterpret_cast<LPVOID*>(&fpCreateCommittedResource));
		log("setup hook CreateCommittedResource");
	}

	auto res = fpHook_MySetupDXGIFactory2(param_1, param_2, param_3, param_4);
	log("result: %d", res);
	log("Hook End Hook_MySetupDXGIFactory2");


	return res;
}

extern void SetupWinlatorPatch() {
	// set false debug on Windows!
#if false
	if (!IsWineEnvironment()) {
		log("Not running in Wine environment, skipping winlator patch.");
		return;
	}
#endif

	log("starting patch for winlator...");
	if (IsWineEnvironment()) {
		HookFuncRva(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);
	}

	HookFuncRva(0x19ab970, &Hook_MySetupDXGIFactory2, &fpHook_MySetupDXGIFactory2);
	//HookFunc(0x1978800, &HookMySus2, &fpMySus2);
	log("winlator patch completed successfully.");
}

