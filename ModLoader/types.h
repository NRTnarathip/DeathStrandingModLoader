#pragma once

#include <cstdint>
#include <cstring>
#include <Windows.h>
#include <emmintrin.h> 
#include <vector>
#include <iostream>
#include <atomic>
#include <cstring>


#define ASSERT_OFFSET(struct_type, member, expected_offset) \
    static_assert(offsetof(struct_type, member) == expected_offset, \
                  #member " offset mismatch")

struct MyString {
	char* str; //0x0 -> 0x7
};


// define struct type
struct Metadata {
	const char* GetInterface2(Metadata* meta) {
		uintptr_t selfPtr = (uintptr_t)meta;
		return (const char*)(selfPtr + 0xA0);
	}
};

struct ResourceHeaderInfo2 {
	const char* filePath; //0x0
	int p1;
	int p2;
	Metadata* meta; // 0x10
};

// size 0x40 from ghidra
#pragma pack(push, 1)
struct ResourceHeader {
	int index; // 0x00
	int unknow1; // 0x04, could be a type or category identifier
	const char* name; // 0x08, pointer to a string name of the resource
	ResourceHeaderInfo2* info; //0x10
	bool isEncrypted; // 0x18, indicates if the resource is encrypted
	char padding[7];               // 0x19 - 0x1F ? เพื่อให้ align เป็น 8-byte (รวม = 8 bytes)
	uint64_t unknownField1;        // 0x20 (8 bytes)
	uint32_t value1;               // 0x28 (4 bytes)
	uint32_t value2;               // 0x2C (4 bytes)
};
#pragma pack(pop)

struct ResourceList {
	int count;
	int capacity;
	void* data;
};

struct MyVector {
	uint32_t count;   // current number of items
	uint32_t capacity; // allocated capacity
	void** items; // pointer to array of items
};

struct ResourceManager
{
	uint32_t var_0x0; // 0x00 -> 0x03
	uint32_t var_0x8; // 0x04 -> 0x07
	MyString* cacheNameString; // 0x08 -> 0x0F
	char padding1[0x20]; // 0x10 -> 0x2F
	MyVector pakFileVector; // 0x30
	int pakFilePatchTotal; // 0x40
};


enum class MyReadFileStatus : uint32_t
{
	Unk0 = 0,
	Unk1 = 1,
	Success = 2,
	Failed = 3,
	AccessDenied = 4,
	CantOpenFile = 5,
	FileNotOpened = 6,
	FileNotFound = 7,
	CantReadFromFile = 8,
	CantWriteToFile = 9,
	InputPastEndOfFile = 10,
	UnableToWriteAllBytes = 11,
	FileAlreadyExists = 12,
	OutOfFileHandles = 13,
	ReadCallbackFailed = 14,
	DeviceIsFull = 15,
	OperationCanceled = 16,
	FileCorrupted = 17
};



struct ArchiveFileEntry;
struct ArchiveChunkEntry;
// size 0x40
struct MyPakFileInfo {
public:
	int index; //0x0 - 0x3
	uint32_t encryptKey; // 0x4 - 0x7
	char* filePath; //0x08 - 0x0F
	void* gap10; //0x10 - 0x17
	bool isEncrypted; //0x18 - 0x19
	char padding[7]; //0x1A - 0x1F, padding to align to 8 bytes
	MyVector fileEntryVector; // 0x20 -> 0x2F
	MyVector chunkEntryVector; // 0x30 -> 0x37
};

struct MyStringWrapper {
	uint64_t length;
	//MyString string;
};


#define FIELD(type, name, offset, prev) \
    char _pad_##name[offset - prev]; \
    type name

struct ResourceReaderHandle {
	LONGLONG someValue; //0x0
	char padding[0x10 - 0x8];
	int status; //0x10
	char padding1[0x20 - 0x14];
	char* entryPath;  //0x20
	MyString* fullPath; //0x28
	char padding2[0x20]; // padding to align to 0x50
	MyString* errorString; // 0x50
	bool someBool1; // 0x58
};

ASSERT_OFFSET(ResourceReaderHandle, status, 0x10);
ASSERT_OFFSET(ResourceReaderHandle, entryPath, 0x20);
ASSERT_OFFSET(ResourceReaderHandle, fullPath, 0x28);
ASSERT_OFFSET(ResourceReaderHandle, errorString, 0x50);
ASSERT_OFFSET(ResourceReaderHandle, someBool1, 0x58);


enum EPackFileCategory : int {
	Invalid = -1,
	Initial = 0,
	Area00 = 1,
	Barch01 = 2,
	Remainder = 3,
	Area01 = 4,
	Area02 = 5,
	Area04 = 6,
	Warrior01 = 7,
	Warrior02 = 8,
	Warrior03 = 9,
	Patch = 10,
	PackFileCategries = 11,
};
