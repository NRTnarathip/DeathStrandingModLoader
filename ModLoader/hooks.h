#pragma once

struct ResourceList;
struct ResourceReaderHandle;
struct MyPakFileInfo;

unsigned __int64 HK_My_ResourceReadBuffer(
	ResourceReaderHandle* reader, unsigned char* buffer,
	unsigned __int64 readOffset, unsigned __int64 readLength);

typedef int (*AddResourceIndex_t)(ResourceList* resListPtr, int index, MyPakFileInfo* resPtr);
extern AddResourceIndex_t fpMy_AddResourceIndex;

int My_AddResourcePatch(int* resourceCounterPtr, MyPakFileInfo* header);

int My_AddResourceIndex(ResourceList* resourceCounterPtr, int resourceIndex, MyPakFileInfo* resPtr);

typedef __int64* (*My_GetBuildDateID_t)();
extern My_GetBuildDateID_t fpMy_GetBuildDateID;
__int64* Hook_GetBuildDateID();


void SetupHooksDebug();

