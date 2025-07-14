#pragma once

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

struct ResourceManager
{
	char padding1[0x30];
	int resourceTotal; // 0x30
	char padding2[0x4];
	ResourceHeader** resourceListPtrPtr; // 0x38
	int resourcePatchTotal; // 0x40
};

struct ArchiveHeader {
	int index; //0x0
	char padding1[4];
	char* name; //0x8
	char padding3[0x8];
	bool isEncrypted; //0x18
	char padding4[7];
	int p3;
	int p4;
	int* indexPtr;
};


#define FIELD(type, name, offset, prev) \
    char _pad_##name[offset - prev]; \
    type name

struct ResourceReaderHandle {
	LONGLONG someValue; //0x0
	FIELD(int, status, 0x10, 0x08);
	FIELD(char*, entryPath, 0x20, 0x14);
	char** fullPath;
	FIELD(char**, errorString, 0x50, 0x30);
	bool someBool1;
};

ASSERT_OFFSET(ResourceReaderHandle, status, 0x10);
ASSERT_OFFSET(ResourceReaderHandle, entryPath, 0x20);
ASSERT_OFFSET(ResourceReaderHandle, fullPath, 0x28);
ASSERT_OFFSET(ResourceReaderHandle, errorString, 0x50);
ASSERT_OFFSET(ResourceReaderHandle, someBool1, 0x58);
