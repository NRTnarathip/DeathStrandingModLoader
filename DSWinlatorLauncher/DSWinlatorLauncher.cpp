#include <filesystem>
#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <vector>

int InjectDLL(DWORD dwProcessID, const char* dllFullPath) {
	printf("[DLL Injector]\n");
	printf("Process ID : %i\n\n", (int)dwProcessID);

	const HANDLE hTargetProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessID);
	if (hTargetProcess == INVALID_HANDLE_VALUE)
	{
		printf("An error is occured when trying to open the target process.\n");
		return -1;
	}

	printf("[PROCESS INJECTION]\n");
	printf("Process opened successfully.\n");

	const LPVOID lpPathAddress = VirtualAllocEx(hTargetProcess, nullptr, lstrlenA(dllFullPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	if (lpPathAddress == nullptr)
	{
		printf("An error is occured when trying to allocate memory in the target process.\n");
		return -1;
	}

	printf("Memory allocate at 0x%X\n", (UINT)(uintptr_t)lpPathAddress);

	const DWORD dwWriteResult = WriteProcessMemory(hTargetProcess, lpPathAddress,
		dllFullPath, strlen(dllFullPath) + 1, nullptr);
	if (dwWriteResult == 0)
	{
		printf("An error is occured when trying to write the DLL path in the target process.\n");
		return -1;
	}

	printf("DLL path writen successfully.\n");

	const HMODULE hModule = GetModuleHandleA("kernel32.dll");
	if (hModule == INVALID_HANDLE_VALUE || hModule == nullptr)
		return -1;

	const FARPROC lpFunctionAddress = GetProcAddress(hModule, "LoadLibraryA");
	if (lpFunctionAddress == nullptr)
	{
		printf("An error is occured when trying to get \"LoadLibraryA\" address.\n");
		return -1;
	}

	printf("LoadLibraryA address at 0x%X\n", (UINT)(uintptr_t)lpFunctionAddress);

	const HANDLE hThreadCreationResult = CreateRemoteThread(hTargetProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)lpFunctionAddress, lpPathAddress, 0, nullptr);
	if (hThreadCreationResult == INVALID_HANDLE_VALUE)
	{
		printf("An error is occured when trying to create the thread in the target process.\n");
		return -1;
	}

	printf("DLL Injected !\n");
}

int InjectGame(const char* gamePathPtr, const char* dllPathPtr, DWORD* gamePID)
{
	LPSTR gamePath = const_cast<LPSTR>(gamePathPtr);
	LPSTR dllPath = const_cast<LPSTR>(dllPathPtr);
	int i, len;
	void* page;
	STARTUPINFO si = { 0 };
	PROCESS_INFORMATION pi = { 0 };
	HANDLE hThread;

	// Execute the process in suspended mode.
	si.cb = sizeof(STARTUPINFO);

	if (!CreateProcessA(NULL, gamePath, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &si, &pi)) {
		fprintf(stderr, "CreateProcess(\"%s\") failed; error code = 0x%08X\n", gamePath, GetLastError());
		return 1;
	}
	*gamePID = pi.dwProcessId; // Store the PID of the created process

	// Allocate a page in memory for the arguments of LoadLibrary.
	page = VirtualAllocEx(pi.hProcess, NULL, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (page == NULL) {
		fprintf(stderr, "VirtualAllocEx failed; error code = 0x%08X\n", GetLastError());
		return 1;
	}
	printf("Allocated page at %p in the address space of the process.\n", page);

	// Inject the ordered list of shared libraries into the address space of the
	// process.
	len = strlen(dllPath) + 1;
	if (len > MAX_PATH) {
		fprintf(stderr, "path length (%d) exceeds MAX_PATH (%d).\n", len, MAX_PATH);
		return 1;
	}
	if (GetFileAttributes(dllPath) == INVALID_FILE_ATTRIBUTES) {
		fprintf(stderr, "unable to locate library (%s).\n", dllPath);
		return 1;
	}

	// Write library path to the page used for LoadLibrary arguments.
	if (WriteProcessMemory(pi.hProcess, page, dllPath, len, NULL) == 0) {
		fprintf(stderr, "WriteProcessMemory failed; error code = 0x%08X\n", GetLastError());
		return 1;
	}
	printf("Wrote %d bytes to the page at %p in the address space of the process.\n", len, page);

	// Inject the shared library into the address space of the process,
	// through a call to LoadLibrary.
	hThread = CreateRemoteThread(pi.hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, page, 0, NULL);
	if (hThread == NULL) {
		fprintf(stderr, "CreateRemoteThread failed; error code = 0x%08X\n", GetLastError());
		return 1;
	}

	// Wait for DllMain to return.
	printf("wait for DllMain return....");
	if (WaitForSingleObject(hThread, INFINITE) == WAIT_FAILED) {
		fprintf(stderr, "WaitForSingleObject failed; error code = 0x%08X\n", GetLastError());
		return 1;
	}
	printf("done dll main return\n");

	DWORD exitCode = 0;
	if (!GetExitCodeThread(hThread, &exitCode)) {
		fprintf(stderr, "GetExitCodeThread failed; error code = 0x%08X\n", GetLastError());
	}
	else if (exitCode == 0) {
		fprintf(stderr, "LoadLibrary failed in remote process.\n");
	}
	else {
		printf("[+] DLL injected successfully at 0x%p\n", (LPVOID)exitCode);
	}

	CloseHandle(hThread);

	// Resume the execution of the process, once all libraries have been injected
	// into its address space.
	if (ResumeThread(pi.hThread) == -1) {
		fprintf(stderr, "ResumeThread failed; error code = 0x%08X\n", GetLastError());
		return 1;
	}

	// Cleanup.
	VirtualFreeEx(pi.hProcess, page, 0, MEM_RELEASE);
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);

	return 0;
}


