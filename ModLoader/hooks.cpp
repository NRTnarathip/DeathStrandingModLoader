#include "hooks.h"
#include "archive_reader.h"
#include "utils.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cstdint>

unsigned __int64 HK_My_ResourceReadBuffer(
	ResourceReaderHandle* reader, unsigned char* buffer,
	unsigned __int64 readOffset, unsigned __int64 readLength)
{
	log("============================");
	log("[Hook Begin] ResourceReadBuffer");
	log("reader ptr: %p, buffer ptr: %p, readOffset: %llx, readLength: 0x%llx",
		reader, buffer, readOffset, readLength);
	//auto bufferAddr = (UINT64)buffer;
	//log("buffer ptr addr bytes: %s", GetHexString(&bufferAddr, 8));
	MyString* fullPathString = (MyString*)reader->fullPath;
	log("fullPath: %s", fullPathString->str);
	// Call the original function
	//log("read offset: %llu", readOffset);
	//log("read len   : %d", readLength);
	auto result = backup_ResourceReadBuffer(reader, buffer, readOffset, readLength);
	//log("[Postfix]");

	// first called on read header
	//if (readOffset == 0 && readLength == 0x28) {
	//	auto archiveReader = new ArchiveReader();
	//	archiveReader->readArchive(reader);
	//	archiveReader->LogInfo();
	//}

	//log("[Hook End] ResourceReadBuffer");
	return result;
}

typedef MyString* (*BuildStringBuffer_t)(MyString* param_1, char* string2);
BuildStringBuffer_t fpBuildStringBuffer = nullptr;
MyString* BuildStringBuffer(MyString* myString, char* param_2) {
	//mute.lock();
	log("[Hook Begin] BuildStringBuffer");
	log("myString: %p", myString);
	log("param_2: %s", param_2);

	//myString->str should be null
	//print("my string val: %s", myString->str);

	log("[Prefix]");
	auto result = fpBuildStringBuffer(myString, param_2);
	log("[Postfix]");
	log("my string val: %s", myString->str);
	log("my string someNumber: %d", myString->refCount);
	log("my string someObjPtr: %p", myString->prevStringHeader);
	log("[Hook End] BuildStringBuffer");
	return result;
}

typedef void (*My_LoadAllArchive_t)(ResourceManager* resManager, char* loadResourcePathPtr);
My_LoadAllArchive_t fpMy_LoadAllArchive = nullptr;
void My_LoadAllArchive(ResourceManager* resManager, MyString* loadResourcePathPtr) {
	log("[Hook Begin] My_LoadAllArchive called");
	log("resManager: %ps", resManager);
	log("loadResourcePathPtr: %s", loadResourcePathPtr->str);
	log("loadResourcePathPtr: %p", loadResourcePathPtr->prevStringHeader);
	log("loadResourcePathPtr: %d", loadResourcePathPtr->refCount);
	log("[Prefix]");
	My_LoadAllArchive(resManager, loadResourcePathPtr);
	log("[Postfix]");
	log("[Hook End] My_LoadAllArchive");
}

typedef void (*My_StringBuildInitWithLength_t)(MyString* stringPtrPtr, int strLength);
My_StringBuildInitWithLength_t fpMy_StringBuildInitWithLength = nullptr;
void My_StringBuildInitWithLength(MyString* stringPtrPtr, int strLength) {
	log("[Hook Begin] My_StringBuildInitWithLength called");
	log("stringPtrPtr: %p, strLength: %d", stringPtrPtr, strLength);
	auto stringPtr = (MyString*)stringPtrPtr;
	log("stringPtr->str: %s", stringPtr->str);
	log("stringPtr->someObjPtr: %p", stringPtr->prevStringHeader);
	log("[Prefix]");
	fpMy_StringBuildInitWithLength(stringPtrPtr, strLength);
	log("[Postfix]");
	log("stringPtr->str: %s", stringPtr->str);
	log("stringPtr->someObjPtr: %p", stringPtr->prevStringHeader);
	if (stringPtr->prevStringHeader) {
		//auto header = (MyString*)(stringPtr->someObjectPtr);
		//print("header str : %s", header->str);
		//print("header total length: %d", header->totalLength);
	}
	else {
		log("some object ptr is null !!");
	}

	log("[Hook End] My_StringBuildInitWithLength");
}

