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
