#include <iostream>
#include <windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>

bool InjectDLL(HANDLE hProcess, const char* dllPath) {
	size_t pathLen = strlen(dllPath) + 1;

	// �ͧ˹��¤������ process �������
	LPVOID allocMem = VirtualAllocEx(hProcess, NULL, pathLen, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (!allocMem) {
		std::cerr << "VirtualAllocEx failed\n";
		return false;
	}

	// ��¹ path DLL ŧ� process �������
	if (!WriteProcessMemory(hProcess, allocMem, dllPath, pathLen, NULL)) {
		std::cerr << "WriteProcessMemory failed\n";
		VirtualFreeEx(hProcess, allocMem, 0, MEM_RELEASE);
		return false;
	}

	// �֧ address �ͧ LoadLibraryA �ҡ kernel32.dll
	LPTHREAD_START_ROUTINE loadLibAddr = (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
	if (!loadLibAddr) {
		std::cerr << "GetProcAddress failed\n";
		VirtualFreeEx(hProcess, allocMem, 0, MEM_RELEASE);
		return false;
	}

	// ���ҧ thread � process ��������������¡ LoadLibraryA(dllPath)
	HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0, loadLibAddr, allocMem, 0, NULL);
	if (!hThread) {
		std::cerr << "CreateRemoteThread failed\n";
		VirtualFreeEx(hProcess, allocMem, 0, MEM_RELEASE);
		return false;
	}

	WaitForSingleObject(hThread, INFINITE);
	CloseHandle(hThread);
	VirtualFreeEx(hProcess, allocMem, 0, MEM_RELEASE);
	return true;
}
void SetupSteamAppIDFile() {
	const char* steam_appidFileName = "steam_appid.txt";
	if (std::filesystem::exists(steam_appidFileName))
		return;

	std::ofstream file(steam_appidFileName, std::ios::out | std::ios::trunc);
	if (file.is_open() == false) {
		printf("failed create file steam_appid.txt\n");
		return;
	}

	file << "1850570";
	file.close();
}

int main()
{
	printf("Launching...");
	const char* exePath = "ds.exe";
	const char* dllPath = (std::filesystem::current_path() / "mod_loader.dll").string().c_str();

	// ���ҧ process Ẻ����ѹ�ѹ�� (CREATE_SUSPENDED)
	STARTUPINFOA si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	if (!CreateProcessA(exePath, NULL, NULL, NULL, FALSE,
		CREATE_SUSPENDED, NULL, NULL, &si, &pi)) {
		std::cerr << "CreateProcess failed\n";
		system("pause");

		return 1;
	}

	// inject dll ��� process ���١ suspend ���
	if (!InjectDLL(pi.hProcess, dllPath)) {
		std::cerr << "DLL Injection failed\n";
		TerminateProcess(pi.hProcess, 1);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
		system("pause");

		return 1;
	}

	// resume thread ��ѡ�ͧ process ����ѹ������ӧҹ
	ResumeThread(pi.hThread);

	// �Դ handle ���ź process
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);

	std::cout << "Process launched and DLL injected successfully\n";
}