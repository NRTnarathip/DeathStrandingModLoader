#include "hooks.h"
#include "archive_reader.h"
#include "utils.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
#include <unordered_set>

int GetTotalPakFileName() {
	return *(int*)GetAddressFromRva(0x4f6d020);
}
const char** GetPakFileNameArray() {
	return *(const char***)GetAddressFromRva(0x4f6d028);
}
void LogPakFileNames() {
	auto fileNameArray = GetPakFileNameArray();
	auto count = GetTotalPakFileName();

	for (int i = 0; i < count; i++) {
		log("pak file[%d] %s", i, fileNameArray[i]);
	}
}

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

typedef uintptr_t(*My_LoadPakFile_t)(ResourceManager* resManager, MyString* loadResourceNamePtrPtr, int loadIndex);
My_LoadPakFile_t backup_LoadPakFile;
uintptr_t Hook_LoadPakFile(ResourceManager* resManager, MyString* loadResourceName, int loadIndex)
{
	log("Begin Hook_LoadPakFile");
	log("  pakFile: %s, loadIndex: %d", loadResourceName->str, loadIndex);
	auto result = backup_LoadPakFile(resManager, loadResourceName, loadIndex);
	auto pakFile = (MyPakFileInfo*)resManager->pakFileVector.items[resManager->pakFileVector.count - 1];
	log("new pakFile: %p, filePath: %s", pakFile, pakFile->filePath);
	log("End Hook_LoadPakFile: result: %llu", result);
	return result;
}

