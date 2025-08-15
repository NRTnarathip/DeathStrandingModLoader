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
	log("[Hook End] BuildStringBuffer");
	return result;
}

typedef void (*My_LoadAllArchive_t)(ResourceManager* resManager, char* loadResourcePathPtr);
My_LoadAllArchive_t fpMy_LoadAllArchive = nullptr;
void My_LoadAllArchive(ResourceManager* resManager, MyString* loadResourcePathPtr) {
	log("[Hook Begin] My_LoadAllArchive called");
	log("resManager: %ps", resManager);
	log("loadResourcePathPtr: %s", loadResourcePathPtr->str);
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
	log("[Prefix]");
	fpMy_StringBuildInitWithLength(stringPtrPtr, strLength);
	log("[Postfix]");
	log("stringPtr->str: %s", stringPtr->str);

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
	log("archiveHeader->name: %s", header->filePath);
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

	std::stringstream ss;
	for (size_t offset = 0; offset < size; offset += 64) {
		for (size_t i = 0; i < 16 && offset + i < size; i++) {
			unsigned char c = p[offset + i];
			ss << c;
		}
		ss << "\n";
	}

	log("%s", ss.str().c_str());
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
	log("Dump Prefetch");
	uint32_t fileSize;
	char guid[16];
	uint64_t fileTypeHash;
	memcpy(&fileTypeHash, buffer, sizeof(fileTypeHash));
	memcpy(&fileSize, buffer + 8, sizeof(fileSize));
	memcpy(&guid, buffer + 12, sizeof(guid));
	log("  type hash: %llx", fileTypeHash);
	log("  file size: %llu", fileSize);
	log("  file GUID: %s", GUIDToString((BYTE*)guid).c_str());
}

typedef MyReadFileStatus(*My_DecompressCoreFile_t)
(ResourceManager* resManager, MyString* resourceFileName, void* param_3,
	ArchiveFileEntry* p4_fileEntry, char* param_5, LONGLONG p6_blockOffset, ULONGLONG p7_blockLength,
	uint32_t param_8);
My_DecompressCoreFile_t backup_My_DecompressCoreFile;
// p7_readLength prefetch: == full size,
// and other core file use <= 0x40000 | <= 256kb
MyReadFileStatus My_DecompressCoreFile
(ResourceManager* p1_resManager, MyString* p2_coreVirtualPath, MyPakFileInfo* p3_pakFileInfo,
	ArchiveFileEntry* p4_fileEntry, char* p5_outBuffer, LONGLONG p6_readOffset, ULONGLONG p7_readLength,
	uint32_t param_8)
{
	log("Begin My_DecompressCoreFile: %s", p2_coreVirtualPath->str);
	auto pakFile = p3_pakFileInfo;
	log("pakFile: %p", pakFile);
	log("pakFile file path: %s", pakFile->filePath);
	//log("fileEntry hash %llx", p4_fileEntry->hash);
	//log("fileEntry entryNum: %llu", p4_fileEntry->entryNum);
	log("fileEntry size: %llu", p4_fileEntry->size);
	log("fileEntry offset: %llu", p4_fileEntry->offset);
	log("p6_readOffset: %lld", p6_readOffset);
	log("p7_readLength: %llu", p7_readLength);

	//log("calling..");
	auto status = backup_My_DecompressCoreFile(
		p1_resManager, p2_coreVirtualPath, p3_pakFileInfo, p4_fileEntry, p5_outBuffer, p6_readOffset, p7_readLength, param_8);
	log("called, retValue: %u", status);
	log("End My_DecompressCoreFile");

	// debug test replace texture 
	if (strcmp(p2_coreVirtualPath->str,
		"cache:interface/textures/ds/splash_screen/ut_ui_505_games_logo.core") == 0)
	{
		log("detect found ut_ui_505_games_logo, Dump stack....");
		PrintStackTrace();
	}

	return status;
}

typedef bool(*My_LoadCoreBinaryFile_t)(MyString* p1_coreFilePath,
	MyString* param_2, void* param_3, void* param_4);
My_LoadCoreBinaryFile_t backup_My_LoadCoreFile;
bool My_LoadCoreFile
(MyString* p1_coreFilePath, MyString* param_2, void* param_3,
	void* param_4)
{
	log("Begin My_LoadCoreFile, coreFilePath: %s", p1_coreFilePath->str);
	log("  p2: %s", param_2->str);
	//log("  p3: %llu", (uint64_t)param_3);
	//log("  p4: %llu", (uint64_t)param_4);
	bool testRedirectFile = false;
	if (testRedirectFile && strcmp(p1_coreFilePath->str, "prefetch/fullgame.prefetch") == 0) {
		log("  debug change redirect path file..");
		std::string newPath = "source:mods/fullgame.prefetch.new.core";
		strcpy_s(p1_coreFilePath->str, newPath.length() + 1, newPath.c_str());
		size_t newPathLength = newPath.length();
		log("  patched load file path: %s", p1_coreFilePath->str);
	}
	auto loadOK = backup_My_LoadCoreFile(p1_coreFilePath, param_2, param_3, param_4);
	log("Postfix: My_LoadCoreFile: result: %d", loadOK);
	log("  p2: %s", param_2->str);
	//log("  p3: %s", ((MyString*)param_3)->str);
	//log("  p4: %llu", (uint64_t)param_4);
	log("End My_LoadCoreFile");
	if (testRedirectFile && strcmp(p1_coreFilePath->str, "prefetch/fullgame.prefetch") == 0) {
		system("pause");
	}
	return loadOK;
}

