#include "ModManager.h"
#include "utils.h"
#include "types.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <filesystem>

#include "PrefetchUpdater.h"

namespace fs = std::filesystem;

ModManager* g_modManager;

typedef MyString* (*My_GetCoreFilePathForReader_t)(MyString* p1_coreFileName, MyString* p2_outCoreFilePath);
My_GetCoreFilePathForReader_t backup_My_GetCoreFilePathForReader;

ModManager* ModManager::m_instance = nullptr;

bool ModManager::TryGetCoreOrStreamFileRedirect(
	const char* coreFileNameNoExt,
	ModEntry** outModEntry,
	const char** outCoreFilePathRedirect,
	bool isCoreStreamFileExt)
{
	std::string newFilePathExt = coreFileNameNoExt;
	newFilePathExt.append(isCoreStreamFileExt ? ".core.stream" : ".core");
	if (g_modRegistryLookupWithCoreFilePath.find(newFilePathExt) == g_modRegistryLookupWithCoreFilePath.end())
		return false;

	auto mod = g_modRegistryLookupWithCoreFilePath[newFilePathExt];
	*outModEntry = mod;

	std::string redirectCoreFilePath = "source:" + mod->modFolderPath + '/' + newFilePathExt;
	std::replace(redirectCoreFilePath.begin(), redirectCoreFilePath.end(), '\\', '/');
	*outCoreFilePathRedirect = redirectCoreFilePath.c_str();

	return true;
}

MyString* My_GetCoreFilePathForReader(MyString* p1_coreFileName, MyString* p2_outCoreFilePath) {
	auto coreFileNameNoExt = p1_coreFileName->str;
	//log("Begin My_GetCoreFilePathForReader, p1_coreFileNameNoExt: %s", coreFileNameNoExt);
	auto retValue = backup_My_GetCoreFilePathForReader(p1_coreFileName, p2_outCoreFilePath);
	ModEntry* mod = nullptr;
	const char* newPath;
	if (g_modManager->TryGetCoreOrStreamFileRedirect(coreFileNameNoExt, &mod, &newPath, false)) {
		SetNewMyString(p2_outCoreFilePath, newPath);
		log("redirect new .core file: %s, mod: %s", p2_outCoreFilePath->str, mod->modFolderName.c_str());
	}

	//log("Post call: My_GetCoreFilePathForReader: result: %s", retValue->str);
	//log("End My_GetCoreFilePathForReader");
	return retValue;
}


My_GetCoreFilePathForReader_t backup_My_GetCoreStreamFilePathForReader;
MyString* My_GetCoreStreamFilePathForReader(MyString* p1_coreStreamFileName, MyString* p2_outCoreStreamFilePath) {
	//log("Begin My_GetCoreStreamFilePathForReader, p1_coreStreamFileName: %s", p1_coreStreamFileName->str);
	auto retValue = backup_My_GetCoreStreamFilePathForReader(p1_coreStreamFileName, p2_outCoreStreamFilePath);
	ModEntry* mod = nullptr;
	const char* newPath;
	if (g_modManager->TryGetCoreOrStreamFileRedirect(p1_coreStreamFileName->str, &mod, &newPath, true)) {
		SetNewMyString(p2_outCoreStreamFilePath, newPath);
		log("redirect new .core.stream file: %s, mod: %s", p2_outCoreStreamFilePath->str, mod->modFolderName.c_str());
	}
	//log("End My_GetCoreStreamFilePathForReader");
	return retValue;
}

bool ModManager::Initialize()
{
	log("ModManager Initialize...");

	g_modManager = this;

	log("setup hooks...");
	HookFuncRva(0x18f6720, &My_GetCoreFilePathForReader, &backup_My_GetCoreFilePathForReader);
	HookFuncRva(0x18f67d0, &My_GetCoreStreamFilePathForReader, &backup_My_GetCoreStreamFilePathForReader);

	// Mod Register
	// update prefetch!!
	log("run prefetch updater...");
	if (StartPrefetchGenerator() == false) {
		log("Error!! prefetch updater");
		system("pause");
		exit(-1);
		return false;
	}

	log("done prefetch updater.");

	// register mod entry
	log("register mod entries...");
	for (const auto& modDirectoryEntry : fs::directory_iterator(rootModsFolderName)) {
		if (modDirectoryEntry.is_directory()) {
			auto modDirPath = modDirectoryEntry.path();
			auto modDirPathString = modDirPath.string();
			auto modFolderName = modDirPath.filename().string();
			if (modFolderName[0] == '.') {
				log("skip mod folder: %s", modFolderName.c_str());
				continue;
			}

			auto modEntry = new ModEntry();
			modEntry->modFolderName = modDirPath.filename().string();
			modEntry->modFolderPath = modDirPath.string();
			log("modFolderPath: %s", modEntry->modFolderPath.c_str());
			log("modFolderName: %s", modEntry->modFolderName.c_str());
			for (const auto& fileEntry : fs::recursive_directory_iterator(modDirPath)) {
				if (fileEntry.is_regular_file()) {
					auto fileName = fileEntry.path().filename().string();
					bool isCoreOrStreamFile = fileName.find(".core") != std::string::npos;
					if (!isCoreOrStreamFile) {
						log("warning!, not support file: %s, only support .core or .core.stream files", fileName.c_str());
						continue;
					}

					std::string filePath = fileEntry.path().string();
					modEntry->fileFullPaths.insert(filePath);
					std::string filePathRelative = filePath.substr(modEntry->modFolderPath.size() + 1);
					std::string gameCoreFilePath = filePathRelative;
					std::replace(gameCoreFilePath.begin(), gameCoreFilePath.end(), '\\', '/');
					modEntry->gameCoreFileNames.insert(gameCoreFilePath);
					modEntry->coreFilePathLookupByName[fileEntry.path().filename().string()] = gameCoreFilePath;
					g_modRegistryLookupWithCoreFilePath[gameCoreFilePath] = modEntry;
					log("mapped coreFile: %s to mod: %s", gameCoreFilePath.c_str(), modEntry->modFolderName.c_str());
				}
			}

			g_modRegistry.push_back(modEntry);
			log("Added new mod: %s", modEntry->modFolderName.c_str());
		}
	}

	log("ModManager initialized successfully");
}
