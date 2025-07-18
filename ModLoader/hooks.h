#pragma once

struct ResourceReaderHandle;

unsigned __int64 Hook_ResourceReadBuffer(
	ResourceReaderHandle* reader, unsigned char* buffer,
	unsigned __int64 readOffset, unsigned __int64 readLength);

void SetupHooks();
