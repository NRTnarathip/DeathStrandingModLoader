#pragma once
#include <immintrin.h> // สำหรับ AVX, AVX2, SSE
#include <DbgHelp.h>
#pragma comment(lib, "Dbghelp.lib")

std::ofstream m_logFile("log.txt", std::ios::trunc);

void Log(const char* message)
{
	auto now = std::chrono::system_clock::now();
	auto in_time = std::chrono::system_clock::to_time_t(now);
	m_logFile << "[" << std::put_time(std::localtime(&in_time), "%F %T") << "] "
		<< message << std::endl;
}

void print(const char* format, ...)
{
	// Format string
	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	std::cout << buffer << std::endl;
	Log(buffer);
}


#define BUFSIZE 512
std::string GetFileNameFromHandle_Internal(HANDLE hFile)
{
	BOOL bSuccess = FALSE;
	TCHAR pszFilename[MAX_PATH + 1];
	HANDLE hFileMap;

	// Get the file size.
	DWORD dwFileSizeHi = 0;
	DWORD dwFileSizeLo = GetFileSize(hFile, &dwFileSizeHi);

	if (dwFileSizeLo == 0 && dwFileSizeHi == 0)
	{
		return "";
	}

	// Create a file mapping object.
	hFileMap = CreateFileMapping(hFile,
		NULL,
		PAGE_READONLY,
		0,
		1,
		NULL);

	if (hFileMap)
	{
		// Create a file mapping to get the file name.
		void* pMem = MapViewOfFile(hFileMap, FILE_MAP_READ, 0, 0, 1);

		if (pMem)
		{
			if (GetMappedFileName(GetCurrentProcess(),
				pMem,
				pszFilename,
				MAX_PATH))
			{

				// Translate path with device name to drive letters.
				TCHAR szTemp[BUFSIZE];
				szTemp[0] = '\0';

				if (GetLogicalDriveStrings(BUFSIZE - 1, szTemp))
				{
					TCHAR szName[MAX_PATH];
					TCHAR szDrive[3] = TEXT(" :");
					BOOL bFound = FALSE;
					TCHAR* p = szTemp;

					do
					{
						// Copy the drive letter to the template string
						*szDrive = *p;

						// Look up each device name
						if (QueryDosDevice(szDrive, szName, MAX_PATH))
						{
							size_t uNameLen = _tcslen(szName);

							if (uNameLen < MAX_PATH)
							{
								bFound = _tcsnicmp(pszFilename, szName, uNameLen) == 0
									&& *(pszFilename + uNameLen) == _T('\\');

								if (bFound)
								{
									// Reconstruct pszFilename using szTempFile
									// Replace device path with DOS path
									TCHAR szTempFile[MAX_PATH];
									StringCchPrintf(szTempFile,
										MAX_PATH,
										TEXT("%s%s"),
										szDrive,
										pszFilename + uNameLen);
									StringCchCopyN(pszFilename, MAX_PATH + 1, szTempFile, _tcslen(szTempFile));
								}
							}
						}

						// Go to the next NULL character.
						while (*p++);
					} while (!bFound && *p); // end of string
				}
			}
			bSuccess = TRUE;
			UnmapViewOfFile(pMem);
		}

		CloseHandle(hFileMap);
	}
	std::wstring fileNameWString(&pszFilename[0]);
	return std::string(fileNameWString.begin(), fileNameWString.end());
}

std::map<HANDLE, std::string> handleFileNameMap;
std::string GetFileNameFromHandle(HANDLE hFile)
{
	return GetFileNameFromHandle_Internal(hFile);

	if (handleFileNameMap.find(hFile) != handleFileNameMap.end()) {
		return handleFileNameMap[hFile];
	}

	// added cache
	std::string fileName = GetFileNameFromHandle_Internal(hFile);
	handleFileNameMap[hFile] = fileName;
	return fileName;
}

