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

typedef void (*LoadArchiveBinFunc)(ResourceManager* resManager, uint64_t* param_2, int loadIndex);
LoadArchiveBinFunc loadArchiveBinFuncBackup = nullptr;

void __fastcall Hook_LoadArchiveBin(ResourceManager* resManager, uint64_t* param_2, int loadIndex)
{
	print("[Hook] LoadArchiveBin called");
	print("resManager: %p, param_2: 0x%llX, loadIndex: %d", resManager, param_2, loadIndex);
	print("resManager->resourceTotal: %d", resManager->resourceTotal);

	loadArchiveBinFuncBackup(resManager, param_2, loadIndex);

	print("[Hook End] LoadArchiveBin");
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


	print("[Hook Begin] ReadFile()");

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
			print("[Hook End] ReadFile");
			return result;
		}

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
		//print("Stack trace...");
		//PrintCallStack();
		print("[Hook End] ReadFile");
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return result;
}

using AddLoadedResourceIndex_t = int (*)(int* resourceCounterPtr, int resourceIndex, void* header);
AddLoadedResourceIndex_t fpAddLoadedResourceIndex = nullptr;

void __fastcall HookedAddLoadedResourceIndex(int* resourceCounterPtr, int resourceIndex, void* header)
{
	print("[Hook Begin] AddLoadedResourceIndex called");
	print("resourceCounterPtr: %p, resourceIndex: %d, header: %p", resourceCounterPtr, resourceIndex, header);
	print("resourceCounterPtr cast: %d", *resourceCounterPtr);

	ArchiveHeader* archiveHeader = (ArchiveHeader*)header;
	print("archiveHeader->index: %d", archiveHeader->index);
	print("archiveHeader->p1: %d", archiveHeader->p1);
	print("archiveHeader->p2: %d", archiveHeader->p2);
	print("archiveHeader->isEncrypted: %s", archiveHeader->isEncrypted ? "true" : "false");
	print("archiveHeader->p3: %d", archiveHeader->p3);
	print("archiveHeader->p4: %d", archiveHeader->p4);
	print("archiveHeader->indexPtr: %p", archiveHeader->indexPtr);

	//if (archiveHeader->indexPtr == nullptr)
	//	print("archiveHeader->indexPtr is NULL");
	//else
	//	print("archiveHeader->indexPtr value: %d", *archiveHeader->indexPtr);

	fpAddLoadedResourceIndex(resourceCounterPtr, resourceIndex, header);

	print("[Hook End] AddLoadedResourceIndex");
}

typedef void (*ProcessGameResources_t)(ResourceManager* resManager, uint64_t* param_2);
ProcessGameResources_t fpProcessGameResources = nullptr;
void ProcessGameResources(ResourceManager* resManager, uint64_t* param_2) {
	print("[Hook Begin] ProcessGameResources called");
	print("resManager: %p, param_2: 0x%llX", resManager, param_2);
	print("resManager->resourceTotal: %d", resManager->resourceTotal);
	fpProcessGameResources(resManager, param_2);
	print("[Postfix] ProcessGameResources");


	if (resManager->resourceList == nullptr) {
		print("resManager->resourceList is NULL");
	}
	else {
		for (int i = 0; i < resManager->resourceTotal; i++) {
			ResourceHeader* resource = resManager->resourceList[i];
			if (resource != nullptr) {
				print("Resource[%d] header->index: %d", i, resource->index);
				print("Resource[%d] header->unknow1: %d", i, resource->unknow1);
				print("Resource[%d] header->name: %s", i, resource->name ? resource->name : "NULL");
			}
		}
	}

	print("[Hook End] ProcessGameResources");
}

bool Start() {

	SetupConsole();
	if (MH_Initialize() != MH_OK)
		return false;

	HookFunc(0x1928ac0, &Hook_LoadArchiveBin, reinterpret_cast<LPVOID*>(&loadArchiveBinFuncBackup));

	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	//HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));

	//HookFunc(0x19042b0, &HookedAddLoadedResourceIndex, reinterpret_cast<LPVOID*>(&fpAddLoadedResourceIndex));

	HookFunc(0x1924850, &ProcessGameResources, reinterpret_cast<LPVOID*>(&fpProcessGameResources));

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

