#pragma once

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
