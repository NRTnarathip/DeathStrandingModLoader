// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#include "MinHook.h"
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

#include "classes.hpp"
#include "helper.hpp"
#include "hooks.cpp"

#pragma comment(lib, "libMinHook.x64.lib")

bool enableLogMurmurHash3 = false;

typedef int (*FuncPtrType)(void);

typedef bool (*OpenResourceDevice_t)(ResourceReaderHandle* handleInfo,
	LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6);
OpenResourceDevice_t fpOpenResourceDevice = nullptr;


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
	log("resManager: %p, loadResName: %s, loadIndex: %d", resManager, *loadResourceName, loadIndex);
	enableLogMurmurHash3 = true;

	hashingCounterInLoadArchiveBin = 0;


	log("[Prefix]");

	uint magicHeader = 0;


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

BOOL WINAPI HookReadFile(
	HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead,
	LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped)
{
	auto path = GetFileNameFromHandle(hFile);
	if (lpOverlapped == nullptr || path.empty() || path.length() >= 200)
		return fpReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);


	log("[Hook Begin] ReadFile()");

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
		log("  -> GetOverlappedResult failed: %lu\n", error);
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
			log("[Hook End] ReadFile");
			return result;
		}

		log("file path: %s", path.c_str());
		log("request read length: %lu", nNumberOfBytesToRead);
		log("beginPos: %I64d, endPos: %I64d", currentPos, endPos);

		auto magicInt = reinterpret_cast<UINT8*>(lpBuffer);
		BYTE magicBuffer[4] = { magicInt[0], magicInt[1], magicInt[2], magicInt[3] };

		auto magic = MagicToString(magicBuffer, 4);
		if (magicCache.find(magic) == magicCache.end()) {
			magicCache[magic] = 0;
		}
		magicCache[magic]++;

		if (magicCache[magic] >= 2) {
			log("found duplicate magic: %s, count: %d", magic.c_str(), magicCache[magic]);
		}
		else {
			log("new magic: %s", magic.c_str());
		}
		//print("Stack trace...");
		//PrintCallStack();
		log("[Hook End] ReadFile");
	}
	catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return result;
}

using AddLoadedResourceIndex_t = int (*)(int* resourceCounterPtr, int resourceIndex, void* header);
AddLoadedResourceIndex_t fpAddLoadedResourceIndex = nullptr;

void __fastcall HookedAddLoadedResourceIndex(
	ResourceList* resourceCounterPtr, int resourceIndex, ArchiveHeader* header)
{
	log("[Hook Begin] AddLoadedResourceIndex called");
	log("resourceCounterPtr: %p, resourceIndex: %d, header: %p", resourceCounterPtr, resourceIndex, header);

	log("archiveHeader->index: %d", header->index);
	log("archiveHeader->isEncrypted: %s", header->isEncrypted ? "true" : "false");
	log("archiveHeader->name: %s", header->name);
	//print("archive->unknow %p", archiveHeader->gap10);
	//print("archive->unknow %d", *(int*)archiveHeader->gap10);
	//print("archive->unknow %lld", *((longlong*)(archiveHeader->gap10)));
	//print("archive->unknow %lli", *((ulonglong*)(archiveHeader->gap10)));
	//print("archive->unknow %s", archiveHeader->gap10);
	//auto prevHeader = (ArchiveHeader*)archiveHeader->gap10;
	//print("prevHeader: %p", prevHeader);
	//print("prevHeader:name %s", prevHeader->name);
	//print("archiveHeader->0x10: %s", (char*)archiveHeader->gap10);
	//print("archiveHeader->0x10: %lld", archiveHeader->gap10);
	//print("archiveHeader->indexPtr: %p", archiveHeader->indexPtr);
	//print("archiveHeader->indexPtr: %d", *archiveHeader->indexPtr);
	//print("archiveHeader->0x10: %p", (void*)archiveHeader->gap10);
	//print("res list data: %p", resourceCounterPtr->data);
	//auto dataPtr = (char*)archiveHeader;
	//for (int i = 0; i < 4; i++) {
	//	dataPtr += i * 0x20;
	//	print("[%d] dump data: %s %s %s %s",
	//		i,
	//		GetHexString(dataPtr, 0x8),
	//		GetHexString(dataPtr + 8, 0x8),
	//		GetHexString(dataPtr + 16, 0x8),
	//		GetHexString(dataPtr + 24, 0x8));
	//}
	//print("archiveHeader->0x10: %s", GetHexString(&archiveHeader->gap10, 8));

	//if (archiveHeader->indexPtr == nullptr)
	//	print("archiveHeader->indexPtr is NULL");
	//else
	//	print("archiveHeader->indexPtr value: %d", *archiveHeader->indexPtr);
	//print("Prefix...");
	//print("res list count: %d", resourceCounterPtr->count);
	//print("res list capacity: %d", resourceCounterPtr->capacity);
	ResourceManager* resManager = (ResourceManager*)((char*)(&resourceCounterPtr) - 0x38);
	auto currentListPtrPtr = (ResourceList**)resManager->first;
	auto resList = resManager->resourceListPtr;
	auto endItemPtr = currentListPtrPtr + resList->count;
	//print(" now list ptr: %p", resList);
	//print(" end item ptr: %p", endItemPtr);
	int i = 0;
	auto archiveList = reinterpret_cast<ArchiveHeader**>(resList->data);

	for (; currentListPtrPtr != endItemPtr; ++currentListPtrPtr) {
		auto archive = archiveList[i];
		//print("loop index: %d", i);
		//print(" resListPtrPtr: %p", currentListPtrPtr);
		//auto a = (ArchiveHeader*)currentListPtrPtr;
		//print("archive %s", archive->name);
		//isSame = StringIsSame((longlong*)&(*resListPtrPtr)->likeData, &param_loadResourceName->str);
		//if (isSame) goto Goto_CleanupReturnFunc;
		i++;
	}
	//auto dataPtr = (char*)(header->indexPtr);
	//for (int i = 0; i < 4; i++) {
	//	dataPtr += i * 0x10;
	//	print("[%d] dump data: %s %s",
	//		i,
	//		GetHexString(dataPtr, 0x8),
	//		GetHexString(dataPtr + 8, 0x8));
	//}

	fpAddLoadedResourceIndex((int*)resourceCounterPtr, resourceIndex, header);
	log("Postfix");
	//uint64_t* puVar8 = (void*)(header->indexPtr + (longlong)(int)headerPtr1 * 8);
	//auto dataPtr = (char*)(header->indexPtr);
	//for (int i = 0; i < 16; i++) {
	//	dataPtr += i * 0x10;
	//	print("[%d] dump data: %s %s",
	//		i,
	//		GetHexString(dataPtr, 0x8),
	//		GetHexString(dataPtr + 8, 0x8));
	//}

	//print("res list count: %d", resourceCounterPtr->count);
	//print("res list capacity: %d", resourceCounterPtr->capacity);

	log("[Hook End] AddLoadedResourceIndex");
}