std::string MagicToString(const BYTE* magic, size_t length = 4) {
	std::ostringstream oss;
	for (size_t i = 0; i < length; ++i) {
		if (i > 0) oss << ' '; // เว้นช่องว่างระหว่าง byte
		oss << std::uppercase << std::hex << std::setw(2) << std::setfill('0')
			<< static_cast<int>(magic[i]);
	}
	return oss.str(); // เช่น "89504E47"
}

LONGLONG GetCurrentPos(HANDLE hFile) {
	LARGE_INTEGER index = {};
	SetFilePointerEx(hFile, index, &index, FILE_CURRENT);
	return index.QuadPart;
}
uintptr_t imageBase = -1;
void* GetFuncAddr(uintptr_t rva) {
	if (imageBase == -1)
		imageBase = (uintptr_t)GetModuleHandleA(NULL); // ds.exe main exe

	return (void*)(imageBase + rva);
}
bool HookFunc(LPVOID targetFunc, LPVOID detour, LPVOID* originalBackup) {
	if (MH_CreateHook(targetFunc, detour, originalBackup) != MH_OK) {
		MessageBoxA(NULL, "Failed to create hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}

	if (MH_EnableHook(targetFunc) != MH_OK)
	{
		MessageBoxA(NULL, "Failed to enable hook", "Error", MB_OK | MB_ICONERROR);
		return false;
	}
	print("hooked function: %p", targetFunc);

}
bool HookFunc(uintptr_t funcRva, LPVOID detour, LPVOID* originalBackup) {
	return HookFunc(GetFuncAddr(funcRva), detour, originalBackup);
}
bool HookFunc(uintptr_t funcRva, LPVOID detour, void* originalBackup) {
	return HookFunc(GetFuncAddr(funcRva), detour, reinterpret_cast<LPVOID*>(originalBackup));
}


void SetupConsole()
{
	AllocConsole(); // fallback
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	freopen("CONIN$", "r", stdin);
}
DWORD g_mainThreadId = GetCurrentThreadId();
bool IsMainThread() {
	return GetCurrentThreadId() == g_mainThreadId;
}

void  WaitForDebug() {
	print("waiting for debugger to attach...");
	while (!IsDebuggerPresent())
	{
		Sleep(100);
	}
	print("some debug attached");
}

int CustomStringCompare(LONGLONG param_1, char* param_2, int param_3)

{
	char cVar1;
	char cVar2;
	int iVar3;
	LONGLONG lVar4;

	iVar3 = 0;
	if (0 < param_3) {
		lVar4 = param_1 - (LONGLONG)param_2;
		do {
			cVar1 = param_2[lVar4];
			cVar2 = *param_2;
			iVar3 = (int)cVar1 - (int)cVar2;
			if (cVar1 == '\0') {
				return iVar3;
			}
			if (cVar2 == '\0') {
				return iVar3;
			}
			if (iVar3 != 0) {
				if (iVar3 == -0x2d) {
				LAB_141a11e34:
					if (cVar1 != '/') {
					LAB_141a11e39:
						if (cVar1 != '\\') {
							return iVar3;
						}
					}
				}
				else if (iVar3 == -0x20) {
				LAB_141a11e25:
					if ((0x19 < (byte)(cVar1 + 0xbfU)) || (0x19 < (byte)(cVar2 + 0x9fU))) goto LAB_141a11e34;
				}
				else {
					if (iVar3 != 0x20) {
						if (iVar3 != 0x2d) {
							return iVar3;
						}
						goto LAB_141a11e39;
					}
					if ((0x19 < (byte)(cVar1 + 0x9fU)) || (0x19 < (byte)(cVar2 + 0xbfU))) goto LAB_141a11e25;
				}
				iVar3 = 0;
			}
			param_2 = param_2 + 1;
			param_3 = param_3 + -1;
		} while (0 < param_3);
	}
	return iVar3;
}

typedef bool (*AreResourcesIdenticalOrCompatible_t)(ResourceHeader* resourceHeader, const char** resNamePtr);
auto fpAreResourcesIdenticalOrCompatible = (AreResourcesIdenticalOrCompatible_t)GetFuncAddr(0x190b0a0);

bool StringIsSame(LONGLONG* p_left, char** p_right) {
	print("calling AreResourcesIdenticalOrCompatible");

	char* leftString = (char*)p_left;
	char* rightString = *p_right;


	if (leftString == rightString)
		return true;

	auto leftLen = *(int*)(leftString - 8);
	auto rightLen = *(int*)(rightString - 8);

	// check length is same??
	if (*(int*)(leftString - 8) != *(int*)(rightString - 8)) {
		//print("left length != right");
		return false;
	}

	print("try CustomStringCompare....");
	auto reesult = CustomStringCompare((LONGLONG)leftString, rightString, *(int*)(leftString + -8));
	print("CustomStringCompare result: %d", reesult);
	return reesult == 0;
}

char* GetHexString(const uint8_t* data, size_t length) {
	char* hex_str = (char*)malloc(length * 2 + 1);
	if (!hex_str) return NULL;

	for (size_t i = 0; i < length; i++)
		sprintf(&hex_str[i * 2], "%02x", data[i]);

	hex_str[length * 2] = '\0'; // null-terminate
	return hex_str;
}

void M128iToBytes(__m128i dataToHashVector, uint8_t out[16]) {
	// วิธี 1: ใช้ memcpy (ปลอดภัย และง่าย)
	std::memcpy(out, &dataToHashVector, 16);
}

void PrintStackTrace() {
	std::ostringstream oss;
	oss << boost::stacktrace::stacktrace();
	std::string str = oss.str();
	print("%s", str.c_str());
}


void PrintCallerAddress() {
	CONTEXT context = {};
	RtlCaptureContext(&context);

	STACKFRAME64 frame = {};
	frame.AddrPC.Offset = context.Rip;
	frame.AddrPC.Mode = AddrModeFlat;
	frame.AddrFrame.Offset = context.Rbp;
	frame.AddrFrame.Mode = AddrModeFlat;
	frame.AddrStack.Offset = context.Rsp;
	frame.AddrStack.Mode = AddrModeFlat;

	HANDLE process = GetCurrentProcess();
	HANDLE thread = GetCurrentThread();

	SymInitialize(process, NULL, TRUE);

	for (int i = 0; i < 10; i++) {
		if (!StackWalk64(
			IMAGE_FILE_MACHINE_AMD64,
			process,
			thread,
			&frame,
			&context,
			NULL,
			SymFunctionTableAccess64,
			SymGetModuleBase64,
			NULL)) break;

		auto rva = frame.AddrPC.Offset - imageBase;
		print("Frame %d: rva %llx", i, rva);
	}
}

bool IsCalledFromFuncRva(INT64 nextRetAddrRva) {
	CONTEXT context = {};
	RtlCaptureContext(&context);

	STACKFRAME64 frame = {};
	frame.AddrPC.Offset = context.Rip;
	frame.AddrPC.Mode = AddrModeFlat;
	frame.AddrFrame.Offset = context.Rbp;
	frame.AddrFrame.Mode = AddrModeFlat;
	frame.AddrStack.Offset = context.Rsp;
	frame.AddrStack.Mode = AddrModeFlat;

	HANDLE process = GetCurrentProcess();
	HANDLE thread = GetCurrentThread();

	SymInitialize(process, NULL, TRUE);

	// get only at index 1
	for (int i = 0; i < 2; i++) {
		if (!StackWalk64(
			IMAGE_FILE_MACHINE_AMD64,
			process,
			thread,
			&frame,
			&context,
			NULL,
			SymFunctionTableAccess64,
			SymGetModuleBase64,
			NULL)) break;

		auto rva = frame.AddrPC.Offset - imageBase;
		if (rva == nextRetAddrRva) {
			return true;
		}
	}
	return false;
}

void CreateIntFromBytes(char a, char  b, char c, char d, UINT* out) {
	*out = (a) | (b << 8) | (c << 16) | (d << 24);
}

void* GetDataSection(int fileOffset) {
	return (void*)(imageBase + fileOffset);
}
