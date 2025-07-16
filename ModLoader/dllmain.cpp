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
#include "helper.hpp"
#include "hooks.hpp"

#pragma comment(lib, "libMinHook.x64.lib")

bool enableLogMurmurHash3 = false;


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
	print(" fullPath: %s", *reader->fullPath);
	print(" error: %s", *reader->errorString);
	print(" someBool 1: %s", reader->someBool1 ? "true" : "false");

	print("[Hook End] OpenResourceDevice");

	return result;
}


typedef ULONGLONG(*FUN_141929a50)(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4);
FUN_141929a50 fpFUN_141929a50 = nullptr;
ULONGLONG Hook_FUN_141929a50(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4)
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

typedef void (*LoadArchiveBinFunc)(ResourceManager* resManager, MyString* loadResourceNamePtrPtr, int loadIndex);
LoadArchiveBinFunc fpLoadArchiveBin = nullptr;

int hashingCounterInLoadArchiveBin = 0;

void Hook_LoadArchiveBin(ResourceManager* resManager, MyString* loadResourceName, int loadIndex)
{
	print("[Hook] LoadArchiveBin called");
	print("resManager: %p, loadResName: %s, loadIndex: %d", resManager, *loadResourceName, loadIndex);
	print(" resourceTotal: %d", resManager->resourceTotal);


	print("[Prefix] fpLoadArchiveBin");
	enableLogMurmurHash3 = true;
	hashingCounterInLoadArchiveBin = 0;
	fpLoadArchiveBin(resManager, loadResourceName, loadIndex);
	enableLogMurmurHash3 = false;

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
	print("archiveHeader->isEncrypted: %s", archiveHeader->isEncrypted ? "true" : "false");
	print("archiveHeader->name: %s", archiveHeader->name);
	//print("archiveHeader->p3: %d", archiveHeader->p3);
	//print("archiveHeader->p4: %d", archiveHeader->p4);
	print("archiveHeader->indexPtr: %p", archiveHeader->indexPtr);

	//if (archiveHeader->indexPtr == nullptr)
	//	print("archiveHeader->indexPtr is NULL");
	//else
	//	print("archiveHeader->indexPtr value: %d", *archiveHeader->indexPtr);

	fpAddLoadedResourceIndex(resourceCounterPtr, resourceIndex, header);

	print("[Hook End] AddLoadedResourceIndex");
}

typedef LONGLONG* (*MurmurHash3_t)(LONGLONG* hash, byte* data, ULONGLONG length);
MurmurHash3_t fpMurmurHash3 = nullptr;

