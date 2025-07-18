#pragma once
#include <Windows.h>
#include <cstdint>
#include "types.h"

// size: 0x28 bytes
struct ArchiveBinHeader {
	uint32_t magic; // 0x21304050: encrypt | 0x20304050: not encrypt
	uint32_t key;
	uint64_t fileSize;
	uint64_t dataSize;
	uint64_t fileTableCount;
	uint32_t chunkTableCount;
	uint32_t maxChunkSize; // maybe value 0x4000 | 262,144 
};

// size: 0x20 bytes
typedef struct BinFileEntry {
	uint32_t entryNum;
	uint32_t key;
	uint64_t hash;
	uint64_t offset;
	uint32_t size;
	uint32_t key2;
} BinFileEntry;

class ArchiveReader {
public:
	ArchiveBinHeader header;

	ArchiveReader();

	void readArchive(ResourceReaderHandle* reader);
	void decode128(int keyA, int keyB, void* data);
};

