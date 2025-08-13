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
#include "RendererHook.h"

//global, static variable
// allocatorAddr, cmdListAddr
std::unordered_map<uintptr_t, uintptr_t> m_allocatorCmdListMap;
IDXGISwapChain3* my_swapChain;
std::vector<D3D12_CPU_DESCRIPTOR_HANDLE> m_renderTargetViewList;

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


void LogFuncPtr(void* funcPtr) {
	auto modName = GetModuleNameFromAddress(funcPtr);
	log("[LogFuncPtr Begin]");
	log("func ptr %p", funcPtr);
	log("mod name: %s", modName);
	auto base = GetModuleHandleA(modName);
	log("func rva: %x", (uintptr_t)funcPtr - (uintptr_t)base);
	log("[LogFuncPtr End]");
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

