
#include "MinHook.h"
#pragma comment(lib, "libMinHook.x64.lib")

#include <Windows.h>
#include <winternl.h> 
#include <stdio.h>
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdio>
#include <boost/stacktrace.hpp>
#include <sstream>
#include <tchar.h>
#include <string.h>
#include <psapi.h>
#include <strsafe.h>
#include <string>
#include <map>
#include <filesystem>
#include <iostream>
#include "hooks.h"
#include "utils.h"
#include "types.h"

#include "winlator_patch.h"

bool enableLogMurmurHash3 = false;
OpenResourceDevice_t fpOpenResourceDevice;

bool Hook_OpenResourceDevice(ResourceReaderHandle* reader, LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6)
{
	log("[Hook] OpenResourceDevice called");
	log("handleInfo: %p, ", reader);
	log("param_4: %d", param_4);
	log("param_5: %d", param_5);
	log("param_6: %d", param_6);


	// Call the original function
	auto result = fpOpenResourceDevice(reader, resourcePath, param_flags, param_4, param_5, param_6);
	log("result: %s", result ? "ok" : "failed");
	log(" entryPath: %s", reader->entryPath);
	log(" fullPath: %s", reader->fullPath->str);
	log(" error: %s", reader->errorString->str);
	log(" someBool 1: %s", reader->someBool1 ? "true" : "false");

	if (param_6 < 0) {
		MyString* fullPath = reader->fullPath;
		log("full path: %p", fullPath);
		log("someObjectptr: %p", fullPath->prevStringHeader);
		if (fullPath->prevStringHeader) {
			MyStringHeader* prevString = (MyStringHeader*)fullPath->prevStringHeader;
			log("prev string ptr: %p", prevString);
			//print("prev string ref1: %d", prevString->refCount1);
			//print("prev string flags: %d", prevString->someFlags);
			log("prev string ref1: %llu", prevString->refCount1);
			log("prev string ref2: %d", prevString->refCount2);
			log("prev string reserve len: %u", prevString->reserveLength);
			log("prev string str: %s", prevString->dataPtr);
		}
		//FuncPtrType func = *(FuncPtrType*)((char*)fullPath->someObjectPtr + 0x18);
		//print("func: %p", func);
		//auto myParam6 = func();
		//print("my param6: %d", myParam6);
	}


	log("[Hook End] OpenResourceDevice");

	return result;
}


typedef ULONGLONG(*FUN_141929a50)(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4);
FUN_141929a50 fpFUN_141929a50 = nullptr;
ULONGLONG Hook_FUN_141929a50(LONGLONG* param_1, void* param_2, ULONGLONG param_3, ULONGLONG param_4)
{
	log("[Hook] FUN_141929a50 called");
	log("param_1: %p, *param_1: 0x%llX", param_1, *param_1);
	log("param_2: %p", param_2);
	log("param_3: 0x%llX", param_3);
	log("param_4: 0x%llX", param_4);
	auto result = fpFUN_141929a50(param_1, param_2, param_3, param_4);
	log("result: 0x%llX", result);
	log("[Hook End] FUN_141929a50");
	return result;
}

typedef void (*LoadArchiveBinFunc)(ResourceManager* resManager, MyString* loadResourceNamePtrPtr, int loadIndex);
LoadArchiveBinFunc fpLoadArchiveBin = nullptr;

int hashingCounterInLoadArchiveBin = 0;

void Hook_LoadArchiveBin(ResourceManager* resManager, MyString* loadResourceName, int loadIndex)
{
	log("[Hook] LoadArchiveBin called");
	log("loadResName: %s, loadIndex: %d", loadResourceName->str, loadIndex);
	enableLogMurmurHash3 = true;

	hashingCounterInLoadArchiveBin = 0;


	log("[Prefix]");

	UINT magicHeader = 0;

	// Check if the resource name is valid
	fpLoadArchiveBin(resManager, loadResourceName, loadIndex);


	log("[Postfix]");


	enableLogMurmurHash3 = false;
	log("[Hook End] LoadArchiveBin");
}

typedef BOOL(WINAPI* ReadFile_t)(
	HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED);
ReadFile_t fpReadFile = nullptr;

