#include "LuaModManager.h"
#include "ModManager.h"
#include <filesystem>
#include "RendererHook.h"
#include "FileUtils.h"

#include "utils.h"


namespace fs = std::filesystem;

// helper

// static vars

void HK_OnPresent(UINT p1Sync, UINT p2Flags) {

}

void LuaModManager::UpdateTick()
{
	//log("try update all mods...");
	try {
		for (auto& modItem : m_mods) {
			auto m = modItem.second.get();
			//log("try update mod: %s", m->GetModName());
			m->UpdateTick();
		}
	}
	catch (std::exception ex) {
		log("Error UpdateTick: %s", ex.what());
	}
}

LuaModEntry* LuaModManager::CreateNewMod(LuaModManifest& manifest)
{
	m_mods.emplace(manifest.UniqueID, std::make_unique<LuaModEntry>());
	auto mod = GetMod(manifest.UniqueID);

	auto sandbox = mod->GetSandbox();
	std::string sandboxID = sandbox->GetID();
	log("try added sandboxID: %s", sandboxID);
	m_modsMapBySandboxID[sandboxID] = mod;
	return mod;
}

LuaModManager::LuaModManager()
{
	log("init LuaModManager...");
	auto render = RendererHook::Instance();
	render->RegisterPresent([this]() {
		this->UpdateTick();
		});
}

// funcs
void LuaModManager::LoadAllMods()
{
	auto manifestFiles = FileUtils::ScanFilesByName(K_LuaModsDirName, LuaModManifest::K_ManifestJson);
	log("found mods: %d", manifestFiles.size());

	for (auto& manifestPath : manifestFiles) {
		try {
			LoadMod(manifestPath);
		}
		catch (std::exception ex) {
			log("Error try load mod: %s, exception: ",
				manifestPath.string().c_str(),
				ex.what());
		}
	}
}

LuaModEntry* LuaModManager::LoadMod(path manifestPath)
{
	auto manifestPathString = manifestPath.string();
	log("try loading mod manifest path: %s", manifestPathString.c_str());

	LuaModManifest manifest = ParseManifest(manifestPath);

	{
		// already loaded
		log("try check mod");
		auto cacheMod = GetMod(manifest.UniqueID);
		if (cacheMod)
			return cacheMod;
	}


	// create new mod & registered
	auto mod = CreateNewMod(manifest);

	// setup mod
	mod->Setup(manifest, manifestPath);
	log("loaded mod: %s", mod->GetModName());


	// post process
	// just start mod??
	if (!mod->Restart()) {
		log("error starting mod: %s", mod->GetModName());
	}

	return mod;
}

LuaModEntry* LuaModManager::GetMod(std::string uniqueID)
{
	if (m_mods.contains(uniqueID))
		return m_mods.at(uniqueID).get();
	return nullptr;
}

LuaModEntry* LuaModManager::GetModBySandboxID(std::string sandboxID)
{
	if (m_modsMapBySandboxID.contains(sandboxID)) {
		return m_modsMapBySandboxID.at(sandboxID);
	}
	return nullptr;
}

#undef log
#include "json.hpp"
using json = nlohmann::json;
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

