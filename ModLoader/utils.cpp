#include "utils.h"
#include <Windows.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")
#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstdint>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdarg>
#include <sstream>
#include <map>
#include <string>
#include <tchar.h>
#include <cstdio>
#include <vector>

#include "MinHook.h"
#include "types.h"

std::ofstream m_logFile;
bool m_isEnableLogFile = false;
bool m_isEnableLogConsole = false;
bool m_isEnableLogThreadID = true;

void log(const char* format, ...)
{
	if (m_isEnableLogConsole == false
		&& m_isEnableLogFile == false)
		return;

	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	auto now = std::chrono::system_clock::now();
	auto in_time = std::chrono::system_clock::to_time_t(now);
	DWORD tid = GetCurrentThreadId();

	std::stringstream sstream;
	sstream << "[" << std::put_time(std::localtime(&in_time), "%T") << "]";
	if (m_isEnableLogThreadID)
		sstream << " [TID:" << tid << "]";

	sstream << " " << buffer << std::endl;

	if (m_isEnableLogConsole)
		std::cout << sstream.str();

	if (m_isEnableLogFile) {
		m_logFile << sstream.str();
		m_logFile.flush();
	}

}

std::string stringEmptyValue;
std::string GetEnvVar(const char* name) {
	auto var = std::getenv(name);
	return var ? std::string(var) : stringEmptyValue;
}

void SetupLogger() {

	// init env ar

	// default enable
	m_isEnableLogConsole = GetEnvVar("DSMOD_LOG_CONSOLE") == "0" ? false : true;
	m_isEnableLogFile = GetEnvVar("DSMOD_LOG_FILE") == "1";

	// ready
	if (m_isEnableLogConsole == false)
		return;

	// allow logger
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	freopen("CONIN$", "r", stdin);

	if (m_isEnableLogFile) {
		m_logFile.open("mod_log.txt", std::ios::out | std::ios::trunc);
	}

	// ready logger
	log("done setup logger");
}

