#include "LuaModManager.h"
#include "ModManager.h"
#include <filesystem>

#include "utils.h"
#undef log
#define Log Logger::Instance()->logFormat

#include "json.hpp"

namespace fs = std::filesystem;
using json = nlohmann::json;

// helper
std::set<path> ScanFiles(path dir, std::string fileName) {
	std::set<path> files;

	for (auto& entry : fs::recursive_directory_iterator(dir)) {
		auto filePath = entry.path();
		if (filePath.filename() == LuaModManager::k_manifestFileName) {
			files.insert(filePath);
		}
	}

	return files;
}

// static vars
const std::string LuaModManager::k_manifestFileName = "manifest.json";

// funcs
void LuaModManager::LoadAllMods()
{
	auto manifestFiles = ScanFiles(modsDir, k_manifestFileName);
	Log("found mods: %d", manifestFiles.size());

	for (auto& manifestPath : manifestFiles) {
		LoadMod(manifestPath);
	}
}

void LuaModEntry::Setup(path modDir, LuaModManifest manifest)
{
	Log("try setup var");
	this->modDir = modDir;
	this->manifest = manifest;
	Log("try scan lua files");
	ScanLuaFiles();
	Log("lua files: %d", luaFiles.size());
}

LuaModEntry* LuaModManager::LoadMod(path manifestPath)
{
	Log("try loading mod manifest path: %s", manifestPath.string().c_str());

	LuaModManifest manifest = ParseManifest(manifestPath);

	{
		// already loaded
		Log("try check mod");
		auto cacheMod = GetMod(manifest.UniqueID);
		if (cacheMod)
			return cacheMod;
	}


	// create new mod
	auto modDir = manifestPath.parent_path();
	auto modDirName = modDir.string();
	Log("modDir: %s", modDirName.c_str());
	LuaModEntry* mod = new LuaModEntry();
	Log("try setup mod...");
	mod->Setup(modDir, manifest);


	// added
	mods[mod->manifest.UniqueID] = mod;
	Log("loaded mod: %s", mod->GetModName());

	// post process
	// just start mod??
	if (!mod->Start()) {
		Log("error starting mod: %s", mod->GetModName());
	}

	return mod;
}

LuaModEntry* LuaModManager::GetMod(std::string uniqueID)
{
	if (mods.find(uniqueID) != mods.end())
		return mods[uniqueID];
	return nullptr;
}

LuaModManifest LuaModManager::ParseManifest(path manifestPath)
{
	std::ifstream file(manifestPath);
	if (!file.is_open()) {
		throw std::runtime_error("Cannot open manifest: " + manifestPath.string());
	}

	json j;
	file >> j;

	LuaModManifest m;
	m.UniqueID = j.value("UniqueID", "");
	m.Name = j.value("Name", "");
	m.Version = j.value("Version", "0.0.0");
	return m;
}
