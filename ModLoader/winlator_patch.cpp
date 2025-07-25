#include "winlator_patch.h"
#include "utils.h"

typedef void* (*mi_win_virtual_allocx)(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags);
mi_win_virtual_allocx fpVirtualAllocX = nullptr;

void* HookedVirtualAllocX(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags) {
	log("[Hook] VirtualAllocX called");
	log("a1_addr: %p, a2_allocSize: %zu, a3_try_alignedSize: %zu, a4_flags: 0x%X", a1_addr, a2_allocSize, a3_try_alignedSize, a4_flags);
	// Call the original function
	void* result = fpVirtualAllocX(a1_addr, a2_allocSize, a3_try_alignedSize, a4_flags);
	log("result: %p", result);
	log("[Hook End] VirtualAllocX");
	return result;
}

extern void SetupWinlatorPatch() {
	HookFunc(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);
}

