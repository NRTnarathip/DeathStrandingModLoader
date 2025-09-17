#pragma once
#include <iostream>
#include <filesystem>
#include <set>
#include <unordered_map>
#include "LuaModSandbox.h"

using path = std::filesystem::path;

struct LuaModManifest {
	std::string Name;
	std::string UniqueID;
	std::string Version;

	// const
	inline static const std::string K_ManifestJson = "manifest.json";
};

class LuaModEntry {
private:
	std::set<path> ScanLuaFiles();
	path FindLuaFileByName(std::string path);
	path m_modPath;
	path m_manifestPath;
	std::set<path> m_luaFiles;
	LuaModSandbox m_sandbox;
	LuaModManifest m_manifest;
	bool m_isSetup = false;
	std::string GetModPathString();

public:
	// main functions
	LuaModEntry();
	void Setup(LuaModManifest modManifest, path modManifestPath);
	bool Restart();
	void Stop();
	void UpdateTick();

	// helper
	const char* GetModName() const { return m_manifest.Name.c_str(); }
	const char* GetID() const { return m_manifest.UniqueID.c_str(); }
	const char* GetStatusName();
	LuaModSandbox* GetSandbox() { return &m_sandbox; }
	const char* GetVersion() { return m_manifest.Version.c_str(); };

	// const
	inline static const std::string K_MainLuaFileName = "main.lua";
};

