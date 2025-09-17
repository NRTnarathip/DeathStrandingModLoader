#pragma once
#include "LuaModEntry.h"

class LuaModManager {
private:
	std::unordered_map<std::string, std::unique_ptr<LuaModEntry>> m_mods;
	void UpdateTick();

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
	LuaModManifest ParseManifest(path path);
};

