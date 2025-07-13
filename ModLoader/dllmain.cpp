// dllmain.cpp : Defines the entry point for the DLL application.

#include "pch.h"
#include <Windows.h>
#include "MinHook.h"
#include <stdio.h>
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include "classes.h"
#include <cstdio>
#include <boost/stacktrace.hpp>
#include <sstream>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <psapi.h>
#include <strsafe.h>
#include <string>
#include <map>

#include "header.h"

#include "helper.hpp"


#if defined _M_X64
#pragma comment(lib, "libMinHook.x64.lib")
#elif defined _M_IX86
#pragma comment(lib, "libMinHook.x86.lib")
#endif

std::ofstream m_logFile("log.txt", std::ios::trunc);

void Log(const char* message)
{
	auto now = std::chrono::system_clock::now();
	auto in_time = std::chrono::system_clock::to_time_t(now);
	m_logFile << "[" << std::put_time(std::localtime(&in_time), "%F %T") << "] "
		<< message << std::endl;
}

void print(const char* format, ...)
{
	// Format string
	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	std::cout << buffer << std::endl;
	Log(buffer);
}

void PrintStack() {
	// แสดงผล stack trace
	static std::string buffer;
	std::ostringstream oss;
	boost::stacktrace::stacktrace st;
	oss << st;
	buffer = oss.str();
	print("stack trace...");
	print(buffer.c_str());
	print("end stack trace");
}


typedef UINT64(__fastcall* CheckFileExist_t)(UINT64 param_1, LONGLONG* param_2, LONGLONG pathPattern);

CheckFileExist_t CheckFileExist_original = nullptr;


UINT64 __fastcall HookedCheckFileExist(UINT64 param_1, LONGLONG* param_2, LONGLONG param3_pathPattern)
{
	auto patternStr = std::string(reinterpret_cast<const char*>(param3_pathPattern));

	// print หรือ debug pattern ที่ค้นหา
	if (
		patternStr.find("checkpoint") != std::string::npos
		|| patternStr.find("::") != std::string::npos
		|| patternStr.find("]") != std::string::npos
		|| patternStr.find("slotinfo") != std::string::npos
		|| patternStr.find("PS") != std::string::npos
		|| patternStr.find("VS") != std::string::npos
		|| patternStr.empty())
		return CheckFileExist_original(param_1, param_2, param3_pathPattern);

	print("[Hook] CheckFileExists");
	print("pattern: %s", patternStr.c_str() ? patternStr.c_str() : "NULL");
	print("param2: %p, *param2: 0x%llX", param_2, *param_2);
	int metadata = *(int*)((uintptr_t)(*param_2) - 8);
	print("metadata: 0x%X", metadata);

	print("[Hook] End");

	return CheckFileExist_original(param_1, param_2, param3_pathPattern);
}
void SetupConsole()
{
	AllocConsole(); // fallback
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	freopen("CONIN$", "r", stdin);
}

uintptr_t base = -1;
void* GetFuncAddr(uintptr_t rva) {
	if (base == -1)
		base = (uintptr_t)GetModuleHandleA(NULL); // ds.exe main exe

	return (void*)(base + rva);
}

// typedef ฟังก์ชันเดิม
using FUN_14190b4f0_t = uint64_t(__fastcall*)(uint64_t, const char*, int64_t);

// pointer เก็บฟังก์ชันเดิม
FUN_14190b4f0_t FUN_14190b4f0_backup = nullptr;

// ฟังก์ชัน hook
uint64_t __fastcall Hooked_FUN_14190b4f0(uint64_t param_1, const char* param_2, INT64 param_3)
{
	print("[Hook] Called FUN_14190b4f0");
	print("param2: %s", param_2);

	auto result = FUN_14190b4f0_backup(param_1, param_2, param_3);
	print("result: %i", result);

	return result;
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
	print("hooked function: %p", targetFunc);

}
bool HookFunc(uintptr_t funcRva, LPVOID detour, LPVOID* originalBackup) {
	return HookFunc(GetFuncAddr(funcRva), detour, originalBackup);
}


