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

typedef bool (*OpenResourceDevice_t)(ResourceReaderHandle* handleInfo,
	LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6);
OpenResourceDevice_t fpOpenResourceDevice = nullptr;

bool Hook_OpenResourceDevice(ResourceReaderHandle* reader, LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6)
{
	print("[Hook] OpenResourceDevice called");
	print("handleInfo: %p, ", reader);

	// Call the original function
	auto result = fpOpenResourceDevice(reader, resourcePath, param_flags, param_4, param_5, param_6);
	print("result: %s", result ? "ok" : "failed");
	print(" entryPath: %s", reader->entryPath);
	print(" fullPath: %s", *reader->fullPathPtrPtr);
	print(" error: %s", *reader->errorString);

	print("[Hook End] OpenResourceDevice");

	return result;
}


typedef ULONGLONG(*FUN_141929a50)(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4);
FUN_141929a50 fpFUN_141929a50 = nullptr;
ULONGLONG __fastcall Hook_FUN_141929a50(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4)
{
	print("[Hook] FUN_141929a50 called");
	print("param_1: %p, *param_1: 0x%llX", param_1, *param_1);
	print("param_2: %p", param_2);
	print("param_3: 0x%llX", param_3);
	print("param_4: 0x%llX", param_4);
	auto result = fpFUN_141929a50(param_1, param_2, param_3, param_4);
	print("result: 0x%llX", result);
	print("[Hook End] FUN_141929a50");
	return result;
}

typedef void (*LoadArchiveBinFunc)(ResourceManager* resManager, char** loadResourceNamePtrPtr, int loadIndex);
LoadArchiveBinFunc fpLoadArchiveBin = nullptr;

void __fastcall Hook_LoadArchiveBin(ResourceManager* resManager, char** loadResourceNamePtrPtr, int loadIndex)
{
	print("[Hook] LoadArchiveBin called");
	print("resManager: %p, loadResName: %s, loadIndex: %d", resManager, *loadResourceNamePtrPtr, loadIndex);
	print(" resourceTotal: %d", resManager->resourceTotal);


	print("[Prefix] fpLoadArchiveBin");
	fpLoadArchiveBin(resManager, loadResourceNamePtrPtr, loadIndex);

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

typedef void (*ProcessGameResources_t)(ResourceManager* resManager, const char** resNamePtr);
ProcessGameResources_t fpProcessGameResources = nullptr;
void ProcessGameResources(ResourceManager* resManager, const char** resNamePtr) {
	print("[Hook Begin] ProcessGameResources called");
	print("resManager: %p, param_2: 0x%llX", resManager, resNamePtr);
	print("res name: %s", *resNamePtr);
	print("resManager->resourceTotal: %d", resManager->resourceTotal);

	fpProcessGameResources(resManager, resNamePtr);
	print("[Postfix] ProcessGameResources");

	if (resManager->resourceListPtrPtr == nullptr) {
		print("resManager->resourceList is NULL");
	}
	else {
		for (int i = 0; i < resManager->resourceTotal; i++) {
			ResourceHeader* resource = resManager->resourceListPtrPtr[i];
			if (resource != nullptr) {
				print("resource ptr: %p", resource);
				print("Resource[%d] header->index: %d", i, resource->index);
				print("Resource[%d] header->unknow1: %d", i, resource->unknow1);
				print("Resource[%d] header->name: %s", i, resource->name ? resource->name : "NULL");
				print("Resource[%d] header->isEncrypted: %s", i, resource->isEncrypted ? "true" : "false");
				if (resource->info != nullptr) {
					print("info ptr: %p", resource->info);
					print(" info->filePath: %s", resource->info->filePath ? resource->info->filePath : "NULL");
					auto meta = resource->info->meta;
					print(" info->meta: %p", meta);
				}
			}
		}
	}

	print("[Hook End] ProcessGameResources");
}

bool Start() {

	SetupConsole();
	if (MH_Initialize() != MH_OK)
		return false;

	//HookFunc(0x1929a50, &Hook_FUN_141929a50, reinterpret_cast<LPVOID*>(&fpFUN_141929a50));
	HookFunc(0x1928ac0, &Hook_LoadArchiveBin, reinterpret_cast<LPVOID*>(&fpLoadArchiveBin));
	HookFunc(0x19280b0, &Hook_OpenResourceDevice, reinterpret_cast<LPVOID*>(&fpOpenResourceDevice));

	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	//HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));

	//HookFunc(0x19042b0, &HookedAddLoadedResourceIndex, reinterpret_cast<LPVOID*>(&fpAddLoadedResourceIndex));

	//HookFunc(0x1924850, &ProcessGameResources, reinterpret_cast<LPVOID*>(&fpProcessGameResources));

	// wait x64dbg attach
	//WaitForDebug();

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