LONGLONG* Hook_MurmurHash3_x64_128(long long* hash, byte* data, ULONGLONG length)
{
	//print("[First] data: %s, length: %llu", (char*)data, length);
	//if (enableLogMurmurHash3) {
	hashingCounterInLoadArchiveBin++;
	if (enableLogMurmurHash3) {
		log("[Hook Begin] MurmurHash3 called");
		log("[Info] hashingCounterInLoadArchiveBin: %d", hashingCounterInLoadArchiveBin);
		log("[Info] data: %s", GetHexString(data, length));
		log("[Info] length: %llu", length);

		// simulate decode
		//0x1928c8f
		//if (IsCalledFromFuncRva(0x1928c94)) {
		if (hashingCounterInLoadArchiveBin == 1) {
			log("Some detecting..!!");

#define vpshufd_avx _mm_shuffle_epi32
#define ZEXT416 _mm_cvtsi32_si128
#define vpblendw_avx _mm_blend_epi16

			//LONGLONG testHashResult[2];
			// 43943afa62ab1cf41c8176f33e9ea8d2
			//__m128i auVar3;
			//const __m128i ConstKey128bit = _mm_loadu_si128((__m128i*)DAT_144f6d010);
			//UINT headerKey1;
			//CreateIntFromBytes(0x33, 0x2e, 0xe5, 0xd4, &headerKey1);
			//auto avx1 = vpblendw_avx(ConstKey128bit, vpshufd_avx(ZEXT416(headerKey1), 0), 3);
			//byte* testKey = (byte*)&avx1; // 16 bytes
			//log("local_e4 1: %s", GetHexString((byte*)&headerKey1, 4));
			//log("test hash 1: %s", GetHexString(testKey, 0x10));

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
		log("[Calling fpMurmurHash3]");
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

bool Start() {
	SetupConsole();
	if (MH_Initialize() != MH_OK)
		return false;


	if (false) {
		WaitForDebug();
	}
	else {
		//HookFunc(0x190aa00, &BuildStringBuffer, reinterpret_cast<LPVOID*>(&fpBuildStringBuffer));
		//HookFunc(0x1924850, &My_LoadAllArchive, reinterpret_cast<LPVOID*>(&fpMy_LoadAllArchive));
		//HookFunc(0x190b8b0, &My_StringBuildInitWithLength, reinterpret_cast<LPVOID*>(&fpMy_StringBuildInitWithLength));
		//HookFunc(0x190adf0, &AssignRefCountedString, reinterpret_cast<LPVOID*>(&fpAssignRefCountedString));
		HookFunc(0x1928ac0, &Hook_LoadArchiveBin, &fpLoadArchiveBin);
		//HookFunc(0x1904030, &My_AddResourcePatch, &fpMy_AddResourcePatch);
		//HookFunc(0x18fe890, &Hook_MurmurHash3_x64_128, reinterpret_cast<LPVOID*>(&fpMurmurHash3));
		HookFunc(0x1929a50, &Hook_ResourceReadBuffer, reinterpret_cast<LPVOID*>(&fpResourceReadBuffer));
		//HookFunc(0x19280b0, &Hook_OpenResourceDevice, reinterpret_cast<LPVOID*>(&fpOpenResourceDevice));
		//HookFunc(0x19042b0, &HookedAddLoadedResourceIndex, reinterpret_cast<LPVOID*>(&fpAddLoadedResourceIndex));
	}

	//HookFunc(0x1929a50, &Hook_FUN_141929a50, reinterpret_cast<LPVOID*>(&fpFUN_141929a50));

	//HookFunc(&CreateFileW, &HookedCreateFileW, reinterpret_cast<LPVOID*>(&fpCreateFileW));
	//HookFunc(&ReadFile, &HookReadFile, reinterpret_cast<LPVOID*>(&fpReadFile));


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

