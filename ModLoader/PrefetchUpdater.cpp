#include <iostream>
#include <Windows.h>
#include <cstdarg>
#include <chrono>
#include <iomanip>
#include <filesystem>
#include <functional> 
#include <fstream>
#include "MurmurHash3.h"
#include "PrefetchUpdater.h"
#include "utils.h"


namespace fs = std::filesystem;

fs::path CreateDir(fs::path dirPath) {
	if (!fs::exists(dirPath)) {
		fs::create_directories(dirPath);
		log("create dir: %s", dirPath.string().c_str());
	}
	return dirPath;
}
fs::path CreateDir(fs::path path0, std::string n1) {
	return CreateDir(path0 / n1);
}
fs::path CreateDir(fs::path path0, std::string n1, std::string n2) {
	return CreateDir(path0 / n1 / n2);
}

void RemoveAll(fs::path dirPath) {
	if (fs::exists(dirPath)) {
		fs::remove_all(dirPath);
		log("removed dir: %s", dirPath.string().c_str());
	}
}

void DeleteDir(fs::path dir) {
	if (fs::exists(dir)) {
		fs::remove(dir);
	}
}

std::string HashToHex128(const void* key, int len, uint32_t seed = 0) {
	uint64_t out[2];
	MurmurHash3_x64_128(key, len, seed, out);

	std::ostringstream oss;
	oss << std::hex << std::setw(16) << std::setfill('0') << out[0]
		<< std::setw(16) << std::setfill('0') << out[1];
	return oss.str();
}

fs::path GetExecutablePath() {
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	return fs::path(buffer);
}

std::string GenerateModsHash(const fs::path modsDir) {

	std::ostringstream oss;

	// include current software hash;
	fs::path currentPath = GetExecutablePath();
	oss << currentPath << fs::last_write_time(currentPath).time_since_epoch().count();

	// include all files in mods directory
	for (auto& p : fs::recursive_directory_iterator(modsDir)) {
		if (fs::is_regular_file(p)) {
			auto ftime = fs::last_write_time(p);
			oss << p.path().string() << ftime.time_since_epoch().count();
		}
	}

	auto ossString = oss.str();
	auto hash = HashToHex128(ossString.c_str(), ossString.size());
	return hash;
}

std::string GetModsHashFromFile(fs::path modsHashPath) {
	if (fs::exists(modsHashPath)) {
		std::ifstream file(modsHashPath);
		if (file.is_open()) {
			std::string hash;
			std::getline(file, hash);
			file.close();
			return hash;
		}
	}
	return "";
}
void UpdateModsHashFile(fs::path cachePath, std::string hash) {
	auto cacheDir = cachePath.parent_path();
	CreateDir(cacheDir);

	std::ofstream file(cachePath);
	if (file.is_open()) {
		file << hash;
		file.close();
		log("Updated mods hash file: %s, hash: %s", cachePath.string().c_str(), hash.c_str());
	}
	else {
		log("Failed to open mods hash file for writing: %s", cachePath.string().c_str());
	}
}
void RemoveFile(fs::path path) {
	if (fs::exists(path)) {
		fs::remove(path);
		log("removed file: %s", path.string().c_str());
	}
}

bool RunCmdFile(fs::path filePath) {
	if (fs::exists(filePath) == false) {
		log("not found cmd path: %s", filePath.string().c_str());
		return  false;
	}

	std::string cmdLine = "\"" + filePath.string() + "\"";
	fs::path dirPath = fs::path(filePath).parent_path();
	STARTUPINFOA si = { sizeof(si) };
	PROCESS_INFORMATION pi;
	if (CreateProcessA(
		NULL, cmdLine.data(),
		NULL, NULL, FALSE, 0,
		NULL, dirPath.string().c_str(), &si, &pi))
	{
		log("Process started: %s, waiting...", filePath.c_str());
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
		log("Process finished.");
		return true;
	}
	else {
		log("Failed to start process. Error: %d", GetLastError());
		return false;
	}
}

