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

#include "MinHook.h"

#include "types.h"

std::ofstream m_logFile("log.txt", std::ios::trunc);

void log2(const char* message)
{
	auto now = std::chrono::system_clock::now();
	auto in_time = std::chrono::system_clock::to_time_t(now);
	m_logFile << "[" << std::put_time(std::localtime(&in_time), "%F %T") << "] "
		<< message << std::endl;
}

void log(const char* format, ...)
{
	// Format string
	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	std::cout << buffer << std::endl;
	log2(buffer);
}

bool HookFunc(LPVOID targetFunc, LPVOID detour, LPVOID* originalBackup) {
	if (MH_CreateHook(targetFunc, detour, originalBackup) != MH_OK) {
		MessageBoxA(NULL, "Failed to create hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	if (MH_EnableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to enable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	log("hooked function: %p", targetFunc);

}

uintptr_t imageBase = (uintptr_t)GetModuleHandleA(NULL);
void* GetFuncAddr(uintptr_t rva) {
	return (void*)(imageBase + rva);
}
void* GetDataSection(int fileOffset) {
	return (void*)(imageBase + fileOffset);
}
bool HookFunc(uintptr_t funcRva, LPVOID detour, void* originalBackup) {
	return HookFunc(GetFuncAddr(funcRva), detour, reinterpret_cast<LPVOID*>(originalBackup));
}

MurmurHash3_t  fpMurmurHash3 = (MurmurHash3_t)GetFuncAddr(0x18fe890);
ResourceReadBuffer_t  fpResourceReadBuffer = (ResourceReadBuffer_t)GetFuncAddr(0x1929a50);

void SetupConsole()
{
	AllocConsole(); // fallback
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	freopen("CONIN$", "r", stdin);
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

