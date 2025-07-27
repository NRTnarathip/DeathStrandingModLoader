#pragma once

struct ResourceList;
struct ResourceReaderHandle;
struct ResourceArchiveHeader;

unsigned __int64 Hook_ResourceReadBuffer(
	ResourceReaderHandle* reader, unsigned char* buffer,
	unsigned __int64 readOffset, unsigned __int64 readLength);

typedef int (*AddResourceIndex_t)(ResourceList* resListPtr, int index, ResourceArchiveHeader* resPtr);
extern AddResourceIndex_t fpMy_AddResourceIndex;

int My_AddResourcePatch(int* resourceCounterPtr, ResourceArchiveHeader* header);

int My_AddResourceIndex(ResourceList* resourceCounterPtr, int resourceIndex, ResourceArchiveHeader* resPtr);

typedef __int64* (*My_GetBuildDateID_t)();
extern My_GetBuildDateID_t fpMy_GetBuildDateID;
__int64* Hook_GetBuildDateID();