typedef MyString* (*AssignRefCountedString_t)(MyString* leftStringPtr, MyString* rightStringPtr);
AssignRefCountedString_t fpAssignRefCountedString = nullptr;
MyString* AssignRefCountedString(MyString* leftString, MyString* rightString) {
	log("[Hook Begin] AssignRefCountedString called");
	log("leftStringPtr: %p, rightStringPtr: %p", leftString, rightString);
	log("left string: %s", leftString->str);
	log("right string: %s", rightString->str);
	// simulate code

	log("begin simulate code");
	if (leftString->str != rightString->str) {
		auto leftStringLength = (UINT*)(leftString->str + -0x10);
		log("left string length ptr: %p", leftStringLength);
		log("left string length: %d", *leftStringLength);
		auto someDat = (UINT*)GetAddressFromRva(0x4562ca0);
		log("someDat ptr: %p", someDat);
		log("someDat val: %d", *someDat);
	}
	log("end   simulate code");

	log("[Prefix]");
	auto result = fpAssignRefCountedString(leftString, rightString);
	log("[Postfix]");
	log("result: %p", result);
	log("left string: %s", leftString->str);
	log("right string: %s", rightString->str);
	log("[Hook End] AssignRefCountedString");
	return result;
}

typedef  int (*My_AddResourcePatch_t)(int* resourceCounterPtr, MyPakFileInfo* archiveHeader);
My_AddResourcePatch_t fpMy_AddResourcePatch = nullptr;

int My_AddResourcePatch(int* resourceCounterPtr, MyPakFileInfo* header) {
	log("[Hook Begin] My_AddResourcePatch called");

	log("resourceCounterPtr: %p, archiveHeader: %p", resourceCounterPtr, header);
	log("resourceCounterPtr value: %d", *resourceCounterPtr);
	log("archiveHeader->index: %d", header->index);
	log("header key: %s", GetHexString(header->encryptKey));
	log("archiveHeader->isEncrypted: %s", header->isEncrypted ? "true" : "false");
	log("archiveHeader->name: %s", header->name);
	log("[Prefix]");

	auto result = fpMy_AddResourcePatch(resourceCounterPtr, header);
	log("[Postfix]");
	log("result: %d", result);
	log("[Hook End] My_AddResourcePatch");
	return result;
}

AddResourceIndex_t fpMy_AddResourceIndex = nullptr;

int My_AddResourceIndex(ResourceList* resourceCounterPtr,
	int resourceIndex, MyPakFileInfo* resPtr)
{
	log("[Hook Begin] My_AddResourceIndex");
	log("resourceCounterPtr: %p, resourceIndex: %d, header: %p", resourceCounterPtr, resourceIndex, resPtr);

	// crash some archive
	//try {
	//log("res name: %s", resPtr->name);
	//}
	//catch (const std::exception& e) {
	//	log("Exception: %s", e.what());
	//}

	//auto header = *(ArchiveBinHeader*)((byte*)resPtr + 0x0);


	//ArchiveFileEntry* fileTableListPtr = (ArchiveFileEntry*)((byte*)resPtr + 0x28);
	//for (int i = 0; i < header.fileTableCount; i++) {
	//	ArchiveFileEntry* fileTable = (ArchiveFileEntry*)((byte*)fileTableListPtr + i * 0x20);
	//	log("loop:%d file table num: %u", i, fileTable->entryNum);
	//}

	//if (header.magic == 0x21304050 || header.magic == 0x20304050) {
	//	log("  Magic: %s", GetHexString(header.magic));
	//	log("  Key: %s", GetHexString(header.key));
	//	log("  File Size: %llu", header.fileSize);
	//	log("  Data Size: %llu", header.dataSize);
	//	log("  File Table Count: %llu", header.fileTableCount);
	//	log("  Chunk Table Count: %u", header.chunkTableCount);
	//	log("  Max Chunk Size: %u", header.maxChunkSize);
	//}

	auto result = fpMy_AddResourceIndex(resourceCounterPtr, resourceIndex, resPtr);

	log("Postfix");

	log("[Hook End] My_AddResourceIndex");

	return result;
}

My_GetBuildDateID_t fpMy_GetBuildDateID = nullptr;
__int64* Hook_GetBuildDateID() {
	log("[Hook Begin] My_GetBuildDateID called");
	auto result = fpMy_GetBuildDateID();
	log("result: %p", result);
	log("result: %s", (char*)*result);
	if (result) {
		log("build date id: %s", GetHexString(result, 8));
	}
	else {
		log("build date id is null");
	}
	log("[Hook End] My_GetBuildDateID");
	return result;
}



