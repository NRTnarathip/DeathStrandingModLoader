#include "FileUtils.h"
#include "utils.h"

namespace fs = std::filesystem;

bool IsEntryFileNameMatch(fs::directory_entry entry, std::string fileNameMatch) {
	const auto entryPath = entry.path();
	const auto entryFileName = entryPath.filename();
	return entry.is_regular_file() && entryFileName.string() == fileNameMatch;
}

bool IsEntryFileExt(fs::directory_entry entry, std::string extName) {
	const auto entryPath = entry.path();
	if (!entry.is_regular_file())
		return false;

	const auto entryFileName = entryPath.filename();
	const auto filenameString = entryFileName.string();
	if (entryFileName.extension() == extName)
		return true;
	return false;
}

path FileUtils::FindFileByName(path dirPath, std::string fileName)
{
	for (auto& entry : fs::recursive_directory_iterator(dirPath)) {
		if (IsFileNameMatch(entry, fileName)) {
			return entry.path();
		}
	}
	return "";
}

bool FileUtils::IsFileNameMatch(path filePath, std::string fileNameMatch)
{
	return filePath.filename() == fileNameMatch;
}

std::set<path> FileUtils::ScanFilesByExt(path dirPath, std::string extName)
{
	std::set<path> fullPaths;
	for (auto& entry : fs::recursive_directory_iterator(dirPath)) {
		if (IsEntryFileExt(entry, extName)) {
			auto entryPath = entry.path();
			// make full path
			if (entryPath.is_relative())
				entryPath = GetGameDirFullPath() / entryPath;
			fullPaths.insert(entryPath);
		}
	}
	return fullPaths;
}

std::set<path> FileUtils::ScanFilesByName(path dirPath, std::string filename)
{
	std::set<path> fullPaths;
	auto gameDirPath = GetGameDirFullPath();
	for (auto& entry : fs::recursive_directory_iterator(dirPath)) {
		if (IsFileNameMatch(entry, filename)) {
			auto entryPath = entry.path();
			// make full path
			if (entryPath.is_relative())
				entryPath = GetGameDirFullPath() / entryPath;
			fullPaths.insert(entryPath);
		}
	}
	return fullPaths;
}