bool DisableHook(LPVOID targetFunc) {
	if (MH_DisableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to disable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	return true;
}

bool HookFuncAddr(LPVOID targetFunc, LPVOID detour, LPVOID* originalBackup) {
	if (MH_CreateHook(targetFunc, detour, originalBackup) != MH_OK) {
		MessageBoxA(NULL, "Failed to create hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	if (MH_EnableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to enable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	log("hooked function: %p", targetFunc);
}

bool HookFuncAddr(LPVOID targetFunc, LPVOID detour, void* originalBackup) {
	return HookFuncAddr(targetFunc, detour, reinterpret_cast<LPVOID*>(originalBackup));
}

uintptr_t g_imageBase;
void* GetFuncAddr(uintptr_t rva) {
	if (g_imageBase == 0) {
		g_imageBase = (uintptr_t)GetModuleHandleA(NULL);
	}

	return (void*)(g_imageBase + rva);
}
ResourceManager* g_resourceManager = nullptr;
ResourceManager* GetResourceManager()
{
	if (g_resourceManager == nullptr)
		g_resourceManager = *(ResourceManager**)GetFuncAddr(0x4f6cf60);
	return g_resourceManager;
}

uintptr_t ConvertAddressToRva(void* addr) {
	return (uintptr_t)addr - g_imageBase;
}

void* GetAddressFromRva(int rva) {
	return (void*)(g_imageBase + rva);
}
bool HookFuncRva(uintptr_t funcRva, LPVOID detour, void* backup) {
	return HookFuncAddr(GetFuncAddr(funcRva), detour, reinterpret_cast<LPVOID*>(backup));
}

bool HookFuncModule(const char* moduleName, uintptr_t funvRva, LPVOID detour, void* backup) {
	auto hModule = GetModuleHandleA(moduleName);
	return HookFuncAddr((void*)(hModule + funvRva), detour, reinterpret_cast<LPVOID*>(backup));
}
bool HookFuncModule(const char* moduleName, const char* funcName, LPVOID detour, void* backup) {
	auto hModule = GetModuleHandleA(moduleName);
	if (hModule == NULL) {
		log("failed not found module: %s", moduleName);

		return false;
	}

	auto funcAddr = GetProcAddress(hModule, funcName);
	if (funcAddr == NULL) {
		log("failed not found export func: %s", funcName);
		return false;
	}
	return HookFuncAddr(funcAddr, detour, reinterpret_cast<LPVOID*>(backup));
}

MurmurHash3_t  fpMurmurHash3 = (MurmurHash3_t)GetFuncAddr(0x18fe890);
ResourceReadBuffer_t  backup_ResourceReadBuffer = (ResourceReadBuffer_t)GetFuncAddr(0x1929a50);

bool IsWineEnvironment() {
	HKEY hKey;
	if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Wine", 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
		RegCloseKey(hKey);
		return true;
	}
	return false;
}


void SetupConsole()
{
}
DWORD g_mainThreadId = GetCurrentThreadId();
bool IsMainThread() {
	return GetCurrentThreadId() == g_mainThreadId;
}

void  WaitForDebug() {
	log("waiting for debugger to attach...");
	while (!IsDebuggerPresent())
	{
		Sleep(100);
	}
	log("some debug attached");
}


void PrintStackTrace()
{
	void* stack[64];
	HANDLE process = GetCurrentProcess();
	SymInitialize(process, nullptr, TRUE);
	USHORT frames = CaptureStackBackTrace(0, 64, stack, nullptr);

	for (USHORT i = 0; i < frames; ++i)
	{
		DWORD64 addr = (DWORD64)(stack[i]);
		auto modName = GetModuleNameFromAddress((void*)addr);
		auto modBase = GetModuleHandleA(modName);
		auto rva = addr - (DWORD64)modBase;
		log("[%d] %s + %x", i, modName, rva);
	}
}

bool WriteMovRaxInstruction(void* addr, uintptr_t value)
{
	DWORD oldProtect;
	const size_t instrSize = 10; // 2 (opcode) + 8 (immediate64)

	// เปลี่ยน memory protection ให้เขียนได้
	if (!VirtualProtect(addr, instrSize, PAGE_EXECUTE_READWRITE, &oldProtect))
	{
		std::cerr << "VirtualProtect failed: " << GetLastError() << std::endl;
		return false;
	}

	uint8_t* p = (uint8_t*)addr;
	p[0] = 0x48;      // REX.W prefix
	p[1] = 0xB8;      // mov rax, imm64 opcode

	// เขียน immediate64 ตามหลัง opcode
	*(uintptr_t*)(p + 2) = value;

	// คืนค่า protection เดิม
	DWORD tmp;
	VirtualProtect(addr, instrSize, oldProtect, &tmp);

	return true;
}
std::string GetCurrentExePath() {
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	return std::string(buffer);
}
std::string GetCurrentExeDir() {
	std::string path = GetCurrentExePath();
	size_t pos = path.find_last_of("\\/");
	return (pos != std::string::npos) ? path.substr(0, pos) : path;
}
bool PatchBytesRva(uintptr_t targetRva, void* bytes, int size) {
	DWORD oldProtect;
	auto addr = GetAddressFromRva(targetRva);

	log("before patch: %llx, %s, size: %d", targetRva, ToHex((void*)addr, size), size);
	if (!VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, &oldProtect))
		return false;

	memcpy(addr, bytes, size);
	auto hProc = GetCurrentProcess();
	size_t writeBytes;
	WriteProcessMemory(hProc, addr, bytes, size, &writeBytes);
	FlushInstructionCache(hProc, addr, size);
	VirtualProtect(addr, size, oldProtect, &oldProtect);
	log("after patch: %llx, %s, size: %d", targetRva, ToHex((void*)addr, size), size);
	return true;
}

bool PatchBytesRva(uintptr_t rva, std::vector<uint8_t> bytes) {
	return PatchBytesRva(rva, bytes.data(), bytes.size());
}

bool PatchBytesRva(uintptr_t targetRva, uint32_t val) {
	return PatchBytesRva(targetRva, &val, sizeof(uint32_t));
}

bool PatchNopStartEndRva(uintptr_t rva, uintptr_t endRva) {
	if (rva >= endRva)
		return false;

	auto size = endRva - rva;
	std::vector<char> bytes(size, static_cast<char>(0x90));
	if (PatchBytesRva(rva, bytes.data(), size)) {
		log("filled nop start %x --> %x", rva, endRva);
	}
	else {
		log("Error can't fill nop");
	}
}



const char* GetModuleNameFromAddress(void* addr) {
	MEMORY_BASIC_INFORMATION mbi;
	char moduleName[MAX_PATH];
	if (VirtualQuery(addr, &mbi, sizeof(mbi))) {
		HMODULE hModule = (HMODULE)mbi.AllocationBase;
		char moduleName[MAX_PATH];
		if (GetModuleFileNameA(hModule, moduleName, MAX_PATH)) {
			const char* lastSlash = strrchr(moduleName, '\\');
			return lastSlash + 1;
		}
	}

	return moduleName;
}

bool FileExists(const std::string& filename) {
	std::ifstream file(filename);
	return file.good();
}

std::stringstream toHexStream;
const char* ToHex(uintptr_t val, int width) {
	toHexStream.str("");
	toHexStream.clear();
	toHexStream << std::hex << std::setw(width) << std::setfill('0') << val;
	return toHexStream.str().c_str();
}

std::ostringstream oss;
const char* ToHex(void* ptr, int length) {
	UINT8* bytes = (UINT8*)ptr;
	oss.str("");
	oss.clear();
	for (int i = 0; i < length; i++) {
		oss << std::hex
			<< std::setw(2)
			<< std::setfill('0')
			<< static_cast<int>(bytes[i]);
	}
	static std::string result;
	result = oss.str();
	return result.c_str();
}

GUID BytesToGUID(const unsigned char bytes[16]) {
	GUID guid;
	guid.Data1 = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];
	guid.Data2 = (bytes[4] << 8) | bytes[5];
	guid.Data3 = (bytes[6] << 8) | bytes[7];
	for (int i = 0; i < 8; i++) guid.Data4[i] = bytes[8 + i];
	return guid;
}

