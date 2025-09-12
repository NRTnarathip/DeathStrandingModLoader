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
#include "GameTypes.h" 
#include "Logger.h"
#include <set>

uintptr_t GetImageBase() {
	static uintptr_t g_imageBase = (uintptr_t)GetModuleHandleA(NULL);
	if (g_imageBase == NULL)
		g_imageBase = (uintptr_t)GetModuleHandleA(NULL);
	return g_imageBase;
}

bool DisableHook(LPVOID targetFunc) {
	if (MH_DisableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to disable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	return true;
}

// 
struct HookInfo {
	void* target;
	void* detour;
	void* backup;
};
std::unordered_map<void*, HookInfo*> g_hookMap;
bool HookFuncAddr(void* targetFunc, void* detour, void* ppBackupFunc) {
	auto it = g_hookMap.find(targetFunc);
	// already hooked at target func
	if (it != g_hookMap.end()) {
		auto hook = it->second;
		if (detour != hook->detour) {
			MessageBoxA(NULL, "Failed to hook. different detour at same target func", "Error", MB_OK | MB_ICONERROR);
			return false;
		}

		*(void**)ppBackupFunc = hook->backup;
		//log("already hook: %p", targetFunc);
		//log("detour: %p", hook->detour);
		//log("backup: %p", hook->backup);
		return true;
	}

	if (MH_CreateHook(targetFunc, detour, (void**)ppBackupFunc) != MH_OK) {
		MessageBoxA(NULL, "Failed to create hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	if (MH_EnableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to enable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	auto hook = new HookInfo();
	hook->target = targetFunc;
	hook->backup = *(void**)ppBackupFunc;
	hook->detour = detour;
	g_hookMap[targetFunc] = hook;
	//log("hooked func rva: 0x%llx", (uintptr_t)AddrToRva(targetFunc));
	//log("  detour: %p", hook->detour);
	//log("  backup: %p", hook->backup);
	return true;
}
void* GetAddressFromRva(int rva) {
	return (void*)(GetImageBase() + rva);
}
bool HookFuncRva(uintptr_t funcRva, void* detour, void* ppBackup) {
	return HookFuncAddr(GetAddressFromRva(funcRva), detour, ppBackup);
}
bool HookFuncVTable(void* obj, int index, LPVOID detour, void* ppBackup) {
	void** vtable = *(void***)obj;
	return HookFuncAddr(vtable[index], detour, ppBackup);
}

void* GetFuncAddr(uintptr_t rva) {
	return (void*)(GetImageBase() + rva);
}
ResourceManager* g_resourceManager = nullptr;
ResourceManager* GetResourceManager()
{
	if (g_resourceManager == nullptr)
		g_resourceManager = *(ResourceManager**)GetFuncAddr(0x4f6cf60);
	return g_resourceManager;
}

uintptr_t AddrToRva(const void* addr) {
	return (uintptr_t)addr - GetImageBase();
}

void* GetFuncRva(uintptr_t rva)
{
	return (void*)(GetImageBase() + rva);
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
		uintptr_t addr = (uintptr_t)stack[i] - 1; // prev instruction
		log("[%d] rva: %llx, addr: %llx", i, AddrToRva((void*)addr), addr);
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

	//log("before patch: %llx, %s, size: %d", targetRva, ToHex((void*)addr, size), size);
	if (!VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, &oldProtect))
		return false;

	memcpy(addr, bytes, size);
	auto hProc = GetCurrentProcess();
	size_t writeBytes;
	WriteProcessMemory(hProc, addr, bytes, size, &writeBytes);
	FlushInstructionCache(hProc, addr, size);
	VirtualProtect(addr, size, oldProtect, &oldProtect);
	//log("after patch: %llx, %s, size: %d", targetRva, ToHex((void*)addr, size), size);
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