LONGLONG* Hook_MurmurHash3_x64_128(LONGLONG* hash, byte* data, ULONGLONG length)
{
	//print("[First] data: %s, length: %llu", (char*)data, length);
	//if (enableLogMurmurHash3) {
	hashingCounterInLoadArchiveBin++;
	if (enableLogMurmurHash3) {
		print("[Hook Begin] MurmurHash3 called");
		print("[Info] hashingCounterInLoadArchiveBin: %d", hashingCounterInLoadArchiveBin);
		print("[Info] data: %s", GetHexString(data, length));
		print("[Info] length: %llu", length);

		// simulate decode
		//0x1928c8f
		//if (IsCalledFromFuncRva(0x1928c94)) {
		if (hashingCounterInLoadArchiveBin == 1) {
			print("Some detecting..!!");

#define vpshufd_avx _mm_shuffle_epi32
#define ZEXT416 _mm_cvtsi32_si128
#define vpblendw_avx _mm_blend_epi16

			//LONGLONG testHashResult[2];
			// 43943afa62ab1cf41c8176f33e9ea8d2
			byte DAT_144f6d010[16] = {
				0x43, 0x94, 0x3A, 0xFA, 0x62, 0xAB, 0x1C, 0xF4,
				0x1C, 0x81, 0x76, 0xF3, 0x3E, 0x9E, 0xA8, 0xD2
			};
			__m128i auVar3;
			const __m128i ConstKey128bit = _mm_loadu_si128((__m128i*)DAT_144f6d010);
			UINT headerKey1;
			CreateIntFromBytes(0x33, 0x2e, 0xe5, 0xd4, &headerKey1);
			auto avx1 = vpblendw_avx(ConstKey128bit, vpshufd_avx(ZEXT416(headerKey1), 0), 3);
			byte* testKey = (byte*)&avx1; // 16 bytes
			print("local_e4 1: %s", GetHexString((byte*)&headerKey1, 4));
			print("test hash 1: %s", GetHexString(testKey, 0x10));

			// log local_e4
			// B98A37B7D4E52E33
			// E06E14A65570CEE6
			// F4D4D9C0058D59F4

			//fpMurmurHash3(testHashResult, testKey, 0x10);
			//print("result test hash 1: %s", GetHexString((byte*)testHashResult, 0x10));


			//UINT headerKey2 = *((UINT*)data + 4);
			//byte* headerKey2Ptr = (byte*)&headerKey2;
			//print("header key 2: %s", GetHexString(headerKey2Ptr, 4));
			//auto avx2 = vpblendw_avx(key, vpshufd_avx(ZEXT416(headerKey2), 0), 3);
			//dataToHash = (byte*)&avx2;
			//print("dataToHash 2: %s", GetHexString((byte*)dataToHash, 0x10));
			//fpMurmurHash3(hash64bitArray2, dataToHash, 0x10);
			//print("result test hash 2: %s", GetHexString((byte*)hash64bitArray2, 0x10));

			//ArchiveHeader* header = nullptr;
			//header = (ArchiveHeader*)(*hash64bitArray2 ^ (ulonglong)header);
			//print("decode header: %p", header);
			//print("header->index: %d", header->index);
			//print("header name: %s", header->name ? header->name : "NULL");
			//print("header->isEncrypted: %s", header->isEncrypted ? "true" : "false");
		}
		print("[Calling fpMurmurHash3]");
	}
	auto resultPtr = fpMurmurHash3(hash, data, length);
	// look like hash32bit index ?,1,2,3 = ????????62ab1cf41c8176f33e9ea8d2
	if (enableLogMurmurHash3) {
		print("[Called fpMurmurHash3]");
		print("[Info]: hash   %s", GetHexString((byte*)hash, 16));
		print("[Info]: result %s", GetHexString((byte*)resultPtr, length));
		uint64_t* hash1 = (UINT64*)hash; // 64-bit áÃ¡
		uint64_t* hash2 = (UINT64*)(hash + 1); // 64-bit áÃ¡
		print("[Info] Hash1 = %s", GetHexString((byte*)hash1, 8));
		print("[Info] Hash2 = %s", GetHexString((byte*)hash2, 8));


		// get first 4 bytes of result
		//uint32_t keyStream = (uint32_t)(result[0] >> 16);
		//print("[Info] key stream: 0x%x", keyStream);
		print("[Hook End] MurmurHash3");
	}

	return resultPtr;
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

	const bool enableDebug = false;

	if (enableDebug) {
		WaitForDebug();
	}
	else {
		//HookFunc(0x190aa00, &BuildStringBuffer, reinterpret_cast<LPVOID*>(&fpBuildStringBuffer));
		//HookFunc(0x1924850, &My_LoadAllArchive, reinterpret_cast<LPVOID*>(&fpMy_LoadAllArchive));
		//HookFunc(0x190b8b0, &My_StringBuildInitWithLength, reinterpret_cast<LPVOID*>(&fpMy_StringBuildInitWithLength));
		//HookFunc(0x190adf0, &AssignRefCountedString, reinterpret_cast<LPVOID*>(&fpAssignRefCountedString));
		HookFunc(0x1928ac0, &Hook_LoadArchiveBin, &fpLoadArchiveBin);
		//HookFunc(0x18fe890, &Hook_MurmurHash3_x64_128, reinterpret_cast<LPVOID*>(&fpMurmurHash3));
		//HookFunc(0x1929a50, &Hook_CheckFileMagic, reinterpret_cast<LPVOID*>(&fpCheckFileMagic));

	}

	//HookFunc(0x1929a50, &Hook_FUN_141929a50, reinterpret_cast<LPVOID*>(&fpFUN_141929a50));
	//HookFunc(0x19280b0, &Hook_OpenResourceDevice, reinterpret_cast<LPVOID*>(&fpOpenResourceDevice));

	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	//HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));

	//HookFunc(0x19042b0, &HookedAddLoadedResourceIndex, reinterpret_cast<LPVOID*>(&fpAddLoadedResourceIndex));

	//HookFunc(0x1924850, &ProcessGameResources, reinterpret_cast<LPVOID*>(&fpProcessGameResources));


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

