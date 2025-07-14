#pragma once
#include <set>
#include <windows.h>
#include <dbghelp.h>
#include <iostream>

#pragma comment(lib, "dbghelp.lib")

struct ArchiveHeader {
	int index;
	byte padding1[4];
	int p1;
	byte padding2[4];
	int p2;
	byte padding3[4];
	bool isEncrypted;
	byte padding4[7];
	int p3;
	int p4;
	int* indexPtr;
};

struct ResourceReaderHandle {
	LONGLONG someValue; //0x0
	char padding1[0x8];
	int status; //0x10
	char padding2[0x0C];
	char* entryPath; // 0x20
	char** fullPathPtrPtr; // 0x28
	char padding3[0x20];
	char** errorString; // 0x50, error string ptr
};

static_assert(offsetof(ResourceReaderHandle, entryPath) == 0x20, "entryPath offset mismatch");
static_assert(offsetof(ResourceReaderHandle, fullPathPtrPtr) == 0x28, "fullPath offset mismatch");
static_assert(offsetof(ResourceReaderHandle, errorString) == 0x50, "errorString offset mismatch");

