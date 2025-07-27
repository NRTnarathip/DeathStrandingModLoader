#pragma once
#include <windows.h>
#include <cstdint>	
#include <string>

struct ResourceReaderHandle;

void log2(const char* message);
void log(const char* format, ...);
bool HookFunc(uintptr_t funcRva, LPVOID detour, void* originalBackup);

bool IsWineEnvironment();

void SetupConsole();
bool IsMainThread();
void WaitForDebug();

static const char* GetHexString(const void* data, size_t length) {
	const uint8_t* bytes = static_cast<const uint8_t*>(data);
	// Allocate string: 2 characters per byte + 1 for null terminator
	char* hexStr = static_cast<char*>(malloc(length * 2 + 1));
	if (!hexStr) return nullptr;

	for (size_t i = 0; i < length; ++i)
		std::sprintf(&hexStr[i * 2], "%02X", bytes[i]);

	hexStr[length * 2] = '\0';
	return hexStr;
}


template<typename T>
static const char* GetHexString(T& data) {
	static_assert(std::is_trivially_copyable<T>::value, "GetHexString requires POD/trivial type");
	const uint8_t* bytes = reinterpret_cast<const uint8_t*>(&data);

	std::string hex;
	hex.reserve(sizeof(T) * 2);

	for (size_t i = 0; i < sizeof(T); ++i) {
		char buf[3];
		std::sprintf(buf, "%02X", bytes[i]);  // little endian
		hex += buf;
	}

	return hex.c_str();
}

void PrintStackTrace();

bool WriteMovRaxInstruction(void* addr, uintptr_t value);

std::string GetCurrentExePath();

std::string GetCurrentExeDir();

extern void* GetAddressFromRva(int fileOffset);
extern void* GetFuncAddr(uintptr_t rva);

typedef ULONGLONG* (*MurmurHash3_t)(void* hash, void* data, ULONGLONG length);
extern MurmurHash3_t fpMurmurHash3;

typedef ULONGLONG(*ResourceReadBuffer_t)(
	ResourceReaderHandle* reader, byte* buffer,
	ULONGLONG readOffset, ULONGLONG readLength);
extern ResourceReadBuffer_t fpResourceReadBuffer;

typedef bool (*OpenResourceDevice_t)(ResourceReaderHandle* handleInfo,
	LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6);
extern OpenResourceDevice_t fpOpenResourceDevice;


