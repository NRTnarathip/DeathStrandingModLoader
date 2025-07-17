#include "classes.h"
#include "helper.hpp"

typedef ulonglong(*CheckFileMagic_t)(
	ResourceReaderHandle* reader, void* buffer,
	void* readOffset, ulonglong readLength);

CheckFileMagic_t fpCheckFileMagic = nullptr;

ulonglong Hook_CheckFileMagic(ResourceReaderHandle* reader, void* buffer,
	void* readOffset, ulonglong readLength)
{
	log("============================");
	log("[Hook Begin] CheckFileMagic");
	log("reader: %p, buffer: %p, param_3: %p, readLength: 0x%llX",
		reader, buffer, readOffset, readLength);
	MyString* fullPathString = (MyString*)reader->fullPath;
	//auto DAT_144f6bd10 = (MyString*)GetDataSection(0x144f6bd10);

	//log("Dump..");
	//for (int i = 0; i < 0x28; i++) {
	//	log("inputMagicPtr[%d]: %02X", i, ((unsigned char*)inputMagicPtr)[i]);
	//}
	//log("end dump");

	// Call the original function
	log("read bytes len: %d", readLength);
	log("before p3: %llu", readOffset);
	auto result = fpCheckFileMagic(reader, buffer, readOffset, readLength);
	log("[Postfix]");
	//log("result: 0x%llX", result);
	log("after p3: %llu", readOffset);

	//log("Dump..");
	//for (int i = 0; i < 0x28; i++) {
	//	log("inputMagicPtr[%d]: %02X", i, ((unsigned char*)inputMagicPtr)[i]);
	//}
	//log("end dump");

	log("[Hook End] CheckFileMagic");
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
		auto someDat = (UINT*)GetDataSection(0x4562ca0);
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

typedef  int (*My_AddResourcePatch_t)(int* resourceCounterPtr, ArchiveHeader* archiveHeader);
My_AddResourcePatch_t fpMy_AddResourcePatch = nullptr;

int My_AddResourcePatch(int* resourceCounterPtr, ArchiveHeader* header) {
	log("[Hook Begin] My_AddResourcePatch called");

	log("resourceCounterPtr: %p, archiveHeader: %p", resourceCounterPtr, header);
	log("resourceCounterPtr value: %d", *resourceCounterPtr);
	log("archiveHeader->index: %d", header->index);
	log("header key: %s", GetHexString(&header->encryptKey, 4));
	log("archiveHeader->isEncrypted: %s", header->isEncrypted ? "true" : "false");
	log("archiveHeader->name: %s", header->name);
	log("[Prefix]");


	auto dataPtr = (char*)(header->indexPtr);
	for (int i = 0; i < 4; i++) {
		dataPtr += i * 0x10;
		log("[%d] dump data: %s %s",
			i,
			GetHexString(dataPtr, 0x8),
			GetHexString(dataPtr + 8, 0x8));
	}

	auto result = fpMy_AddResourcePatch(resourceCounterPtr, header);
	log("[Postfix]");
	log("result: %d", result);
	log("[Hook End] My_AddResourcePatch");
	return result;
}
