#include <iostream>
#include <Windows.h>
#include <cstdarg>
#include <chrono>
#include <iomanip>
#include <filesystem>

namespace fs = std::filesystem;

void log(const char* format, ...)
{
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
	sstream << " " << buffer << std::endl;
	std::cout << sstream.str();
}

const char* dsExe = "ds.exe";

std::string CreateDir(std::string dirPath) {
	if (!fs::exists(dirPath)) {
		fs::create_directories(dirPath);
	}

	return dirPath;
}

std::string CreateDir(std::string dirPath, std::string folderName1) {
	dirPath.append("\\" + folderName1);
	return CreateDir(dirPath);
}
void RemoveAll(std::string dirPath) {
	if (fs::exists(dirPath)) {
		fs::remove_all(dirPath);
	}
}

void DeleteDir(std::string dir) {
	if (fs::exists(dir)) {
		fs::remove(dir);
	}
}

bool StartPrefetchGenerator(std::string gameFolderPath) {
	std::string gameExecutePath = gameFolderPath + "\\" + dsExe;
	if (fs::exists(gameExecutePath) == false) {
		log("not found game ds.exe path: %s", gameExecutePath.c_str());
		return false;
	}
	log("found game ds.exe path: %s", gameExecutePath.c_str());
	std::string gameDataFolderPath = gameFolderPath + "\\data";

	// setup mod loader tools
	const char* ModLoaderDataName = "ModLoaderData";
	std::string modsDir = CreateDir(gameFolderPath, "mods");
	std::string modLoaderDataDir = gameFolderPath + "\\" + ModLoaderDataName;
	fs::copy_file(gameDataFolderPath + "\\oo2core_7_win64.dll",
		modLoaderDataDir + "\\oo2core_7_win64.dll",
		fs::copy_options::overwrite_existing);

	// setup folder core for generate .bin | pak file
	const char* ModLoaderPrefetchFolderName = "ModLoaderPrefetch";
	log("try remove folder new_core_files...");
	RemoveAll(modLoaderDataDir + "\\new_core_files");
	RemoveAll(modsDir + "\\" + ModLoaderPrefetchFolderName);
	auto tempNewCoreFilesFolderPath = CreateDir(modLoaderDataDir, "new_core_files");

	// clone .core files to temp core files
	int foundCoreFileCount = 0;
	for (const auto& modDirEntry : fs::directory_iterator(modsDir)) {
		if (modDirEntry.is_directory() == false) continue;
		auto modEntryPath = modDirEntry.path().string();
		// get other core files
		for (const auto& fileEntry : fs::recursive_directory_iterator(modEntryPath)) {
			if (fileEntry.is_regular_file() == false)
				continue;

			std::string filePath = fileEntry.path().string();
			auto fileName = fileEntry.path().filename().string();
			if (fileName.find(".core") == std::string::npos
				|| fileName == "fullgame.prefetch.core") {
				log("skip file: %s", filePath.c_str());
				continue;
			}

			std::string filePathRelative = filePath.substr(modEntryPath.size() + 1);
			std::string gameCoreFilePath = filePathRelative;
			std::replace(gameCoreFilePath.begin(), gameCoreFilePath.end(), '\\', '/');
			auto dstFilePath = tempNewCoreFilesFolderPath + "\\" + gameCoreFilePath;
			auto dstFolderPath = dstFilePath.substr(0, dstFilePath.size() - fileName.size() - 1);
			CreateDir(dstFolderPath);
			fs::copy_file(filePath, dstFilePath, fs::copy_options::overwrite_existing);
			foundCoreFileCount++;
		}
	}


	// check if mod empty
	if (foundCoreFileCount == 0) {
		log("nothing to do");
		return false;
	}

	// force delete prefetch folder
	log("try remove prefetch...");
	RemoveAll(tempNewCoreFilesFolderPath + "\\prefetch");

	//execute build_prefetch.cmd for prefetch
	log("try rebuild prefetch...");
	const char* build_prefetch_cmd = "build_prefetch.cmd";
	fs::copy_file(
		build_prefetch_cmd,
		modLoaderDataDir + "\\" + build_prefetch_cmd,
		fs::copy_options::overwrite_existing);

	std::string cmdLine = "\"" + modLoaderDataDir + "\\" + build_prefetch_cmd + "\"";
	STARTUPINFOA si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	if (CreateProcessA(
		NULL, cmdLine.data(),
		NULL, NULL, FALSE, 0,
		NULL, modLoaderDataDir.c_str(), &si, &pi))
	{
		log("Process started, waiting...");
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
		log("Process finished.");
	}
	else {
		log("Failed to start process. Error: %d", GetLastError());
		return false;
	}


	// create prefetch mod loader
	const char* fullgame_prefetch_core = "fullgame.prefetch.core";
	std::string newPrefetchFilePath = modLoaderDataDir + "\\" + fullgame_prefetch_core;
	auto modLoaderPrefetchDir = CreateDir(modsDir, "ModLoaderPrefetch\\prefetch");
	fs::copy_file(newPrefetchFilePath,
		modLoaderPrefetchDir + "\\" + fullgame_prefetch_core,
		fs::copy_options::overwrite_existing);


	// cleanup
	fs::remove(newPrefetchFilePath);
	RemoveAll(tempNewCoreFilesFolderPath);

	log("Successfully prefetch updated!");
	return true;
}

int main()
{
	// tester only
	bool ok = StartPrefetchGenerator("E:\\SteamLibrary\\steamapps\\common\\DEATH STRANDING DIRECTORS CUT");
	log("end program!");

	system("pause");
	return 0;
}

