#pragma once
#include "LuaModEntry.h"

class LuaModManager {
private:
	std::unordered_map<LuaModUniqueID_t, LuaModEntry*> mods;

public:
	static LuaModManager* Instance() {
		static LuaModManager inst;
		return &inst;
	}

	// const
	static const std::string k_manifestFileName;
	std::filesystem::path modsDir = "LuaMods";

	// functions
	void LoadAllMods();
	LuaModEntry* LoadMod(path manifestPath);
	LuaModEntry* GetMod(std::string uniqueID);
	LuaModManifest ParseManifest(path path);
};

