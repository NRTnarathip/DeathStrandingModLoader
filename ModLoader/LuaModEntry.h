#pragma once
#include <iostream>
#include <filesystem>
#include <set>
#include <unordered_map>
#include "LuaModSandbox.h"

using LuaModUniqueID_t = std::string;
using path = std::filesystem::path;

struct LuaModManifest {
	std::string Name;
	std::string UniqueID;
	std::string Version;
};

class LuaModEntry {
public:
	LuaModManifest manifest;
	path modDir;
	path manifestPath;
	std::set<path> luaFiles;
	LuaModSandbox sandbox;

	void Setup(path modDir, LuaModManifest manifest);
	std::set<path> ScanLuaFiles();
	bool Start();
	const char* GetModName() const {
		return manifest.Name.c_str();
	}
	void UpdateTick();
};