decltype(&CreateFileW) fpCreateFileW = nullptr;

HANDLE WINAPI HookedCreateFileW(
	LPCWSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile)
{
	print("hooking CreateFileW: %ls", lpFileName);

	//PrintStack();

	//print("[Calling] CreateFilwW");
	auto result = fpCreateFileW(
		lpFileName,
		dwDesiredAccess,
		dwShareMode,
		lpSecurityAttributes,
		dwCreationDisposition,
		dwFlagsAndAttributes,
		hTemplateFile
	);
	//print("[Called] CreateFilwW");


	print("[Hook Return]");
	return result;
}

typedef void (*LoadArchiveBinFunc)(ResourceManager* resManager, uint64_t param_2, int param_3);
LoadArchiveBinFunc loadArchiveBinFuncBackup = nullptr;

void __fastcall Hook_LoadArchiveBin(ResourceManager* resManager, uint64_t param_2, int param_3)
{
	print("[Hook] LoadArchiveBin called");
	print("resManager: 0x%llX, param_2: 0x%llX, param_3: %d", resManager, param_2, param_3);

	loadArchiveBinFuncBackup(resManager, param_2, param_3);
}

typedef BOOL(WINAPI* ReadFile_t)(
	HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED);
ReadFile_t fpReadFile = nullptr;

std::map<std::string, int> magicCache;

BOOL WINAPI HookReadFile(
	HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead,
	LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
{
	auto path = GetFileNameFromHandle(hFile);
	if (lpOverlapped == nullptr || path.empty() || path.length() >= 200)
		return fpReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);

	LONGLONG currentPos = GetCurrentPos(hFile);
	BOOL result = fpReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
	DWORD bytesReaded = 0;
	if (GetOverlappedResult(hFile, lpOverlapped, &bytesReaded, TRUE /* bWait: TRUE for blocking */)) {
		if (lpNumberOfBytesRead != NULL)
			*lpNumberOfBytesRead = bytesReaded;
	}
	else
	{
		DWORD error = GetLastError();
		print("  -> GetOverlappedResult failed: %lu\n", error);
		SetLastError(error); // Preserve the error from GetOverlappedResult
		return FALSE;
	}

	LONGLONG endPos = currentPos + bytesReaded;

	try {
		auto path = GetFileNameFromHandle(hFile);
		if (path.empty() || path.length() <= 10
			|| path.length() >= 220
			|| bytesReaded < 4) {
			//print("skip path: %s", path.c_str());
			return result;
		}

		print("[ Hooking ] ReadFile()");
		print("file path: %s", path.c_str());
		print("request read length: %lu", nNumberOfBytesToRead);
		print("beginPos: %I64d, endPos: %I64d", currentPos, endPos);

		auto magicInt = reinterpret_cast<UINT8*>(lpBuffer);
		BYTE magicBuffer[4] = { magicInt[0], magicInt[1], magicInt[2], magicInt[3] };

		auto magic = MagicToString(magicBuffer, 4);
		if (magicCache.find(magic) == magicCache.end()) {
			magicCache[magic] = 0;
		}
		magicCache[magic]++;

		if (magicCache[magic] >= 2) {
			print("found duplicate magic: %s, count: %d", magic.c_str(), magicCache[magic]);
		}
		else {
			print("new magic: %s", magic.c_str());
		}
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return result;
}

bool Start() {

	SetupConsole();
	if (MH_Initialize() != MH_OK)
		return false;

	//HookFunc(0x1928ac0, &Hook_LoadArchiveBin, reinterpret_cast<LPVOID*>(&loadArchiveBinFuncBackup));

	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));

	return true;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		if (Start() == false)
			exit(EXIT_FAILURE);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

