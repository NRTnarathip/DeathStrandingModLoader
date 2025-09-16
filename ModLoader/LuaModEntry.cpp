#include "LuaModEntry.h"
#include <filesystem>
#include "utils.h"

namespace fs = std::filesystem;
const std::string LuaExt = ".lua";

std::string ReadFileToString(const fs::path& path) {
	std::ifstream file(path, std::ios::in);
	if (!file.is_open()) {
		throw std::runtime_error("Cannot open file: " + path.string());
	}

	std::stringstream buffer;
	buffer << file.rdbuf();
	return buffer.str();
}

std::set<path> LuaModEntry::ScanLuaFiles()
{
	std::set<path> newFiles;
	for (auto& entry : fs::recursive_directory_iterator(modDir)) {
		auto entryPath = entry.path();
		auto entryFilename = entryPath.filename();
		if (entry.is_regular_file() && entryFilename.extension() == LuaExt) {
			newFiles.insert(entryPath);
		}
	}

	// update cache
	luaFiles = newFiles;

	return newFiles;
}

bool LuaModEntry::Start()
{
	log("starting mod: %s", GetModName());
	if (luaFiles.empty()) {
		log("failed, not found any lua file");
		return false;
	}

	log("try setup lua sandbox");
	sandbox.SetupEnvrionment();
	path firstLua = *luaFiles.begin();
	auto luaFileName = firstLua.filename().string();
	log("try run lua entry file: %s", luaFileName.c_str());
	auto code = ReadFileToString(firstLua);
	if (!code.empty()) {
		bool ok = sandbox.Run(code);
		if (!ok) return false;
	}

	return true;
}

void LuaModEntry::UpdateTick()
{
	sandbox.UpdateTick();
}
