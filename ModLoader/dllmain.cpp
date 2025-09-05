
#include "MinHook.h"
#pragma comment(lib, "libMinHook.x64.lib")

#include <Windows.h>
#include <winternl.h> 
#include <stdio.h>
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdio>
#include <sstream>
#include <tchar.h>
#include <string.h>
#include <psapi.h>
#include <strsafe.h>
#include <string>
#include <map>
#include <filesystem>
#include <iostream>
#include "hooks.h"
#include "utils.h"
#include "types.h"
#include "dll_version.h"
#include "winlator_patch.h"
#include "ModManager.h"
#include "TexturePatcher.h"
#include "RendererHook.h"
#include "LoaderConfig.h"
#include "DevDebug.h"
#include "OverlayMenu.h"
#include "Logger.h"
Logger* logger;

void DisableSaveCorruptionCheck() {
	log("disable save corruption check...");
	std::vector<uint8_t> bytes{ 0xEB };
	PatchBytesRva(0x1a02945, bytes);
}

bool Start() {
	// init first!!
	LoaderConfig* loaderConfig = LoaderConfig::Instance();
	logger = Logger::Instance();

	// init general
	log("starting mod loader...");
	log("version: %s", GetDllVersionStr());

	log("initializing MinHook...");
	if (MH_Initialize() != MH_OK) {
		log("minhook initialization failed");
		return false;
	}

	DisableSaveCorruptionCheck();

	// setup hooks for winlator | gamehub
	SetupWinlatorPatcher();

	// setup mod manager
	ModManager* modManager = ModManager::Instance();
	if (modManager->Initialize() == false) {
		log("ModManager initialize failed!");
		return false;
	}

	//setup overlay menu
	OverlayMenu::Instance()->Initialize();

	// setup hooks debug
	if (loaderConfig->devDebug) {
		SetupHooksDebug();
		SetupDevDebug();
	}

	log("successfully setup mod loader");
	return true;
}

extern "C" __declspec(dllexport) void StartAPI() {
	printf("empty\n");
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		if (Start() == false) {
			system("pause");
			exit(EXIT_FAILURE);
		}
		break;
	}

	return TRUE;
}

