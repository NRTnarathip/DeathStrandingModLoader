#pragma once
#include <filesystem>
#include <set>

using path = std::filesystem::path;
namespace fs = std::filesystem;

class FileUtils {
public:
	inline static const std::string K_LuaExtName = ".lua";
	static std::set<path> ScanFilesByExt(path dirPath, std::string extName);
	static std::set<path> ScanFilesByName(path dirPath, std::string filename);
	static path FindFileByName(path dirPath, std::string fileName);
	static path GetGameDirFullPath() {
		static auto current = fs::current_path();
		return current;
	}
	static std::string GetGameDirFullPathString() {
		static auto path = GetGameDirFullPath();
		return path.string();
	}
	static bool IsFileNameMatch(path filePath, std::string fileNameMatch);
};

