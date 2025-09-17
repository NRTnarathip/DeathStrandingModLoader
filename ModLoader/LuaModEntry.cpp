#include "LuaModEntry.h"
#include <filesystem>
#include "utils.h"
#include "FileUtils.h"

namespace fs = std::filesystem;
const std::string K_LuaExtName = ".lua";

std::string ReadFileToString(const fs::path& path) {
	std::ifstream file(path, std::ios::in);
	if (!file.is_open()) {
		throw std::runtime_error("Cannot open file: " + path.string());
	}

	std::stringstream buffer;
	buffer << file.rdbuf();
	return buffer.str();
}

std::string LuaModEntry::GetModPathString()
{
	return m_modPath.string();
}

LuaModEntry::LuaModEntry()
{
}

std::set<path> LuaModEntry::ScanLuaFiles()
{
	m_luaFiles = FileUtils::ScanFilesByExt(m_modPath, ".lua");
	for (auto path : m_luaFiles) {
		auto pathString = path.string();
		log("lua path: %s", pathString.c_str());
	}

	return m_luaFiles;
}

path LuaModEntry::FindLuaFileByName(std::string findFileName)
{
	for (auto& path : m_luaFiles) {
		if (FileUtils::IsFileNameMatch(path, findFileName)) {
			return path;
		}
	}
	return "";
}

void LuaModEntry::Setup(LuaModManifest modManifest, path modManifestPath)
{
	log("try setup mod...");
	if (m_isSetup) {
		log("it's already setup mod!");
		return;
	}

	m_isSetup = true;
	this->m_manifestPath = modManifestPath;
	this->m_modPath = modManifestPath.parent_path();
	this->m_manifest = modManifest;
	log("mod dir: %s", this->m_modPath.string().c_str());
}

bool LuaModEntry::Restart()
{
	log("restarting mod: %s", GetModName());
	ScanLuaFiles();
	if (m_luaFiles.empty()) {
		log("not found any lua file!");
		// just skip, don't do anything
		return true;
	}

	log("try restart sandbox...");
	m_sandbox.Restart();

	// try run code
	path mainLuaPath = FindLuaFileByName(K_MainLuaFileName);
	log("try run lua entry file: %s", mainLuaPath.string().c_str());
	if (mainLuaPath.empty()) {
		// not found main.lua file, so just skip
		log("not found %s file!", K_MainLuaFileName);
		return true;
	}

	auto mainCode = ReadFileToString(mainLuaPath);
	if (!mainCode.empty()) {
		if (!m_sandbox.RunMainCodeOnce(mainCode))
			return false;
	}

	log("restarted mod: %s", GetModName());
	return true;
}

void LuaModEntry::UpdateTick()
{
	m_sandbox.UpdateTick();
}
