#include <windows.h>
#include <shlobj.h> 
#include <iostream>
#include <vector>

#include <iostream>
std::string GetExecutableDir() {
	char path[MAX_PATH];
	GetModuleFileNameA(NULL, path, MAX_PATH);

	std::string exePath(path);
	size_t pos = exePath.find_last_of("\\/");
	if (pos != std::string::npos)
		return exePath.substr(0, pos);
	else
		return "."; // fallback
}

std::wstring ConvertToWString(const char* str) {
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
	std::wstring wstr(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, str, -1, &wstr[0], size_needed);
	wstr.pop_back();
	return wstr;
}
int main()
{
	char systemPath[MAX_PATH];
	GetSystemDirectoryA(systemPath, MAX_PATH);

	// สร้าง path เต็มของ d3d12.dll
	std::vector<const char*> files = {
		"d3d12.dll", "d3d12core.dll",
		"d3d11.dll",
		"d3d10core.dll",
		"d3d10_1.dll",
		"d3d10.dll",
		"d3d9.dll",
		"d3d8.dll",
		"dxgi.dll",
	};

	auto exeDir = GetExecutableDir();
	for (const auto& filename : files) {
		std::string src = std::string(systemPath) + "\\" + filename;
		std::string dst = exeDir + "\\" + filename;

		std::cout << "Copying " << src << " -> " << dst << "\n";
		if (CopyFileA(src.c_str(), dst.c_str(), FALSE)) {
			printf("done pull file %s\n", filename);
		}
		else {
			printf("fail pulling file %s\n", filename);
		}

	}
	system("pause");
}

