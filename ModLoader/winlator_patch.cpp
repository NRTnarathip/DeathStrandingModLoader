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

void LogFuncPtr(void* funcPtr) {
	auto modName = GetModuleNameFromAddress(funcPtr);
	log("[LogFuncPtr Begin]");
	log("func ptr %p", funcPtr);
	log("mod name: %s", modName);
	auto base = GetModuleHandleA(modName);
	log("func rva: %x", (uintptr_t)funcPtr - (uintptr_t)base);
	log("[LogFuncPtr End]");
}

extern void SetupWinlatorPatcher() {
	if (IsWineEnvironment() == false) {
		log("Not running in Wine environment, skipping winlator patcher");
		return;
	}

	log("starting winlator patcher...");
	HookFuncRva(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);
	RendererHook::Instance();

#if DEV
	// debug zone
	//HookFuncRva(0x19ab970, &HK_MyCreateDefaultRenderer, &fpMyCreateDefaultRenderer);
	//HookFuncRva(0x1963570, &HK_MyCreateCommitRes3, &fpHK_MyCreateCommitRes3);

	//SetupHookRenderer();
	// hook vtable
#endif

	log("winlator patch successfully.");
}

