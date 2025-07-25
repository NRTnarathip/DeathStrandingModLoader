#pragma once
#include <Windows.h>
#include <cstdint>
#include "types.h"
#include <vector>

// code src from https://github.com/Jayveer/Decima-Explorer

// size: 0x28 bytes
struct ArchiveBinHeader {
	uint32_t magic; // 0x0,  0x21304050: encrypt | 0x20304050: not encrypt
	uint32_t key;// 0x4 - 0x7
	uint64_t fileSize;//0x8 - 0xF
	uint64_t dataSize; //0x10 - 0x17
	uint64_t fileTableCount;// 0x18 - 0x1F
	uint32_t chunkTableCount; // 0x20 - 0x23
	uint32_t maxChunkSize; // 0x24 - 0x27 maybe value 0x4000 | 262,144 
};

// size: 0x20 bytes
typedef struct ArchiveFileEntry {
	uint32_t entryNum;
	uint32_t key1;
	uint64_t hash;
	uint64_t offset;
	uint32_t size;
	uint32_t key2;
} BinFileEntry;

// 256L bit == 32L bytes == 0x20 bytes
typedef struct ArchiveChunkEntry {
	uint64_t uncompressedOffset;
	uint32_t uncompressedSize;
	uint32_t key;
	uint64_t compressedOffset;
	uint32_t compressedSize;
	uint32_t key2;
} BinChunkEntry;

class ArchiveReader {
public:
	ArchiveBinHeader header;
	std::vector<ArchiveFileEntry> fileTableList;
	std::vector<ArchiveChunkEntry> chunkEntryList;

	bool isEncrypted = false;

	ArchiveReader();

	void readArchive(ResourceReaderHandle* reader);
	void decode128bit(int keyA, int keyB, void* data);
	void LogInfo();
};