std::map<std::string, int> magicCache;
//
//BOOL WINAPI HookReadFile(
//	HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead,
//	LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
//{
//	auto path = GetFileNameFromHandle(hFile);
//	if (lpOverlapped == nullptr || path.empty() || path.length() >= 200)
//		return fpReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
//
//
//	log("[Hook Begin] ReadFile()");
//
//	LONGLONG currentPos = GetCurrentPos(hFile);
//	BOOL result = fpReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
//	DWORD bytesReaded = 0;
//	if (GetOverlappedResult(hFile, lpOverlapped, &bytesReaded, TRUE /* bWait: TRUE for blocking */)) {
//		if (lpNumberOfBytesRead != NULL)
//			*lpNumberOfBytesRead = bytesReaded;
//	}
//	else
//	{
//		DWORD error = GetLastError();
//		log("  -> GetOverlappedResult failed: %lu\n", error);
//		SetLastError(error); // Preserve the error from GetOverlappedResult
//		return FALSE;
//	}
//
//	LONGLONG endPos = currentPos + bytesReaded;
//
//	try {
//		auto path = GetFileNameFromHandle(hFile);
//		if (path.empty() || path.length() <= 10
//			|| path.length() >= 220
//			|| bytesReaded < 4) {
//			//print("skip path: %s", path.c_str());
//			log("[Hook End] ReadFile");
//			return result;
//		}
//
//		log("file path: %s", path.c_str());
//		log("request read length: %lu", nNumberOfBytesToRead);
//		log("beginPos: %I64d, endPos: %I64d", currentPos, endPos);
//
//		auto magicInt = reinterpret_cast<UINT8*>(lpBuffer);
//		BYTE magicBuffer[4] = { magicInt[0], magicInt[1], magicInt[2], magicInt[3] };
//
//		auto magic = MagicToString(magicBuffer, 4);
//		if (magicCache.find(magic) == magicCache.end()) {
//			magicCache[magic] = 0;
//		}
//		magicCache[magic]++;
//
//		if (magicCache[magic] >= 2) {
//			log("found duplicate magic: %s, count: %d", magic.c_str(), magicCache[magic]);
//		}
//		else {
//			log("new magic: %s", magic.c_str());
//		}
//		//print("Stack trace...");
//		//PrintCallStack();
//		log("[Hook End] ReadFile");
//	}
//	catch (const std::exception& e) {
//		std::cout << "Exception caught: " << e.what() << std::endl;
//	}
//
//	return result;
//}
ULONGLONG* Hook_MurmurHash3_x64_128(long long* hash, byte* data, ULONGLONG length)
{
	//print("[First] data: %s, length: %llu", (char*)data, length);
	//if (enableLogMurmurHash3) {
	hashingCounterInLoadArchiveBin++;
	if (enableLogMurmurHash3) {
		log("[Hook Begin] MurmurHash3 called");
		log("[Info] hashingCounterInLoadArchiveBin: %d", hashingCounterInLoadArchiveBin);
		log("[Info] data: %s", GetHexString(data, length));
		log("[Info] length: %llu", length);
	}

	auto resultPtr = fpMurmurHash3(hash, data, length);
	// look like hash32bit index ?,1,2,3 = ????????62ab1cf41c8176f33e9ea8d2
	if (enableLogMurmurHash3) {
		log("[Called fpMurmurHash3]");
		log("[Info]: hash   %s", GetHexString((byte*)hash, 16));
		log("[Info]: result %s", GetHexString((byte*)resultPtr, length));
		auto hash1 = hash[0]; // 64-bit first
		auto hash2 = hash[1]; // 64-bit second
		log("[Info] Hash1 = %s", GetHexString(&hash1, 8));
		log("[Info] Hash2 = %s", GetHexString(&hash2, 8));

		// get first 4 bytes of result
		//uint32_t keyStream = (uint32_t)(result[0] >> 16);
		//print("[Info] key stream: 0x%x", keyStream);
		log("[Hook End] MurmurHash3");
	}

	return resultPtr;
}

typedef void (*ProcessGameResources_t)(ResourceManager* resManager, const char** resNamePtr);
ProcessGameResources_t fpProcessGameResources = nullptr;
void ProcessGameResources(ResourceManager* resManager, const char** resNamePtr) {
	log("[Hook Begin] ProcessGameResources called");
	log("resManager: %p, param_2: 0x%llX", resManager, resNamePtr);
	log("res name: %s", *resNamePtr);
	//print("resManager->resourceTotal: %d", resManager->);

	fpProcessGameResources(resManager, resNamePtr);
	log("[Postfix] ProcessGameResources");

	if (resManager->resourceListPtr == nullptr) {
		log("resManager->resourceList is NULL");
	}
	else {
		/*	for (int i = 0; i < resManager->resourceTotal; i++) {
				ResourceHeader* resource = resManager->resourceListPtr[i];
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
			}*/
	}

	log("[Hook End] ProcessGameResources");
}