bool StartPrefetchGenerator(fs::path gameDir) {
	const char* dsExeName = "ds.exe";
	fs::path gameExecutePath = gameDir / dsExeName;
	if (fs::exists(gameExecutePath) == false) {
		log("not found game ds.exe path: %s", gameExecutePath.string().c_str());
		return false;
	}
	log("found game ds.exe path: %s", gameExecutePath.string().c_str());
	fs::path gamePakDir = gameDir / "data";
	fs::path modsDir = CreateDir(gameDir, "Mods");


	// setup mod loader tools
	const char* ModLoaderInternal = "ModLoaderInternal";
	fs::path modLoaderInternalDir = gameDir / ModLoaderInternal;
	if (fs::exists(modLoaderInternalDir) == false) {
		log("folder %s not found, please setup mod loader tools first!!",
			modLoaderInternalDir.string().c_str());
		return false;
	}

	//check mods hash cache 
	{
		const std::string currentModsHash = GenerateModsHash(modsDir);
		log("current mods hash: %s", currentModsHash.c_str());
		const fs::path modsHashPath = modLoaderInternalDir / "mods_hash.txt";
		const std::string cachedModsHashFromFile = GetModsHashFromFile(modsHashPath);
		log("cached mods hash:  %s", cachedModsHashFromFile.c_str());
		if (cachedModsHashFromFile == currentModsHash) {
			// no need to update prefetch
			log("Mods hash is the same, no need to update prefetch.");
			return true;
		}
	}

	// setup lib for decima tools 
	fs::copy_file(gameDir / "oo2core_7_win64.dll",
		modLoaderInternalDir / "oo2core_7_win64.dll", fs::copy_options::overwrite_existing);

	// assert tool: decima-cli.exe
	// assert tool: DecimaExplorer.exe
	if (!fs::exists(modLoaderInternalDir / "decima-cli.exe")
		|| !fs::exists(modLoaderInternalDir / "DecimaExplorer.exe"))
	{
		log("decima-cli.exe or DecimaExplorer.exe not found in %s", modLoaderInternalDir.string().c_str());
		log("please read install instructions in README.md");
		return false;
	}

	// setup folder core for generate .bin | pak file
	const char* ModLoaderPrefetchFolderName = "ModLoaderPrefetch";
	log("try remove folder new_core_files...");
	const char* new_core_files_folder_name = "new_core_files";
	RemoveAll(modLoaderInternalDir / new_core_files_folder_name);
	RemoveAll(modsDir / ModLoaderPrefetchFolderName);
	auto tempNewCoreFilesFolderPath = CreateDir(modLoaderInternalDir, new_core_files_folder_name);

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
			std::string dstFilePath = (tempNewCoreFilesFolderPath / gameCoreFilePath).string();
			std::string dstFolderPath = dstFilePath.substr(0, dstFilePath.size() - fileName.size() - 1);
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
	RemoveAll(tempNewCoreFilesFolderPath / "prefetch");

	//execute build_prefetch.cmd for prefetch
	log("try rebuild prefetch...");
	const char* build_prefetch_cmd = "build_prefetch.cmd";
	if (!RunCmdFile(gameDir / build_prefetch_cmd))
		return false;


	// create prefetch mod loader
	const char* newCoreFilesPrefetchName = "new_core_files_prefetch.core";
	const char* fullgamePrefetchName = "fullgame.prefetch.core";
	fs::path newCorePrefetchFilePath = modLoaderInternalDir / newCoreFilesPrefetchName;
	auto modLoaderPrefetchDir = CreateDir(modsDir, ModLoaderPrefetchFolderName, "prefetch");
	fs::copy_file(newCorePrefetchFilePath,
		modLoaderPrefetchDir / fullgamePrefetchName,
		fs::copy_options::overwrite_existing);

	UpdateModsHashFile(modLoaderInternalDir / "mods_hash.txt", GenerateModsHash(modsDir));

	// cleanup
	RemoveFile(newCorePrefetchFilePath);
	RemoveAll(tempNewCoreFilesFolderPath);

	log("Successfully prefetch updated!");
	return true;
}

bool StartPrefetchGenerator() {
	return StartPrefetchGenerator(GetExecutablePath().parent_path());
}