const char* GUIDToString(uint8_t* uuid) {
	std::ostringstream oss;
	oss << std::hex << std::setfill('0') << "{";

	// Data1 (4 bytes, little-endian)
	uint32_t data1 = uuid[3] << 24 | uuid[2] << 16 | uuid[1] << 8 | uuid[0];
	oss << std::setw(8) << data1 << "-";

	// Data2 (2 bytes, little-endian)
	uint16_t data2 = uuid[5] << 8 | uuid[4];
	oss << std::setw(4) << data2 << "-";

	// Data3 (2 bytes, little-endian)
	uint16_t data3 = uuid[7] << 8 | uuid[6];
	oss << std::setw(4) << data3 << "-";

	// Data4 (8 bytes, big-endian/direct)
	for (int i = 8; i < 10; ++i) oss << std::setw(2) << (int)uuid[i];
	oss << "-";
	for (int i = 10; i < 16; ++i) oss << std::setw(2) << (int)uuid[i];

	oss << "}";
	return oss.str().c_str();
}

const char* GUIDToString(void* uuid) {
	return GUIDToString((uint8_t*)uuid);
}

void toHexDigits(uint64_t value, uint8_t* dst, size_t offset) {
	for (int i = 0; i < 8; ++i) {
		dst[offset + i] = static_cast<uint8_t>((value >> (i * 8)) & 0xFF); // little endian
	}
}
std::string GetPakFileHashFromName(const std::string& name) {
	const std::vector<uint8_t> src(name.begin(), name.end());
	uint8_t dst[16];
	uint64_t hash[2];
	MurmurHash3_x64_128(src.data(), src.size(), 42, hash);

	toHexDigits(hash[0], dst, 0);
	toHexDigits(hash[1], dst, 8);

	std::stringstream ss;
	for (unsigned char c : dst)
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)c;

	return ss.str();
}
void AddStringToArray(void* itemAddress, const char* newStr) {
	uint32_t* countPtr = (uint32_t*)((char*)itemAddress - 8);
	uint32_t* capacityPtr = (uint32_t*)((char*)itemAddress - 4);
	uint32_t oldCount = *countPtr;
	uint32_t oldCapacity = *capacityPtr;
	char** itemsHeap = *(char***)itemAddress;
	log("try add string, current vector info: %s, count: %u, capacity: %u", newStr, oldCount, oldCapacity);

	uint32_t newCount = oldCapacity + 1;
	char** newArray = (char**)malloc(newCount * 8);
	for (int i = 0; i < oldCount; ++i) {
		newArray[i] = itemsHeap[i];
	}

	log("try malloc");
	size_t len = std::strlen(newStr);
	char* copyStr = (char*)malloc(len + 1);
	std::memcpy(copyStr, newStr, len + 1);
	newArray[oldCount] = copyStr;

	log("added string: %s", newArray[oldCount]);

	//free(itemsHeap);
	//log("free old itemsPtr: %p", itemAddress);

	*(uintptr_t*)itemAddress = (uintptr_t)newArray;
	*countPtr = oldCount + 1;
	*capacityPtr = oldCount + 1;

	log("new vector info: count: %u, capacity: %u", *countPtr, *capacityPtr);
}
