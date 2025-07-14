#pragma once

#include <stdio.h>

struct alignas(8) ResourceEntry {
	uint32_t index;
	uint32_t padding;     // เพื่อให้ ptr1 ชิด 8-byte
	uint64_t ptr1;
	uint64_t ptr2;
	uint64_t sizeOrOffset;
};

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

struct ResourceManager
{
	char padding1[0x30];
	int resourceTotal; // 0x30
	char padding2[0x4]; // 0x34
	ResourceHeader** resourceListPtrPtr; // 0x38
	int resourcePatchTotal; // 0x40
};

// correct type
//struct ResourceReaderHandle {
//	LONGLONG someValue; //0x0 -> 0x7
//	char padding1[0x08]; //0x8 -> 0xF
//	int status; //0x10 -> 0x13, status code of the resource reader
//	char padding2[0x0C]; // 0x14 -> 0x1F
//	char** fullPath; // 0x20, pointer to the resource path
//	char padding3[0x28];
//	char** error; // 0x50, error string ptr
//	bool someBool; //0x58
//};
//
//static_assert(offsetof(ResourceReaderHandle, status) == 0x10, "status offset mismatch");
//static_assert(offsetof(ResourceReaderHandle, fullPath) == 0x20, "fullPath offset mismatch");
//static_assert(offsetof(ResourceReaderHandle, error) == 0x50, "errorString offset mismatch");
//static_assert(offsetof(ResourceReaderHandle, someBool) == 0x58, "someBool offset mismatch");
