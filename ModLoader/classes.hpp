#pragma once
#include <cstdint>
#include <cstring>
#include <Windows.h>
#include <emmintrin.h> 

#define ulonglong ULONGLONG
#define longlong LONGLONG
#define uint unsigned int

#define ASSERT_OFFSET(struct_type, member, expected_offset) \
    static_assert(offsetof(struct_type, member) == expected_offset, \
                  #member " offset mismatch")

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

struct ResourceManager
{
	char padding1[0x30];
	void* first; // 0x30
	ResourceList* resourceListPtr; // 0x38
	int resourcePatchTotal; // 0x40
};

struct ArchiveHeader {
	int index; //0x0 - 0x3
	uint32_t encryptKey; // 0x4 - 0x7
	char* name; //0x08 - 0x0F
	void* gap10; //0x10 - 0x17
	bool isEncrypted; //0x18 - 0x19
	char padding4[7]; // 
	int p3;
	int p4;
	int* indexPtr; // 0x28 - 0x2F
	longlong p5;   //0x30 > 0x37
	void* dataPtr; // 0x38 - 0x3F
};
//  size 24 bytes : 0x18
struct  MyStringHeader {
	//int refCount1; // 0x0
	//int someFlags; // 0x4
	ulonglong refCount1; // 0x0, using longlong for consistency with MyString
	int refCount2; // 0x8
	uint reserveLength;  // 0xC
	char* dataPtr; // 0x10
};

// size 24 bytes : 0x18
struct MyString {
	char* str; //0x0 -> 0x7
	longlong refCount; // 0x8
	MyStringHeader* prevStringHeader; // 0x10
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

uintptr_t imageBase = (uintptr_t)GetModuleHandleA(NULL);
void* GetFuncAddr(uintptr_t rva) {
	return (void*)(imageBase + rva);
}

typedef LONGLONG* (*MurmurHash3_t)(void* hash, void* data, ULONGLONG length);
MurmurHash3_t fpMurmurHash3 = (MurmurHash3_t)GetFuncAddr(0x18fe890);

byte DAT_144f6d010_OrGlobalHashSalt[16] = {
0x43, 0x94, 0x3A, 0xFA, 0x62, 0xAB, 0x1C, 0xF4,
0x1C, 0x81, 0x76, 0xF3, 0x3E, 0x9E, 0xA8, 0xD2
};

__m128i GlobalHashSaltM128I = _mm_loadu_si128((__m128i*)DAT_144f6d010_OrGlobalHashSalt);
