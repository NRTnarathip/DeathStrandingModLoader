#pragma once
#include <windows.h>
#include <cstdint>	
#include <string>
#include <vector>
#include <d3dx12.h>
#include "MurmurHash3.h"
#include "LoaderConfig.h"
#include "Logger.h"
#include <chrono>

struct ResourceReaderHandle;

bool DisableHook(LPVOID targetFunc);
bool HookFuncAddr(void* targetFunc, void* detour, void* ppBackupFunc);
bool HookFuncRva(uintptr_t funcRva, void* detour, void* ppBackupFunc);
bool HookFuncVTable(void* obj, int index, void* detour, void* ppBackupFunc);
bool HookFuncModule(const char* moduleName, uintptr_t funvRva, LPVOID detour, void* backup);

bool HookFuncModule(const char* moduleName, const char* funcName, LPVOID detour, void* backup);

bool IsWineEnvironment();

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


bool PatchBytesRva(uintptr_t start, void* bytes, int size);
bool PatchBytesRva(uintptr_t startRva, std::vector<uint8_t> bytes);
bool PatchBytesRva(uintptr_t targetRva, uint32_t val);
bool PatchNopStartEndRva(uintptr_t start, uintptr_t end);

const char* GetModuleNameFromAddress(void* addr);

bool FileExists(const std::string& filename);

const char* ToHex(uintptr_t val, int width = 8);

const char* ToHex(void* ptr, int length);

std::string GetPakFileHashFromName(const std::string& name);

void AddStringToArray(void* arrayPtr, const char* newStr);

extern void* GetAddressFromRva(int fileOffset);
extern void* GetAddrFromRva(uintptr_t rva);

typedef ULONGLONG* (*MurmurHash3_t)(void* hash, void* data, ULONGLONG length);
extern MurmurHash3_t fpMurmurHash3;

typedef ULONGLONG(*ResourceReadBuffer_t)(
	ResourceReaderHandle* reader, byte* buffer,
	ULONGLONG readOffset, ULONGLONG readLength);
extern ResourceReadBuffer_t backup_ResourceReadBuffer;

typedef bool (*OpenResourceDevice_t)(ResourceReaderHandle* handleInfo,
	LONGLONG* resourcePath, UINT param_flags,
	UINT32 param_4, UINT32 param_5, int param_6);
extern OpenResourceDevice_t fpOpenResourceDevice;


class Stopwatch {
public:
	// เริ่มจับเวลา
	void start() {
		m_start = std::chrono::high_resolution_clock::now();
		m_running = true;
	}

	// หยุดจับเวลา
	void stop() {
		m_end = std::chrono::high_resolution_clock::now();
		m_running = false;
	}

	// เวลาที่ใช้ (ms, double)
	double elapsedMilliseconds() const {
		if (m_running) {
			auto now = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double, std::milli> elapsed = now - m_start;
			return elapsed.count();
		}
		else {
			std::chrono::duration<double, std::milli> elapsed = m_end - m_start;
			return elapsed.count();
		}
	}

	// reset ค่า
	void reset() {
		m_running = false;
	}

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> m_start;
	std::chrono::time_point<std::chrono::high_resolution_clock> m_end;
	bool m_running = false;
};


// code from
// https://github.com/Jayveer/Decima-Explorer/blob/f22ef4cc0696872c412a10ee7c6e36fba5ad1bdc/decima/common/util.h#L10
const uint8_t seed = 42;
inline uint64_t GetFileCoreHash(const std::string& filename) {
	uint64_t hash;
	uint8_t byte[16];
	MurmurHash3_x64_128(filename.c_str(), filename.size() + 1, seed, &byte);
	memcpy(&hash, byte, 8);
	return hash;
}

struct ResourceManager;
ResourceManager* GetResourceManager();

uintptr_t AddrToRva(const void* addr);
void* GetFuncRva(uintptr_t rva);