typedef MyString* (*My_AboutCoreStreamFile_t)(LONGLONG* param_1, MyString* param_2);
My_AboutCoreStreamFile_t backup_My_AboutCoreStreamFile;
MyString* HK_My_AboutCoreStreamFile(LONGLONG* param_1, MyString* param_2)
{
	static size_t HK_My_AboutCoreStreamFileCounter = 0;
	HK_My_AboutCoreStreamFileCounter++;
	log("Begin: HK_My_AboutCoreStreamFile | [%d]", HK_My_AboutCoreStreamFileCounter);

	//log("  param_1: %p", param_1);
	//log("  param_2 str: %s", param_2->str);
	//log("calling origin");

	auto retValue = backup_My_AboutCoreStreamFile(param_1, param_2);
	log("  result: %s", retValue->str);
	return retValue;
}

typedef MyString* (*My_MakeResourceCoreFullPath_t)(MyString* param_1, char* param_2);
My_MakeResourceCoreFullPath_t backup_My_MakeResourceCoreFullPath;
MyString* HK_My_MakeResourceCoreFullPath(MyString* param_1, char* param_2)
{
	static size_t CallCounter = 0;
	CallCounter++;
	log("Begin HK_My_MakeResourceCoreFullPath | [%d]", CallCounter);
	auto ret = backup_My_MakeResourceCoreFullPath(param_1, param_2);
	//fullPath: cache:levels/worlds/_l100_area01/tiles/tile_x-01_y-11/layers/terrain/terraintiledata_lowlod.core
	//resourceName: levels/worlds/_l100_area01/tiles/tile_x-01_y-11/layers/terrain/terraintiledata_lowlod
	log("  ret: %s", ret->str);
	log("End HK_My_MakeResourceCoreFullPath");
	return ret;
}

typedef void (*My_StringBuildInitWithLength_t)(MyString* stringPtr, int strLength);
My_StringBuildInitWithLength_t backup_My_StringBuildInitWithLength;
void HK_My_StringBuildInitWithLength(MyString* stringPtr, int strLength)
{
	//log("Hook HK_My_StringBuildInitWithLength");
	backup_My_StringBuildInitWithLength(stringPtr, strLength);
	log("stringPtr: %s, strLength: %d", stringPtr->str, strLength);
}


typedef int (*My_VectorPushBack_t)(MyVector* vector, void* item);
My_VectorPushBack_t backup_My_VectorPushBack;
int HK_My_VectorPushBack(MyVector* vector, void* item) {
	//log("HK_My_VectorPushBack vector: %p, item: %p", vector, item);
	if (vector->count >= 200) {
		log("HK_My_VectorPushBack vector: %p, item: %p", vector, item);
	}
	auto result = backup_My_VectorPushBack(vector, item);
	return result;
}

typedef ULONGLONG(*My_LikeHashString_t)(MyString* p1_string);
My_LikeHashString_t backup_My_GetFileHash;
ULONGLONG HK_My_GetFileHash(MyString* fileName) {
	auto result = backup_My_GetFileHash(fileName);
	log("HK_My_GetFileHash called with string: %s, hash: %llx",
		fileName->str, result);
	return result;
}

void DumpString(void* addr, size_t size) {
	log("Dumping memory at address: %p, size: %zu", addr, size);
	unsigned char* p = (unsigned char*)addr;

	for (size_t offset = 0; offset < size; offset += 16) {
		std::stringstream ss;
		for (size_t i = 0; i < 16 && offset + i < size; i++) {
			unsigned char c = p[offset + i];
			//ss << ((c >= 0x20 && c <= 0x7E) ? c : '.');
			ss << c;
		}
		log("%s", ss.str().c_str());
	}
	log("End Dumping memory at address: %p, size: %zu", addr, size);
}

typedef ULONGLONG(*FUN_141926990_t)(ResourceManager* resManager, MyString* resourceFullPath);
FUN_141926990_t backup_FUN_141926990;
ULONGLONG HK_FUN_141926990(ResourceManager* resManager, MyString* resourceFullPath) {
	log("HK_FUN_141926990 called with resourceFullPath: %s", resourceFullPath->str);
	auto result = backup_FUN_141926990(resManager, resourceFullPath);
	log("result HK_FUN_141926990 : %llx", result);

	return result;
}

typedef void* (*My_LikeFindResourceByCoreFileName_t)(ResourceManager* resManager,
	MyString* resourceFullPath, void* param_3, void* param_4);
My_LikeFindResourceByCoreFileName_t backup_My_LikeFindResourceByCoreFileName;
void* HK_My_LikeFindResourceByCoreFileName(ResourceManager* resManager,
	MyString* resourceFullPath, void* param_3, void* param_4)
{
	log("My_LikeFindResourceByCoreFileName called with resourceFullPath: %s", resourceFullPath->str);
	log("param_3: %p, param_4: %p", param_3, param_4);
	auto result = backup_My_LikeFindResourceByCoreFileName(resManager, resourceFullPath, param_3, param_4);
	log("result My_LikeFindResourceByCoreFileName: %p", result);

	return result;
}

