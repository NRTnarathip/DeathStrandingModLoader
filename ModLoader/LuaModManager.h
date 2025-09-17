#pragma once
#include "LuaModEntry.h"

using LuaModsMap_t = std::unordered_map<std::string, std::unique_ptr<LuaModEntry>>;

class LuaModManager {
private:
	void UpdateTick();
	LuaModsMap_t m_mods;

public:
	static LuaModManager* Instance() {
		static LuaModManager inst;
		return &inst;
	}

	LuaModManager();

	// const
	inline static const std::filesystem::path K_LuaModsDirName = "LuaMods";

	// functions
	void LoadAllMods();
	LuaModEntry* LoadMod(path manifestPath);
	LuaModEntry* GetMod(std::string uniqueID);
	LuaModsMap_t& GetAllMod() { return m_mods; }
	LuaModManifest ParseManifest(path path);
};

