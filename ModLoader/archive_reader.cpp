#include "archive_reader.h"

#include <smmintrin.h>
#include "MurmurHash3.h"
#include "utils.h"

ArchiveReader::ArchiveReader() {
	log("ArchiveReader constructor called.");
	header = {};

	log("ArchiveReader initialized with default values.");
}

void ArchiveReader::readArchive(ResourceReaderHandle* reader) {
	log("fullPath: %s", ((MyString*)reader->fullPath)->str);
	// Read the header
	byte* headerBufferPtr = nullptr;
	fpResourceReadBuffer(reader, headerBufferPtr, 0, sizeof(ArchiveBinHeader));
	memcpy(&header, headerBufferPtr, sizeof(ArchiveBinHeader));

	log("header.magic: %s", GetHexString(header.magic));
	log("header.key: %s", GetHexString(header.key));

	//  check decode or not
	if (header.magic == 0x21304050) {
		decode128(header.key, header.key + 1, (byte*)&header + 8);
	}
	else {
		log("No decryption needed.");
	}


	log("header.fileSize: %llu", header.fileSize);
	log("header.dataSize: %llu", header.dataSize);
	log("header.fileTableCount: %llu", header.fileTableCount);
	log("header.chunkTableCount: %u", header.chunkTableCount);
	log("header.maxChunkSize: %u", header.maxChunkSize);
}

void xor128(byte* data, byte* key, size_t length) {
	for (size_t i = 0; i < length; ++i) {
		data[i] ^= key[i];
	}
}

void ArchiveReader::decode128(int keyA, int keyB, void* dataInOut) {
	log("Decoding...");
	log("keyA: %s", GetHexString(keyA));
	log("keyB: %s", GetHexString(keyB));
	log("dataInOut: %p", dataInOut);

	const int Length = 16; // 128 bits = 16 bytes
	const int Seed = 42;
	byte keyBytesInput[16] = {
		0x00, 0x00, 0x00, 0x00, 0x62, 0xAB, 0x1C, 0xF4,
		0x1C, 0x81, 0x76, 0xF3, 0x3E, 0x9E, 0xA8, 0xD2
	};
	byte keyBytesResult[16] = {};
	// key A
	*reinterpret_cast<uint32_t*>(keyBytesInput) = keyA;
	MurmurHash3_x64_128(&keyBytesInput, Length, Seed, &keyBytesResult);
	xor128((byte*)dataInOut, &keyBytesResult[0], Length);

	// key B
	*reinterpret_cast<uint32_t*>(keyBytesInput) = keyB;
	MurmurHash3_x64_128(&keyBytesInput, Length, Seed, &keyBytesResult);
	xor128((byte*)dataInOut, &keyBytesResult[0], Length);

	log("Decode success!");
}
