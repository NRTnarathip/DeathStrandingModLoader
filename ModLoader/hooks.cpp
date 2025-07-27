#include "hooks.h"
#include "archive_reader.h"
#include "utils.h"

unsigned __int64 Hook_ResourceReadBuffer(
	ResourceReaderHandle* reader, unsigned char* buffer,
	unsigned __int64 readOffset, unsigned __int64 readLength)
{
	log("============================");
	log("[Hook Begin] ResourceReadBuffer");
	log("reader ptr: %p, buffer ptr: %p, readOffset: %llx, readLength: 0x%llx",
		reader, buffer, readOffset, readLength);
	auto bufferAddr = (UINT64)buffer;
	log("buffer ptr addr bytes: %s", GetHexString(&bufferAddr, 8));
	MyString* fullPathString = (MyString*)reader->fullPath;
	// Call the original function
	//log("read offset: %llu", readOffset);
	//log("read len   : %d", readLength);
	auto result = fpResourceReadBuffer(reader, buffer, readOffset, readLength);
	log("[Postfix]");

	// first called on read header
	if (readOffset == 0 && readLength == 0x28) {
		auto archiveReader = new ArchiveReader();
		archiveReader->readArchive(reader);
		archiveReader->LogInfo();
	}

	log("[Hook End] ResourceReadBuffer");
	log("==========================");
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

typedef  int (*My_AddResourcePatch_t)(int* resourceCounterPtr, ResourceArchiveHeader* archiveHeader);
My_AddResourcePatch_t fpMy_AddResourcePatch = nullptr;

int My_AddResourcePatch(int* resourceCounterPtr, ResourceArchiveHeader* header) {
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
	int resourceIndex, ResourceArchiveHeader* resPtr)
{
	log("[Hook Begin] My_AddResourceIndex");
	log("resourceCounterPtr: %p, resourceIndex: %d, header: %p", resourceCounterPtr, resourceIndex, resPtr);

	// crash some archive
	//try {
	//	log("res name: %s", resPtr->name);
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