uint64_t GetProcessCreateTimeFromPID(DWORD pid) {
	HANDLE hProc = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, pid);
	if (!hProc) {
		std::cerr << "OpenProcess failed: " << GetLastError() << "\n";
		return 0;
	}

	FILETIME ftCreate, ftExit, ftKernel, ftUser;
	if (!GetProcessTimes(hProc, &ftCreate, &ftExit, &ftKernel, &ftUser)) {
		std::cerr << "GetProcessTimes failed: " << GetLastError() << "\n";
		CloseHandle(hProc);
		return 0;
	}

	ULARGE_INTEGER li;
	li.LowPart = ftCreate.dwLowDateTime;
	li.HighPart = ftCreate.dwHighDateTime;

	CloseHandle(hProc);
	return li.QuadPart; // 100-nanosecond intervals since Jan 1, 1601 UTC
}
DWORD GetPIDByProcessName(const char* processName)
{
	DWORD PID = 0;
	HANDLE hProcessSnapshot;
	PROCESSENTRY32 PE32;

	// Take a snapshot of all processes in the system.
	hProcessSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	if (hProcessSnapshot == INVALID_HANDLE_VALUE)
	{
		std::cout << "<CreateToolhelp32Snapshot> Invalid handle";
		return 0;
	}

	// Set the size of the structure before using it.
	PE32.dwSize = sizeof(PROCESSENTRY32);

	// Retrieves information about the first process and exit if unsuccessful
	if (!Process32First(hProcessSnapshot, &PE32))
	{
		std::cout << "<Process32First> Error " << GetLastError() << '\n';
		CloseHandle(hProcessSnapshot);
		return 0;
	}

	// Now walk the snapshot of processes,
	// and find the right process then get its PID
	do
	{
		// Returns 0 value indicates that both wchar_t* string are equal
		if (strcmp(processName, PE32.szExeFile) == 0)
		{
			PID = PE32.th32ProcessID;
			break;
		}
	} while (Process32Next(hProcessSnapshot, &PE32));

	CloseHandle(hProcessSnapshot);
	return PID;
}
bool IsModuleLoaded(DWORD pid, const wchar_t* moduleName) {
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
	if (hSnap == INVALID_HANDLE_VALUE)
		return false;

	MODULEENTRY32W me = { sizeof(me) };
	if (Module32FirstW(hSnap, &me)) {
		do {
			if (_wcsicmp(me.szModule, moduleName) == 0) {
				CloseHandle(hSnap);
				return true; // module ¶Ù¡âËÅ´áÅéÇ
			}
		} while (Module32NextW(hSnap, &me));
	}

	CloseHandle(hSnap);
	return false; // module ÂÑ§äÁè¶Ù¡âËÅ´
}
std::string GetCurrentExePath() {
	std::vector<char> pathBuf(MAX_PATH);
	DWORD result = GetModuleFileNameA(NULL, pathBuf.data(), pathBuf.size());

	if (result == 0) {
		// Handle error, e.g., using GetLastError()
		return "";
	}
	else if (result < pathBuf.size()) {
		return std::string(pathBuf.data());
	}
	else {
		// Buffer was too small, handle by resizing and retrying
		// (simplified for brevity, a robust solution would loop)
		return "";
	}
}

int main() {
	UINT64 lastCreateTime = 0;
	if (GetPIDByProcessName("ds.exe")) {
		printf("Game is already running, please close game first!!\n");
		system("pause");
		return 0;
	}

	auto currentExePath = GetCurrentExePath();
	const char* dllFileName = "mod_test.dll";
	//const char* dllFileName = "mod_loader.dll";
	auto dllPathStr = currentExePath.substr(0, currentExePath.find_last_of('\\') + 1) + dllFileName;
	auto gamePathStr = currentExePath.substr(0, currentExePath.find_last_of('\\') + 1) + "ds.exe";
	DWORD injectPID;
	InjectGame(gamePathStr.c_str(), dllPathStr.c_str(), &injectPID);
	system("pause");

	return 0;

	// starting
	printf("starting game...\n");
	ShellExecute(NULL, "open", "ds.exe", NULL, NULL, SW_SHOWDEFAULT);
	printf("waiting for game to start...\n");
	int injectCount = 0;
	while (true) {
		DWORD pid = GetPIDByProcessName("ds.exe");
		if (pid == 0) {
			continue;
		}

		auto checkCreateTime = GetProcessCreateTimeFromPID(pid);
		if (checkCreateTime == lastCreateTime)
			continue;

		lastCreateTime = checkCreateTime;

		if (!IsModuleLoaded(pid, L"mod_loader.dll")) {
			printf("starting inject dll\n");
			InjectDLL(pid, dllPathStr.c_str());
			injectCount++;
			if (injectCount == 2)
				break;
		}
		else {
			//printf("Mod is already loaded!\n");
		}
	}

	printf("Finished launcher.\n");
	printf("closing in 3 seconds...\n");
	Sleep(3000);
	return 0;
}