struct MyTaskDecompressCore {
	byte decompressType;// 0x0
	byte gap_0x1[0x3]; // 0x1
	uint32_t progressStatus; // 0x4
	uint32_t var_0x8; // 0x8
	uint64_t var_0x10; // 0x10
	char var_0x18[0x10]; // 0x18
	void* var_0x28; // 0x28
	char* coreFileName; // 0x30 -> 0x37
	uint32_t var_0x38; // 0x38
	int status; // 0x3c
	uint64_t currentTotalBufferSize;
	uint64_t remainingBufferSize;
	void* buffer; // 0x50
};


// crash some time
void LogMyTaskDecompressCore(MyTaskDecompressCore* job) {
	log("MyTaskDecompressCore info...");
	log("  coreFileName2: %s", job->coreFileName);
	log("  decompressType: %u", job->decompressType);
	log("  progressStatus: %u", job->progressStatus);
	log("  var 0x28: %llu", (uint64_t)job->var_0x28);
	log("  var0x38: %u", job->var_0x38);
	log("  status: %u", job->status);
	log("  totalBufferSize: %llu", job->currentTotalBufferSize);
	log("  remaining: %llu", job->remainingBufferSize);
	log("  buffer: %p", job->buffer);
}

typedef void (*My_AboutDecompressCoreFile_t)(LONGLONG param_1, void* param_2);
My_AboutDecompressCoreFile_t backup_My_AboutDecompressCoreFile;
void My_AboutDecompressCoreFile(LONGLONG param_1, MyTaskDecompressCore* p2_task) {
	log("Begin My_AboutDecompressCoreFile, param_1: %lld", param_1);
	auto task = p2_task;

	backup_My_AboutDecompressCoreFile(param_1, p2_task);

	log("postfix My_AboutDecompressCoreFile");

	// dumping vtable
	auto resManager = GetResourceManager();
	log("resManager var_0x10: %s", ((MyString*)resManager + 2)->str);
	//void** vtable = *(void***)resManager;
	//log("res manager: %p", resManager);
	//for (int i = 0; i < 0x20; i++) {
	//	void* func = vtable[i];
	//	log("vtable[%d] address rva: %p", i, ConvertAddressToRva(func));
	//}


	log("End My_AboutDecompressCoreFile");
}

struct My_RMDecompress7_Job {
	char* fileName; // 0x00
	uint64_t unk_0x8; //0x08
	ResourceManager* resManager; // 0x10
	char gap_0x18[0x10]; // 0x18 -> 0x27
	MyPakFileInfo* pakFile; // 0x28 -> 0x2F
	ArchiveFileEntry* fileEntry; // 0x30 -> 0x37
};
typedef MyReadFileStatus(*My_RM_VT7_DecompressCoreFile3_t) (ResourceManager* resManager,
	My_RMDecompress7_Job* p2_job, void* p3_outBuffer,
	size_t p4_blockOffset, size_t p5_blockLength, uint32_t param_6);
My_RM_VT7_DecompressCoreFile3_t backup_My_RM_VT7_DecompressCoreFile3;
MyReadFileStatus My_RMDecompressCore7(ResourceManager* resManager,
	My_RMDecompress7_Job* p2_job, void* p3_outBuffer,
	size_t p4_blockOffset, size_t p5_blockLength, uint32_t param_6)
{
	log("Begin My_RM_VT7_DecompressCoreFile3, resManager: %p, p2_job: %p, p3_outBuffer: %p",
		resManager, p2_job, p3_outBuffer);
	log("  p4_blockOffset: %zu, p5_blockLength: %zu, param_6: %u",
		p4_blockOffset, p5_blockLength, param_6);
	log("  job: %p", p2_job);
	log("  job fileName: %s", p2_job->fileName);

	//log("  job resManager: %p", p2_job->resManager);
	//MyPakFileInfo* pakFileInfo = (MyPakFileInfo*)(p2_job);
	//log("  pakFile name: %s", pakFileInfo->filePath);
	MyReadFileStatus status = backup_My_RM_VT7_DecompressCoreFile3(resManager, p2_job, p3_outBuffer,
		p4_blockOffset, p5_blockLength, param_6);
	log("  result: %d", status);
	//PrintStackTrace();

	log("End My_RM_VT7_DecompressCoreFile3");

	return status;
}

typedef MyString* (*My_GetCoreFilePathForReader_t)(MyString* p1_coreFileName, MyString* p2_coreFilePath);
My_GetCoreFilePathForReader_t backup_My_GetCoreFilePathForReader;
MyString* My_GetCoreFilePathForReader(MyString* p1_coreFileName, MyString* p2_coreFilePath) {
	log("Begin My_GetCoreFilePathForReader, p1_coreFileName: %s, p2_coreFilePath: %s",
		p1_coreFileName->str, p2_coreFilePath->str);
	auto retValue = backup_My_GetCoreFilePathForReader(p1_coreFileName, p2_coreFilePath);
	log("Postcall: My_GetCoreFilePathForReader");
	//log("  p2_coreFilePath str: %s", p2_coreFilePath->str);
	log("  result: %s", retValue->str);
	log("End My_GetCoreFilePathForReader");
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
	HookFuncRva(0x1929bd0, &My_DecompressCoreFile, &backup_My_DecompressCoreFile);
	HookFuncRva(0x1a98230, &My_LoadCoreFile, &backup_My_LoadCoreFile);
	HookFuncRva(0x1927330, &My_AboutDecompressCoreFile, &backup_My_AboutDecompressCoreFile);
	HookFuncRva(0x1929770, &My_RMDecompressCore7, &backup_My_RM_VT7_DecompressCoreFile3);
	//HookFuncRva(0x18f6720, &My_GetCoreFilePathForReader, &backup_My_GetCoreFilePathForReader);
}
