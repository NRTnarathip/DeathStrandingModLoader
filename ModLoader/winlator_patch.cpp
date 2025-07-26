#include "winlator_patch.h"
#include "utils.h"

typedef void* (*mi_win_virtual_allocx)(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags);
mi_win_virtual_allocx fpVirtualAllocX = nullptr;
typedef PVOID(__stdcall* PVirtualAlloc2)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, /* MEM_EXTENDED_PARAMETER* */ void*, ULONG);

void* HookedVirtualAllocX(LPVOID a1_addr, size_t a2_allocSize, size_t try_alignment, DWORD a4_flags) {
	log("[Hook] VirtualAllocX called");
	log("addr: %p, allocSize: %zu, try_alignedSize: %zu, flags: 0x%X", a1_addr, a2_allocSize, try_alignment, a4_flags);
	// Call the original function
	log("calling..");
	void* returnResult = fpVirtualAllocX(a1_addr, a2_allocSize, try_alignment, a4_flags);
	log("VirtualAllocX result: %p", returnResult);

	if (returnResult == NULL) {
		DWORD err = GetLastError();
		log("VirtualAllocX failed with error: %x", err);

		if (err != ERROR_INVALID_ADDRESS &&   // If linked with multiple instances, we may have tried to allocate at an already allocated area (#210)
			err != ERROR_INVALID_PARAMETER) { // Windows7 instability (#230)
			// return it with null;
		}
		else {
			log("try allocate with VirtualAlloc v2");

			PVirtualAlloc2 pVirtualAlloc2 = (PVirtualAlloc2)GetAddressFromRva(0x7e6e150);
			log("pVirtualAlloc2: %p\n", pVirtualAlloc2);

			auto _mi_os_page_size = (size_t)GetAddressFromRva(0x4f53748);
			log("_mi_os_page_size: %x\n", _mi_os_page_size);

			if (try_alignment > 0 && (try_alignment % _mi_os_page_size) == 0 && pVirtualAlloc2 != NULL) {
				MEM_ADDRESS_REQUIREMENTS reqs = { 0, 0, 0 };
				reqs.Alignment = try_alignment;
				MEM_EXTENDED_PARAMETER param = { {0, 0}, {0} };
				param.Type = MemExtendedParameterAddressRequirements;
				param.Pointer = &reqs;
				returnResult = (*pVirtualAlloc2)(GetCurrentProcess(), a1_addr, a2_allocSize, a4_flags, PAGE_READWRITE, &param, 1);
			}
		}
	}

	log("result: %p", returnResult);
	log("[Hook End] VirtualAllocX");
	return returnResult;
}

extern void SetupWinlatorPatch() {
	log("starting patch for winlator...");
	HookFunc(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);
	log("winlator patch completed successfully.");
}