typedef void (*My_LoadAllPakFile_t)(ResourceManager* resManager, MyString* gameDir);
My_LoadAllPakFile_t backup_MyLoadAllPakFile;
void My_LoadAllPakFile(ResourceManager* resManager, MyString* gameDir) {
	log("[Hook Begin] My_LoadAllArchive called");
	log("make sure total file names: %d", GetTotalPakFileName());

	auto pakFileNames = GetPakFileNameArray();
	//pakFileNames[144] = "source:data/9f51c2f3b44ad40dfd8da72ee4295482.bin";
	{
	}
	LogPakFileNames();
	backup_MyLoadAllPakFile(resManager, gameDir);
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
	log("  param_2 str: %s", param_2->str);
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

typedef uint64_t(*My_LikeHashString_t)(MyString* p1_string);
My_LikeHashString_t backup_My_GetFileHash;
std::unordered_map<uint64_t, std::string> g_fileNameCacheLookupByHash;
uint64_t HK_My_GetFileHash(MyString* fileName) {
	auto fileHash = backup_My_GetFileHash(fileName);
	//log("HK_My_GetFileHash called with string: %s, hash: %llx",
	//	fileName->str, result);
	g_fileNameCacheLookupByHash[fileHash] = fileName->str;
	return fileHash;
}
const char* ConvertFileHashToName(uint64_t fileHash) {
	auto it = g_fileNameCacheLookupByHash.find(fileHash);
	if (it != g_fileNameCacheLookupByHash.end()) {
		return it->second.c_str();
	}
	return nullptr;
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
	log("  file GUID: %s", GUIDToString((BYTE*)guid));
}

void ReplaceSlashWithDoubleUnderscore(std::string& str) {
	size_t pos = 0;
	while ((pos = str.find('/', pos)) != std::string::npos) {
		str.replace(pos, 1, "__");
		pos += 2;
	}
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
	//log("pakFile file path: %s", pakFile->filePath);
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

	//// debug dump file
	//std::string fileName = ConvertFileHashToName(p4_fileEntry->hash);
	//if (fileName.find("prefetch") != std::string::npos)
	//{
	//	std::string savePath = fileName.c_str() + 6;
	//	ReplaceSlashWithDoubleUnderscore(savePath);
	//	savePath = "dump/" + savePath;
	//	if (std::filesystem::exists(savePath) == false) {
	//		std::fstream fs(savePath.c_str(), std::ios::binary | std::ios::trunc);
	//		fs.close();
	//	}

	//	std::fstream fs(savePath.c_str(), std::ios::in | std::ios::out | std::ios::binary);
	//	log("try save file at: %s", savePath.c_str());
	//	if (fs.is_open()) {
	//		fs.seekp(p6_readOffset);
	//		fs.write(p5_outBuffer, p7_readLength);
	//		fs.close();
	//		log("updated bytes offset: %llu, length: %llu, buffer: %p", p6_readOffset, p7_readLength, p5_outBuffer);
	//		if (p7_readLength == p4_fileEntry->size) {
	//			log("successfully dump file %s!", fileName.c_str());
	//		}
	//	}
	//	else {
	//		log("failed can't open file: %s", savePath.c_str());
	//	}
	//}

	log("End My_DecompressCoreFile");
	return status;
}

typedef bool(*My_LoadCoreBinaryFile_t)(MyString* p1_coreFilePath,
	MyString* param_2, void* param_3, void* param_4);
My_LoadCoreBinaryFile_t backup_My_LoadCoreFile;
bool My_LoadCoreFile
(MyString* p1_coreFilePath, MyString* p2_outLoadedCoreFileName, void* param_3,
	void* param_4)
{
	log("Begin My_LoadCoreFile, coreFilePath: %s", p1_coreFilePath->str);
	log("  p2: %s", p2_outLoadedCoreFileName->str);
	log("  p3: %p", param_3);
	log("  p4: %p", param_4);
	log("calling backup_My_LoadCoreFile");
	auto loadOK = backup_My_LoadCoreFile(p1_coreFilePath, p2_outLoadedCoreFileName, param_3, param_4);
	log("Postfix: My_LoadCoreFile: result: %d", loadOK);
	log("  p2: %s", p2_outLoadedCoreFileName->str);
	log("End My_LoadCoreFile");
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

typedef void (*My_AboutDecompressCoreFile_t)(uintptr_t param_1, void* param_2);
My_AboutDecompressCoreFile_t backup_My_AboutDecompressCoreFile;
void My_AboutDecompressCoreFile(uintptr_t param_1, MyTaskDecompressCore* p2_task) {
	log("Begin My_AboutDecompressCoreFile, param_1: %llx", param_1);
	auto task = p2_task;

	backup_My_AboutDecompressCoreFile(param_1, p2_task);

	log("postfix My_AboutDecompressCoreFile");
	log("  task status %d", task->status);

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
	log("Begin My_RMDecompressCore7, resManager: %p, p2_job: %p, p3_outBuffer: %p",
		resManager, p2_job, p3_outBuffer);
	log("  p4_blockOffset: %zu, p5_blockLength: %zu, param_6: %u",
		p4_blockOffset, p5_blockLength, param_6);
	log("  job: %p", p2_job);
	log("  job fileName: %s", p2_job->fileName);

	log("  job resManager: %p", p2_job->resManager);
	MyReadFileStatus status = backup_My_RM_VT7_DecompressCoreFile3(resManager, p2_job, p3_outBuffer,
		p4_blockOffset, p5_blockLength, param_6);
	log("  result: %d", status);

	log("End My_RMDecompressCore7");

	return status;
}

typedef MyString* (*My_GetCoreFilePathForReader_t)(MyString* p1_coreFileName, MyString* p2_outCoreFilePath);
My_GetCoreFilePathForReader_t backup_My_GetCoreFilePathForReader;

// Mod register
namespace fs = std::filesystem;
class ModEntry {
public:
	std::string modFolderName;
	std::string modFolderPath;
	std::unordered_set<std::string> fileFullPaths;
	std::unordered_set<std::string> gameCoreFileNames;
	std::unordered_map<std::string, std::string> coreFilePathLookupByName;
};
// key: core file path
std::unordered_map<std::string, ModEntry*> g_modEntryLookupWithCoreFilePath;
std::vector<ModEntry*> g_mods;

bool TryGetCoreFileReplace(const char* coreFileNameNoExt, ModEntry** p2_inoutMod,
	const char** p3_inoutNewCoreFilePath, bool isCoreStreamFileExt) {
	std::string newFilePathExt = coreFileNameNoExt;
	newFilePathExt.append(isCoreStreamFileExt ? ".core.stream" : ".core");
	if (g_modEntryLookupWithCoreFilePath.find(newFilePathExt) == g_modEntryLookupWithCoreFilePath.end())
		return false;

	auto mod = g_modEntryLookupWithCoreFilePath[newFilePathExt];
	*p2_inoutMod = mod;

	std::string redirectCoreFilePath = "source:" + mod->modFolderPath + '/' + newFilePathExt;
	std::replace(redirectCoreFilePath.begin(), redirectCoreFilePath.end(), '\\', '/');
	*p3_inoutNewCoreFilePath = redirectCoreFilePath.c_str();

	return true;
}

MyString* My_GetCoreFilePathForReader(MyString* p1_coreFileName, MyString* p2_outCoreFilePath) {
	auto coreFileNameNoExt = p1_coreFileName->str;
	//log("Begin My_GetCoreFilePathForReader, p1_coreFileNameNoExt: %s", coreFileNameNoExt);
	auto retValue = backup_My_GetCoreFilePathForReader(p1_coreFileName, p2_outCoreFilePath);
	ModEntry* mod = nullptr;
	const char* newCoreFilePath;
	if (TryGetCoreFileReplace(coreFileNameNoExt, &mod, &newCoreFilePath, false)) {
		SetNewMyString(p2_outCoreFilePath, newCoreFilePath);
		log("redirect new .core file: %s, mod: %s", p2_outCoreFilePath->str, mod->modFolderName.c_str());
	}

	//log("Post call: My_GetCoreFilePathForReader: result: %s", retValue->str);
	//log("End My_GetCoreFilePathForReader");
	return retValue;
}


My_GetCoreFilePathForReader_t backup_My_GetCoreStreamFilePathForReader;
MyString* My_GetCoreStreamFilePathForReader(MyString* p1_coreStreamFileName, MyString* p2_outCoreStreamFilePath) {
	//log("Begin My_GetCoreStreamFilePathForReader, p1_coreStreamFileName: %s", p1_coreStreamFileName->str);
	auto retValue = backup_My_GetCoreStreamFilePathForReader(p1_coreStreamFileName, p2_outCoreStreamFilePath);
	ModEntry* mod = nullptr;
	const char* newCoreFilePath;
	if (TryGetCoreFileReplace(p1_coreStreamFileName->str, &mod, &newCoreFilePath, true)) {
		SetNewMyString(p2_outCoreStreamFilePath, newCoreFilePath);
		log("redirect new .core.stream file: %s, mod: %s", p2_outCoreStreamFilePath->str, mod->modFolderName.c_str());
	}
	//log("End My_GetCoreStreamFilePathForReader");
	return retValue;
}



typedef void (*My_GetFileCountInPath_t)(MyString* param_1, int* param_2, int* param_3);
My_GetFileCountInPath_t backup_My_GetFileCountInPath;
void My_GetFileCountInPath(MyString* param_1, int* param_2, int* param_3)
{
	log("Begin My_GetFileCountInPath, param_1: %s, param_2: %p, param_3: %p",
		param_1->str, param_2, param_3);
	log("  param_2: %d", *param_2);

	backup_My_GetFileCountInPath(param_1, param_2, param_3);
	log("Post call");
	log("   param2: %d", *param_2);
	log("End My_GetFileCountInPath");
}

typedef bool (*My_StringCheck_t)(MyString* param_1, MyString* param_2);
My_StringCheck_t backup_My_StringCheck;
bool My_StringIsSame2(MyString* param_1, MyString* param_2) {
	log("Begin My_StringIsSame2, param_1: %s, param_2: %s", param_1->str, param_2->str);
	bool result = backup_My_StringCheck(param_1, param_2);
	log("Post call: result: %d", result);
	log("End My_StringIsSame2");
	return result;
}
typedef bool (*My_StringIsSame3_t)(MyString* param_1, MyString* param_2, int len);
My_StringIsSame3_t backup_My_StringIsSame3;
bool My_StringIsSame3(MyString* param_1, MyString* param_2, int len) {
	log("Begin My_StringIsSame3, param_1: %s, param_2: %s, len: %d",
		param_1->str, param_2->str, len);
	bool result = backup_My_StringIsSame3(param_1, param_2, len);
	log("Post call: result: %d", result);
	log("End My_StringIsSame3");
	return result;
}

struct SomeEntry {
	char* var_0x0;
	char* var_0x8;
	char* hash; // 0x10
	uint64_t var_0x28;
	char* toAssetPath; // 0x30
	char* fromAssetPath; // 0x38
};
typedef void (*My_AboutResolveLinkAsset_t)(void* param_1, void* param_2, void* param_3, char* param_4);
My_AboutResolveLinkAsset_t backup_My_AboutResolveLinkAsset;
void My_AboutResolveLinkAsset(void* param_1, void* param_2, void* param_3, char* param_4) {
	log("Begin My_AboutResolveLinkAsset, param_1: %p, param_2: %p, param_3: %p, param_4: %p",
		param_1, param_2, param_3, param_4);
	auto p3_vector = (MyVector*)param_3;
	log("p3 vector count: %d", p3_vector->count);
	log("p3 vector capacity: %d", p3_vector->capacity);
	backup_My_AboutResolveLinkAsset(param_1, param_2, param_3, param_4);
	log("End My_AboutResolveLinkAsset");
}

typedef uintptr_t(*My_FindTargetObject_t)(void* param_1, void* param_2, void* param_3);
My_FindTargetObject_t backup_My_FindTargetObject;
uintptr_t My_FindTargetObject(void* param_1, void* p2_guid, void* param_3) {
	log("Begin My_FindTargetObject, param_1: %p, param_2: %p, param_3: %p",
		param_1, p2_guid, param_3);
	log("  p2_guid: %s", GUIDToString(p2_guid));
	auto result = backup_My_FindTargetObject(param_1, p2_guid, param_3);
	log("End My_FindTargetObject, result: %llx", result);
	return result;
}


const char* oldString;

typedef bool (*My_StringIsSame_t)(MyString* str1, MyString* str2);
My_StringIsSame_t backup_My_StringIsSame;
bool My_StringIsSame(MyString* str1, MyString* str2)
{
	log("Begin My_StringIsSame, str1: %s", str1->str);
	log(" str2: %s", str2->str);
	auto result = backup_My_StringIsSame(str1, str2);

	log("End My_StringIsSame, result: %d", result);
	return result;
}

std::string g_newPakFileName = "9f51c2f3b44ad40dfd8da72ee4295482.bin";
typedef void (*My_LoadMoviePakFile_t)();
My_LoadMoviePakFile_t backup_LoadMoviePakFile;
void My_LoadMoviePakFile() {
	log("Begin My_LoadMoviePakFile");
	log("calling backup_LoadMoviePakFile");
	backup_LoadMoviePakFile();
	log("End My_LoadMoviePakFile");
}

typedef MyReadFileStatus(*My_ValidateResourceData_t)(MyString* pakFileName,
	int param_2, int param_3, int* p4_obj);
My_ValidateResourceData_t backup_My_ValidateResourceData;
MyReadFileStatus My_ValidateResourceData(MyString* pakFileName,
	int param_2, int param_3, int* p4_obj)
{
	log("Begin My_ValidateResourceData, pakFileName: %s, param_2: %d, param_3: %d, p4_obj: %p",
		pakFileName->str, param_2, param_3, p4_obj);
	log("p4: %d", *p4_obj);
	auto status = backup_My_ValidateResourceData(pakFileName, param_2, param_3, p4_obj);
	log("End My_ValidateResourceData, status: %d", status);
	return status;
}


typedef void (*My_SetupPakFileNameArray_t)();
My_SetupPakFileNameArray_t backup_My_SetupPakFileNameArray;
void My_SetupPakFileNames1() {
	log("Begin My_SetupPakFileNameArray");

	backup_My_SetupPakFileNameArray();
	log("post call, total pakFileName: %d", GetTotalPakFileName());
	log("End My_SetupPakFileNameArray");
}

My_SetupPakFileNameArray_t backup_My_SetupPakFileName2;
void My_SetupPakFileNames2() {
	log("Begin My_SetupPakFileName2");

	backup_My_SetupPakFileName2();
	log("post call, total pakFileName: %d", GetTotalPakFileName());
	//LogPakFileNames();
	log("End My_SetupPakFileName2");
}


void SetupHooksDebug() {
	//HookFuncRva(0x18f67d0, &HK_My_AboutCoreStreamFile, &backup_My_AboutCoreStreamFile);
	//HookFuncRva(0x18f6890, &HK_My_MakeResourceCoreFullPath, &backup_My_MakeResourceCoreFullPath);
	//HookFuncRva(0x1926990, &HK_FUN_141926990, &backup_FUN_141926990);
	//HookFuncRva(0x190b8b0, &HK_My_StringBuildInitWithLength, &backup_My_StringBuildInitWithLength);
	//HookFuncRva(0x1929a50, &HK_My_ResourceReadBuffer, &backup_ResourceReadBuffer);
	//HookFuncRva(0x1904030, &HK_My_VectorPushBack, &backup_My_VectorPushBack);
	//HookFuncRva(0x1930430, &HK_My_GetFileHash, &backup_My_GetFileHash); // need for get hash to name
	//HookFuncRva(0x1924f30, &HK_My_LikeFindResourceByCoreFileName, &backup_My_LikeFindResourceByCoreFileName);
	//HookFuncRva(0x1929bd0, &My_DecompressCoreFile, &backup_My_DecompressCoreFile);
	//HookFuncRva(0x1a98230, &My_LoadCoreFile, &backup_My_LoadCoreFile);
	//HookFuncRva(0x1927330, &My_AboutDecompressCoreFile, &backup_My_AboutDecompressCoreFile);
	//HookFuncRva(0x1929770, &My_RMDecompressCore7, &backup_My_RM_VT7_DecompressCoreFile3);
	//HookFuncRva(0x1924330, &My_GetFileCountInPath, &backup_My_GetFileCountInPath);
	//HookFuncRva(0x190b110, &My_StringIsSame2, &backup_My_StringCheck);
	//HookFuncRva(0x1a96c60, &My_AboutResolveLinkAsset, &backup_My_AboutResolveLinkAsset);
	//HookFuncRva(0x1a8f540, &My_FindTargetObject, &backup_My_FindTargetObject);
	//HookFuncRva(0x19ccb80, &My_LoadMoviePakFile, &backup_LoadMoviePakFile);
	//HookFuncRva(0x1928ac0, &Hook_LoadPakFile, &backup_LoadPakFile);
	//HookFuncRva(0x190b0a0, &My_StringIsSame, &backup_My_StringIsSame);
	//HookFuncRva(0x1928450, &My_ValidateResourceData, &backup_My_ValidateResourceData);
	//HookFuncRva(0x1924850, &My_LoadAllPakFile, &backup_MyLoadAllPakFile);
	//HookFuncRva(0x17ec340, &My_SetupPakFileNames1, &backup_My_SetupPakFileNameArray);
	//HookFuncRva(0x1930560, &My_SetupPakFileNames2, &backup_My_SetupPakFileName2);
	//HookFuncRva(0x190d340, &My_StringIsSame3, &backup_My_StringIsSame3);
	HookFuncRva(0x18f6720, &My_GetCoreFilePathForReader, &backup_My_GetCoreFilePathForReader);
	HookFuncRva(0x18f67d0, &My_GetCoreStreamFilePathForReader, &backup_My_GetCoreStreamFilePathForReader);


	// Mod Register
	log("Setup Mod register...");
	std::string rootModsFolderPath = "mods";
	for (const auto& modDirectoryEntry : fs::directory_iterator(rootModsFolderPath)) {
		if (modDirectoryEntry.is_directory()) {
			auto modDirPath = modDirectoryEntry.path();
			auto modDirPathString = modDirPath.string();
			auto modFolderName = modDirPath.filename().string();
			if (modFolderName[0] == '.') {
				log("skip mod folder: %s", modFolderName.c_str());
				continue;
			}

			auto modEntry = new ModEntry();
			modEntry->modFolderName = modDirPath.filename().string();
			modEntry->modFolderPath = modDirPath.string();
			log("modFolderPath: %s", modEntry->modFolderPath.c_str());
			log("modFolderName: %s", modEntry->modFolderName.c_str());
			for (const auto& fileEntry : fs::recursive_directory_iterator(modDirPath)) {
				if (fileEntry.is_regular_file()) {
					auto fileName = fileEntry.path().filename().string();
					bool isCoreOrStreamFile = fileName.find(".core") != std::string::npos;
					if (!isCoreOrStreamFile) {
						log("warning!, not support file: %s, only support .core or .stream.core files", fileName.c_str());
						continue;
					}

					std::string filePath = fileEntry.path().string();
					modEntry->fileFullPaths.insert(filePath);
					std::string filePathRelative = filePath.substr(modEntry->modFolderPath.size() + 1);
					std::string gameCoreFilePath = filePathRelative;
					std::replace(gameCoreFilePath.begin(), gameCoreFilePath.end(), '\\', '/');
					modEntry->gameCoreFileNames.insert(gameCoreFilePath);
					modEntry->coreFilePathLookupByName[fileEntry.path().filename().string()] = gameCoreFilePath;
					g_modEntryLookupWithCoreFilePath[gameCoreFilePath] = modEntry;
					log("mapped coreFile: %s to mod: %s", gameCoreFilePath.c_str(), modEntry->modFolderName.c_str());
				}
			}

			g_mods.push_back(modEntry);
			log("Added new mod: %s", modEntry->modFolderName.c_str());
		}
	}
	log("Successfully setup Mod register");
}
