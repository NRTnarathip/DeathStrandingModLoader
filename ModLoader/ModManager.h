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
	std::string rootModsFolderName = "mods";
	ModManager();

public:
	static void Initialize();
	bool TryGetCoreOrStreamFileRedirect(const char* coreFilePathNoExt, ModEntry** outModEntry, const char** outCoreFilePathRedirect, bool isCoreStreamFileType);
};