#define _QWORD unsigned long long
#define _DWORD unsigned int
#define _BYTE unsigned char
struct __declspec(align(1)) MyChunkEntryWrapper // sizeof=0x80039
{                                       // XREF: struct_param1_resManager/r
	signed __int32 volatile_signed___int320;
	_BYTE gap4[12];
	_QWORD timestamp;
	ArchiveChunkEntry* entryStart;
	ArchiveChunkEntry* entryEnd;
	uint32_t totalCompressSize;
	char buffer[0x80000]; // 512kb buffer
	ArchiveChunkEntry* someChunkEntry;
	uint32_t decompressedSize;
};

const uint64_t g_prefetchFileHash = GetFileCoreHash("prefetch/fullgame.prefetch.core");
void DumpPrefetchHeaderInfo(BYTE* buffer) {
	uint64_t fileNameHash;
	uint32_t prefetchSize;
	char prefetchFileGUID[16];
	memcpy(&fileNameHash, buffer, sizeof(fileNameHash));
	memcpy(&prefetchSize, buffer + 8, sizeof(uint32_t));
	memcpy(&prefetchFileGUID, buffer + 12, sizeof(prefetchFileGUID));
	log("Dump Prefetch");
	if (fileNameHash != g_prefetchFileHash) {
		log("  Failed dump prefetch!, file hash invalid: %llx != %llx",
			fileNameHash, g_prefetchFileHash);
		return;
	}

	log("  file name hash: %llx", fileNameHash);
	log("  file size: %llu", prefetchSize);
	log("  file UUID: %s", GUIDToString((BYTE*)prefetchFileGUID).c_str());
}

typedef void* (*My_DecompressResource_t)
(ResourceManager* resManager, MyString* resourceFileName, void* param_3,
	ArchiveFileEntry* p4_fileEntry, char* param_5, LONGLONG p6_blockOffset, ULONGLONG p7_blockLength,
	uint32_t param_8);
My_DecompressResource_t backup_My_DecompressResource;
void* My_DecompressResource
(ResourceManager* p1_resManager, MyString* p2_coreFileName, MyPakFileInfo* p3_pakFileInfo,
	ArchiveFileEntry* p4_fileEntry, char* p5_outBuffer, LONGLONG p6_readOffset, ULONGLONG p7_readLength,
	uint32_t param_8)
{
	log("My_DecompressResource resFile: %s", p2_coreFileName->str);
	auto pakFile = p3_pakFileInfo;
	log("pakFile name: %s", pakFile->name);
	log("fileEntry hash %llx", p4_fileEntry->hash);
	log("fileEntry entryNum: %llu", p4_fileEntry->entryNum);
	log("fileEntry size: %llu", p4_fileEntry->size);
	log("fileEntry offset: %llu", p4_fileEntry->offset);
	log("p6_blockOffset: %lld", p6_readOffset);
	log("p7_blockLength: %llu", p7_readLength);
	//PrintStackTrace();
	log("calling..");
	auto retValue = backup_My_DecompressResource(
		p1_resManager, p2_coreFileName, p3_pakFileInfo, p4_fileEntry, p5_outBuffer, p6_readOffset, p7_readLength, param_8);
	log("called, retValue: %u", (uint32_t)retValue);
	DumpPrefetchHeaderInfo((BYTE*)p5_outBuffer);
	log("End My_DecompressResource");

	return retValue;
}


void SetupHooksDebug() {
	//HookFuncRva(0x18f67d0, &HK_My_AboutCoreStreamFile, &backup_My_AboutCoreStreamFile);
	//HookFuncRva(0x18f6890, &HK_My_MakeResourceCoreFullPath, &backup_My_MakeResourceCoreFullPath);
	//HookFuncRva(0x1926990, &HK_FUN_141926990, &backup_FUN_141926990);
	//HookFuncRva(0x190b8b0, &HK_My_StringBuildInitWithLength, &backup_My_StringBuildInitWithLength);
	//HookFuncRva(0x1929a50, &HK_My_ResourceReadBuffer, &backup_ResourceReadBuffer);
	//HookFuncRva(0x1904030, &HK_My_VectorPushBack, &backup_My_VectorPushBack);
	//HookFuncRva(0x1930430, &HK_My_GetFileHash, &backup_My_GetFileHash);
	//HookFuncRva(0x1924f30, &HK_My_LikeFindResourceByCoreFileName, &backup_My_LikeFindResourceByCoreFileName);
	HookFuncRva(0x1929bd0, &My_DecompressResource, &backup_My_DecompressResource);
}
