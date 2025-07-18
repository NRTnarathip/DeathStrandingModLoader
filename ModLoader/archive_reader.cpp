#include "archive_reader.h"

#include <smmintrin.h>
#include "MurmurHash3.h"
#include "utils.h"

int m_readOffset = 0;
void ReadBuffer(ResourceReaderHandle* reader, void* buffer, size_t size) {
	fpResourceReadBuffer(reader, (byte*)buffer, m_readOffset, size);
	m_readOffset += size;
}

void Seek(int newOffset) {
	m_readOffset = newOffset;
}

ArchiveReader::ArchiveReader() {
	log("ArchiveReader constructor called.");
	header = {};

	log("ArchiveReader initialized with default values.");
}

void ArchiveReader::readArchive(ResourceReaderHandle* reader) {
	log("fullPath: %s", ((MyString*)reader->fullPath)->str);

	Seek(0);
	ReadBuffer(reader, &header, sizeof(ArchiveBinHeader));

	log("header.magic: %s", GetHexString(header.magic));
	log("header.key: %s", GetHexString(header.key));

	// process header
	isEncrypted = (header.magic == 0x21304050);
	if (isEncrypted) {
		char* headerPtr = (char*)&header;
		decode128bit(header.key, header.key + 1, headerPtr + 8);
	}
	else {
		log("No decryption needed.");
	}

	log("header.fileSize: %llu", header.fileSize);
	log("header.dataSize: %llu", header.dataSize);
	log("header.fileTableCount: %llu", header.fileTableCount);
	log("header.chunkTableCount: %u", header.chunkTableCount);
	log("header.maxChunkSize: %u", header.maxChunkSize);

	// process file table
	for (size_t i = 0; i < header.fileTableCount; ++i) {
		BinFileEntry entry = {};
		ReadBuffer(reader, &entry, sizeof(BinFileEntry));

		if (isEncrypted) {
			auto saveKey1 = entry.key1;
			auto saveKey2 = entry.key2;
			decode128bit(saveKey1, saveKey2, &entry);
			entry.key1 = saveKey1;
			entry.key2 = saveKey2;
		}

		fileTableList.push_back(entry);
	}

	log("try process chunk entries ...");
	for (int i = 0; i < header.chunkTableCount; i++) {

		BinChunkEntry chunkEntry;
		ReadBuffer(reader, &chunkEntry, sizeof(BinChunkEntry));
		if (isEncrypted) {
			auto saveKey = chunkEntry.key;
			auto saveKey2 = chunkEntry.key2;
			decode128bit(saveKey, saveKey2, &chunkEntry);
			chunkEntry.key = saveKey;
			chunkEntry.key2 = saveKey2;
		}

		chunkEntryList.push_back(chunkEntry);
	}
}

void xor128bit(byte* data, byte* key) {
	for (size_t i = 0; i < 16; ++i) {
		data[i] ^= key[i];
	}
}

void ArchiveReader::decode128bit(int keyA, int keyB, void* dataInOut) {
	//log("Decoding...");
	//log("keyA: %s", GetHexString(keyA));
	//log("keyB: %s", GetHexString(keyB));
	//log("dataInOut: %p", dataInOut);

	const int Length = 16; // 128 bits = 16 bytes
	const int Seed = 42;
	byte keyBytesInput[Length] = {
		0x00, 0x00, 0x00, 0x00, 0x62, 0xAB, 0x1C, 0xF4,
		0x1C, 0x81, 0x76, 0xF3, 0x3E, 0x9E, 0xA8, 0xD2
	};
	byte keyBytesResult[Length] = {};

	*reinterpret_cast<uint32_t*>(keyBytesInput) = keyA;
	MurmurHash3_x64_128(&keyBytesInput[0], Length, Seed, &keyBytesResult[0]);
	xor128bit((byte*)dataInOut, &keyBytesResult[0]);

	*reinterpret_cast<uint32_t*>(keyBytesInput) = keyB;
	MurmurHash3_x64_128(&keyBytesInput[0], Length, Seed, &keyBytesResult[0]);
	xor128bit((byte*)dataInOut + 16, &keyBytesResult[0]);

	//log("Decode success!");
}

