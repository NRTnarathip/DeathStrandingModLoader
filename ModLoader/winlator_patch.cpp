#include "winlator_patch.h"
#include "utils.h"
#include <windows.h>
#include <psapi.h>
#include <iostream>
#include <thread>
#include <stdlib.h>

typedef void* (*mi_win_virtual_allocx)(LPVOID a1_addr, size_t a2_allocSize, size_t a3_try_alignedSize, DWORD a4_flags);
mi_win_virtual_allocx fpVirtualAllocX = nullptr;
typedef PVOID(__stdcall* PVirtualAlloc2)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);

const size_t* m_mi_os_page_size_ptr = (size_t*)GetAddressFromRva(0x4f53748);;
size_t _mi_os_page_size() {
	return *m_mi_os_page_size_ptr;
}

void* HookedVirtualAllocX(LPVOID a1_addr, size_t a2_allocSize, size_t try_alignment, DWORD a4_flags) {
	log("[Hook Begin] VirtualAllocX calling");
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
			auto osPageSize = _mi_os_page_size();
			log("_mi_os_page_size: %x", osPageSize);
			auto pVirtualAlloc2 = (PVirtualAlloc2)(*(uintptr_t*)GetAddressFromRva(0x7e6e150));

			if (try_alignment > 0 && (try_alignment % osPageSize) == 0 && pVirtualAlloc2 != NULL) {
				MEM_ADDRESS_REQUIREMENTS reqs = { 0, 0, 0 };
				reqs.Alignment = try_alignment;
				MEM_EXTENDED_PARAMETER param = { {0, 0}, {0} };
				param.Type = MemExtendedParameterAddressRequirements;
				param.Pointer = &reqs;
				returnResult = pVirtualAlloc2(GetCurrentProcess(), a1_addr, a2_allocSize, a4_flags, PAGE_READWRITE, &param, 1);
				log("VirtualAllocV2 result: %p", returnResult);
			}
		}
	}

	log("result: %p", returnResult);

	log("[Hook End] VirtualAllocX");
	return returnResult;
}

extern void SetupWinlatorPatch() {
	if (!IsWineEnvironment()) {
		log("Not running in Wine environment, skipping winlator patch.");
		return;
	}

	log("starting patch for winlator...");
	HookFunc(0x38fed90, &HookedVirtualAllocX, &fpVirtualAllocX);
	log("winlator patch completed successfully.");

#define setenv SetEnvironmentVariableA
	// �Դ/�Դ log
	setenv("MIMALLOC_SHOW_STATS", "0");           // �ʴ�ʶԵ� memory
	setenv("MIMALLOC_VERBOSE", "0");              // �Դ log verbose
	setenv("MIMALLOC_SHOW_ERRORS", "0");              // �Դ log verbose

	// �׹ memory ��Ѻ OS ����
	setenv("MIMALLOC_RESET_DECOMMIT", "1");       // decommit memory �ѹ������� free
	setenv("MIMALLOC_PAGE_RESET", "1");           // reset page �� 0 (����Ŵ RSS)
	setenv("MIMALLOC_SEGMENT_RESET", "1");        // reset segment ����������
	setenv("MIMALLOC_EAGER_COMMIT", "0");         // ���Ҩͧ RAM ��ǧ˹�� (lazy alloc)
	setenv("MIMALLOC_EAGER_REGION_COMMIT", "0");  // ����͹��ҧ�� ������Ѻ region
	setenv("MIMALLOC_ABANDONED_PAGE_RESET", "0");  // ����͹��ҧ�� ������Ѻ region

	// �Դ feature ���Թ���
	setenv("MIMALLOC_LARGE_OS_PAGES", "0");       // ����� huge pages
	setenv("MIMALLOC_RESERVE_HUGE_OS_PAGES", "0");// ���ͧ huge page ��ǧ˹��
	setenv("MIMALLOC_CACHE_RESET", "1");          // ������ thread-local cache �ѹ��

	// �������: �������ͧ��� thread-local heap ����
	setenv("MIMALLOC_MAX_SEGMENTS", "16");        // �ӡѴ segment
	setenv("MIMALLOC_MAX_ARENAS", "1");           // �ӡѴ heap arenas (multi-thread ���������ѹ�ҡ���)

	// ��Ѻ padding ������ (Ŵ��áѹ RAM)
	setenv("MIMALLOC_PADDING", "0");

	std::thread([] {
		while (true) {
			HANDLE hProcess = GetCurrentProcess();
			SetProcessWorkingSetSize(hProcess, -1, -1);
			log("Waiting for clear working set...");
			std::this_thread::sleep_for(std::chrono::seconds(1));
			log("Cleared working set.");
			PROCESS_MEMORY_COUNTERS pmc;
			if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc))) {
				log("Memory usage: %.2f mb", pmc.WorkingSetSize / (1024.0 * 1024.0));
				log("Peak memory usage: %.2f mb", pmc.PeakWorkingSetSize / (1024.0 * 1024.0));
				log("Page file usage: %.2f mb", pmc.PagefileUsage / (1024.0 * 1024.0));
				log("Peak page file usage: %.2f mb", pmc.PeakPagefileUsage / (1024.0 * 1024.0));
			}
		}
		}).detach();
}

