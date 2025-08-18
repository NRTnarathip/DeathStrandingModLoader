#pragma once

#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>

class ModEntry {
public:
	std::string modFolderName;
	std::string modFolderPath;
	std::unordered_set<std::string> fileFullPaths;
	std::unordered_set<std::string> gameCoreFileNames;
	std::unordered_map<std::string, std::string> coreFilePathLookupByName;
};

class ModManager
{
private:
	std::unordered_map<std::string, ModEntry*> g_modRegistryLookupWithCoreFilePath;
	std::vector<ModEntry*> g_modRegistry;
	static ModManager* m_instance;
	const char* rootModsFolderName = "Mods";

public:
	static ModManager& Instance()
	{
		static ModManager inst;
		m_instance = &inst;
		return inst;
	}
	bool Initialize();
	bool TryGetCoreOrStreamFileRedirect(const char* coreFilePathNoExt, ModEntry** outModEntry, const char** outCoreFilePathRedirect, bool isCoreStreamFileType);
};

