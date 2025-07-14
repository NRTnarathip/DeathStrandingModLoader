#pragma once
#include "header.h"

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
uintptr_t base = -1;
void* GetFuncAddr(uintptr_t rva) {
	if (base == -1)
		base = (uintptr_t)GetModuleHandleA(NULL); // ds.exe main exe

	return (void*)(base + rva);
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
void PrintCallStack()
{
	const int maxFrames = 62;
	void* stack[maxFrames];
	USHORT frames = CaptureStackBackTrace(0, maxFrames, stack, nullptr);

	HANDLE process = GetCurrentProcess();
	SymInitialize(process, nullptr, TRUE);

	SYMBOL_INFO* symbol = (SYMBOL_INFO*)malloc(sizeof(SYMBOL_INFO) + 256);
	symbol->MaxNameLen = 255;
	symbol->SizeOfStruct = sizeof(SYMBOL_INFO);

	bool mainThread = IsMainThread();
	print("main thread?: %s", mainThread ? "true" : "false");

	for (USHORT i = 0; i < frames; ++i) {
		DWORD64 address = (DWORD64)(stack[i]);

		if (SymFromAddr(process, address, 0, symbol)) {
			print("%d: %s - 0x%llx", i, symbol->Name, (unsigned long long)symbol->Address);
		}
		else {
			print("%d: ??? - 0x%llx", i, address);
		}
	}

	free(symbol);
}


