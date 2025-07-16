#include "classes.h"
#include "helper.hpp"

// size 0x18
struct MyString {
	char* str; //0x0 -> 0x7
	ulonglong someNumber; // 0x8 -> 0xC
	void* someObjectPtr; // 0xF -> 0x17
};

// size 0x18
struct MyStringHeader {
	int refCount;
	UINT someFlags;
	int totalLength;
	UINT stringLength;
	char* somePtr;
};

typedef ulonglong(*CheckFileMagic_t)(
	ResourceReaderHandle* reader, void* inputMagicPtr, ulonglong param_3, ulonglong param4_likeByteLength);
CheckFileMagic_t fpCheckFileMagic = nullptr;
ulonglong Hook_CheckFileMagic(ResourceReaderHandle* reader, void* inputMagicPtr, ulonglong param_3,
	ulonglong param4_likeByteLength)
{
	print("[Hook Begin] CheckFileMagic called");
	print("reader: %p, inputMagicPtr: %p, param_3: 0x%llX, param_4: 0x%llX",
		reader, inputMagicPtr, param_3, param4_likeByteLength);
	MyString* fullPathString = (MyString*)reader->fullPath;
	print("fullPathString str: %s", fullPathString->str);
	print("fullPathString length: %d", fullPathString->someNumber);
	print("fullPathString some str: %s", fullPathString->someObjectPtr);

	auto DAT_144f6bd10 = (MyString*)GetDataSection(0x144f6bd10);
	print("DAT_144f6bd10: %p", DAT_144f6bd10);
	print("DAT_144f6bd10 string: %s", DAT_144f6bd10->str);
	//GameResourceManager_Ctor(resourceManager, &DAT_144f6bd10, &local_40, param_1, true);

	// Call the original function
	auto result = fpCheckFileMagic(reader, inputMagicPtr, param_3, param4_likeByteLength);
	print("result: 0x%llX", result);
	print("[Hook End] CheckFileMagic");
	return result;
}


//  0x190aa00

typedef MyString* (*BuildStringBuffer_t)(MyString* param_1, char* string2);
BuildStringBuffer_t fpBuildStringBuffer = nullptr;
MyString* BuildStringBuffer(MyString* myString, char* param_2) {
	//mute.lock();
	print("[Hook Begin] BuildStringBuffer");
	print("myString: %p", myString);
	print("param_2: %s", param_2);

	//myString->str should be null
	//print("my string val: %s", myString->str);

	print("[Prefix]");
	auto result = fpBuildStringBuffer(myString, param_2);
	print("[Postfix]");
	print("my string val: %s", myString->str);
	print("my string someNumber: %d", myString->someNumber);
	print("my string someObjPtr: %p", myString->someObjectPtr);
	print("[Hook End] BuildStringBuffer");
	return result;
}

typedef void (*My_LoadAllArchive_t)(ResourceManager* resManager, char* loadResourcePathPtr);
My_LoadAllArchive_t fpMy_LoadAllArchive = nullptr;
void My_LoadAllArchive(ResourceManager* resManager, MyString* loadResourcePathPtr) {
	print("[Hook Begin] My_LoadAllArchive called");
	print("resManager: %ps", resManager);
	print("loadResourcePathPtr: %s", loadResourcePathPtr->str);
	print("loadResourcePathPtr: %p", loadResourcePathPtr->someObjectPtr);
	print("loadResourcePathPtr: %d", loadResourcePathPtr->someNumber);
	print("[Prefix]");
	My_LoadAllArchive(resManager, loadResourcePathPtr);
	print("[Postfix]");
	print("[Hook End] My_LoadAllArchive");
}

typedef void (*My_StringBuildInitWithLength_t)(MyString* stringPtrPtr, int strLength);
My_StringBuildInitWithLength_t fpMy_StringBuildInitWithLength = nullptr;
void My_StringBuildInitWithLength(MyString* stringPtrPtr, int strLength) {
	print("[Hook Begin] My_StringBuildInitWithLength called");
	print("stringPtrPtr: %p, strLength: %d", stringPtrPtr, strLength);
	auto stringPtr = (MyString*)stringPtrPtr;
	print("stringPtr->str: %s", stringPtr->str);
	print("stringPtr->someObjPtr: %p", stringPtr->someObjectPtr);
	print("[Prefix]");
	fpMy_StringBuildInitWithLength(stringPtrPtr, strLength);
	print("[Postfix]");
	print("stringPtr->str: %s", stringPtr->str);
	print("stringPtr->someObjPtr: %p", stringPtr->someObjectPtr);
	if (stringPtr->someObjectPtr) {
		//auto header = (MyString*)(stringPtr->someObjectPtr);
		//print("header str : %s", header->str);
		//print("header total length: %d", header->totalLength);
	}
	else {
		print("some object ptr is null !!");
	}

	print("[Hook End] My_StringBuildInitWithLength");
}

typedef MyString* (*AssignRefCountedString_t)(MyString* leftStringPtr, MyString* rightStringPtr);
AssignRefCountedString_t fpAssignRefCountedString = nullptr;
MyString* AssignRefCountedString(MyString* leftString, MyString* rightString) {
	print("[Hook Begin] AssignRefCountedString called");
	print("leftStringPtr: %p, rightStringPtr: %p", leftString, rightString);
	print("left string: %s", leftString->str);
	print("right string: %s", rightString->str);
	// simulate code

	print("begin simulate code");
	if (leftString->str != rightString->str) {
		auto leftStringLength = (UINT*)(leftString->str + -0x10);
		print("left string length ptr: %p", leftStringLength);
		print("left string length: %d", *leftStringLength);
		auto someDat = (UINT*)GetDataSection(0x4562ca0);
		print("someDat ptr: %p", someDat);
		print("someDat val: %d", *someDat);
	}
	print("end   simulate code");

	print("[Prefix]");
	auto result = fpAssignRefCountedString(leftString, rightString);
	print("[Postfix]");
	print("result: %p", result);
	print("left string: %s", leftString->str);
	print("right string: %s", rightString->str);
	print("[Hook End] AssignRefCountedString");
	return result;
}
