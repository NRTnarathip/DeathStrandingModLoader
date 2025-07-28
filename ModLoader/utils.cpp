#include "utils.h"

#include <Windows.h>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdint>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdarg>
#include <sstream>
#include <boost/stacktrace.hpp>
#include <map>
#include <string>
#include <tchar.h>
#include <cstdio>

#include "MinHook.h"
#include "types.h"

#define ENABLE_LOG

#ifdef ENABLE_LOG
std::ofstream m_logFile("log.txt", std::ios::out | std::ios::trunc);
#endif

void log(const char* format, ...)
{
	// Format string
	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

#ifdef ENABLE_LOG
	std::cout << buffer << std::endl;
	auto now = std::chrono::system_clock::now();
	auto in_time = std::chrono::system_clock::to_time_t(now);
	m_logFile << "[" << std::put_time(std::localtime(&in_time), "%F %T")
		<< "] " << buffer << std::endl;
#endif
}
bool DisableHook(LPVOID targetFunc) {
	//auto targetFunc = GetFuncAddr(funcRva);
	if (MH_DisableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to disable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	return true;
}

bool HookFuncAddr(LPVOID targetFunc, LPVOID detour, LPVOID* originalBackup) {
	if (MH_CreateHook(targetFunc, detour, originalBackup) != MH_OK) {
		MessageBoxA(NULL, "Failed to create hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	if (MH_EnableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to enable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	//log("hooked function: %p", targetFunc);
}

uintptr_t imageBase = (uintptr_t)GetModuleHandleA(NULL);
void* GetFuncAddr(uintptr_t rva) {
	return (void*)(imageBase + rva);
}

void* GetAddressFromRva(int rva) {
	return (void*)(imageBase + rva);
}
bool HookFuncRva(uintptr_t funcRva, LPVOID detour, void* backup) {
	return HookFuncAddr(GetFuncAddr(funcRva), detour, reinterpret_cast<LPVOID*>(backup));
}

bool HookFuncModule(const char* moduleName, uintptr_t funvRva, LPVOID detour, void* backup) {
	auto hModule = GetModuleHandleA(moduleName);
	return HookFuncAddr((void*)(hModule + funvRva), detour, reinterpret_cast<LPVOID*>(backup));
}

MurmurHash3_t  fpMurmurHash3 = (MurmurHash3_t)GetFuncAddr(0x18fe890);
ResourceReadBuffer_t  fpResourceReadBuffer = (ResourceReadBuffer_t)GetFuncAddr(0x1929a50);

bool IsWineEnvironment() {
	HKEY hKey;
	if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Wine", 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
		RegCloseKey(hKey);
		return true;
	}
	return false;
}


void SetupConsole()
{
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	freopen("CONIN$", "r", stdin);

	if (IsWineEnvironment()) {
		freopen("console.txt", "w", stdout);
		freopen("console.txt", "w", stderr);
	}

	//HWND hWnd = GetConsoleWindow();
	//SetWindowPos(hWnd, HWND_TOPMOST,
	//	0, 0, 0, 0,
	//	SWP_NOMOVE | SWP_NOSIZE);
	//log("Console window set to topmost.");
}
DWORD g_mainThreadId = GetCurrentThreadId();
bool IsMainThread() {
	return GetCurrentThreadId() == g_mainThreadId;
}

void  WaitForDebug() {
	log("waiting for debugger to attach...");
	while (!IsDebuggerPresent())
	{
		Sleep(100);
	}
	log("some debug attached");
}


void PrintStackTrace() {
	std::ostringstream oss;
	oss << boost::stacktrace::stacktrace();
	std::string str = oss.str();
	log("%s", str.c_str());
}

bool WriteMovRaxInstruction(void* addr, uintptr_t value)
{
	DWORD oldProtect;
	const size_t instrSize = 10; // 2 (opcode) + 8 (immediate64)

	// ����¹ memory protection �����¹��
	if (!VirtualProtect(addr, instrSize, PAGE_EXECUTE_READWRITE, &oldProtect))
	{
		std::cerr << "VirtualProtect failed: " << GetLastError() << std::endl;
		return false;
	}

	uint8_t* p = (uint8_t*)addr;
	p[0] = 0x48;      // REX.W prefix
	p[1] = 0xB8;      // mov rax, imm64 opcode

	// ��¹ immediate64 �����ѧ opcode
	*(uintptr_t*)(p + 2) = value;

	// �׹��� protection ���
	DWORD tmp;
	VirtualProtect(addr, instrSize, oldProtect, &tmp);

	return true;
}
std::string GetCurrentExePath() {
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	return std::string(buffer);
}
std::string GetCurrentExeDir() {
	std::string path = GetCurrentExePath();
	size_t pos = path.find_last_of("\\/");
	return (pos != std::string::npos) ? path.substr(0, pos) : path;
}
bool FillBytes(uintptr_t startRva, void* bytes, int size) {
	DWORD oldProtect;
	auto addr = GetAddressFromRva(startRva);

	// ����¹�Է��� memory �� writable
	if (!VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, &oldProtect))
		return false;

	memcpy(addr, bytes, size);
	auto hProc = GetCurrentProcess();
	size_t writeBytes;
	WriteProcessMemory(hProc, addr, bytes, size, &writeBytes);
	FlushInstructionCache(hProc, addr, size);
	VirtualProtect(addr, size, oldProtect, &oldProtect);
	return true;
}

bool FillNopStartEnd(uintptr_t startRva, uintptr_t endRva) {
	if (startRva >= endRva)
		return false;

	auto size = endRva - startRva;
	std::vector<char> bytes(size, static_cast<char>(0x90));
	if (FillBytes(startRva, bytes.data(), size)) {
		log("filled nop start %x --> %x", startRva, endRva);
	}
	else {
		log("Error can't fill nop");
	}
}


const char* GetModuleNameFromAddress(uintptr_t funcAddr) {
	HMODULE hMod = nullptr;
	if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (LPCTSTR)funcAddr, &hMod)) {
		char moduleName[MAX_PATH];
		if (GetModuleFileNameA(hMod, moduleName, MAX_PATH)) {
			return moduleName;
		}
		else {
			std::cout << "GetModuleFileNameA failed.\n";
			return "empty";
		}
	}
	else {
		std::cout << "GetModuleHandleEx failed.\n";
		return "empty";
	}
}