typedef void* (*My_AllocateMemForDummy2_t)(LONGLONG* a1_tlsPtr,
	ULONGLONG a2_allocateSize, ULONGLONG a3_alignedSize,
	ULONGLONG* a4_alignmentOffsetOut, byte a5_zeroInitFlag);
My_AllocateMemForDummy2_t fpMy_AllocateMemForDummy2 = nullptr;

PVOID GetThreadLocalStoragePointer()
{
	return (PVOID)__readgsqword(0x58);
}

typedef void* (*My_AllocateMemForDummyRoot_t)(ULONGLONG a1, ULONGLONG a2);
My_AllocateMemForDummyRoot_t fpMy_AllocateMemForDummyRoot = nullptr;
void* HookMy_AllocateMemForDummyRoot(ULONGLONG a1, ULONGLONG a2)
{
	uintptr_t tlsIndex = *(uintptr_t*)GetAddressFromRva(0x7E9D280);
	log("tlsIndex: %zu", tlsIndex);
	uintptr_t tlsArray = (uintptr_t)GetThreadLocalStoragePointer();
	log("tlsArray: %p", (void*)tlsArray);
	uintptr_t tlsSlotPtr = *(uintptr_t*)(tlsArray + tlsIndex * sizeof(void*));
	log("tlsSlotPtr: %p", (void*)tlsSlotPtr);
	uintptr_t targetPtr = *(uintptr_t*)(tlsSlotPtr + 0x2C8);
	log("targetPtr: %p", (void*)targetPtr);
	auto result = fpMy_AllocateMemForDummy2((LONGLONG*)targetPtr, a1, a2, 0x0, 0x0);
	log("called fpMy_AllocateMemForDummy2");
	log("result: %p", result);
	return result;
}


bool Start() {
	SetupLogger();
	log("starting mod loader...");

	if (MH_Initialize() != MH_OK) {
		log("minhook initialization failed");
		return false;
	}

	// setup hooks for winlator | gamehub
	SetupWinlatorPatcher();

	// debug
#if false
	//HookFunc(0x190aa00, &BuildStringBuffer, reinterpret_cast<LPVOID*>(&fpBuildStringBuffer));
	//HookFunc(0x1924850, &My_LoadAllArchive, reinterpret_cast<LPVOID*>(&fpMy_LoadAllArchive));
	//HookFunc(0x190b8b0, &My_StringBuildInitWithLength, reinterpret_cast<LPVOID*>(&fpMy_StringBuildInitWithLength));
	//HookFunc(0x190adf0, &AssignRefCountedString, reinterpret_cast<LPVOID*>(&fpAssignRefCountedString));
	//HookFunc(0x1928ac0, &Hook_LoadArchiveBin, &fpLoadArchiveBin);
	//HookFunc(0x1904030, &My_AddResourcePatch, &fpMy_AddResourcePatch);
	//HookFunc(0x18fe890, &Hook_MurmurHash3_x64_128, reinterpret_cast<LPVOID*>(&fpMurmurHash3));
	//HookFunc(0x1929a50, &Hook_ResourceReadBuffer, &fpResourceReadBuffer);
	//HookFunc(0x19280b0, &Hook_OpenResourceDevice, reinterpret_cast<LPVOID*>(&fpOpenResourceDevice));
	//HookFunc(0x1929a50, &Hook_FUN_141929a50, reinterpret_cast<LPVOID*>(&fpFUN_141929a50));
	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	//HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));
	//HookFunc(0x1924850, &ProcessGameResources, reinterpret_cast<LPVOID*>(&fpProcessGameResources));
	//HookFunc(0x1a13610, &Hook_GetBuildDateID, &fpMy_GetBuildDateID);
	//HookFuncRva(0x19042b0, &My_AddResourceIndex, &fpMy_AddResourceIndex);
#endif

	log("successfully setup mod loader");
	return true;
}

extern "C" __declspec(dllexport) void StartAPI() {
	printf("empty\n");
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		if (Start() == false) {
			system("pause");
			exit(EXIT_FAILURE);
		}
		break;
	}

	return TRUE;
}

