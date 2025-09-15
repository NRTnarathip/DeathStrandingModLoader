#pragma once
#include <unordered_map>
#include <set>
#include "Reflection.h"
#include "GameTypes.h"
#include <decima-native/RTTI.h>
#include <decima-native/Array.h>

class GameFunctionAPI : public FunctionType {
public:
	const RTTI* instanceRTTI;

	// helper
	template<typename Ret, typename... Args>
	Ret Call(Args... args);
};

struct DecimaNative
{
public:
	static std::unordered_map<std::string, GameFunctionAPI*> g_gameFunctionAPIMap;
	static std::set<ExportedSymbolGroup*> g_symbolSet;
	static Array<ExportedSymbolGroup*>* g_symbolArray;

	static void Initialize();
	static void OnExportedSymbolGroupRegisterAllTypes();

	template<typename Ret, typename... Args>
	static Ret CallGameAPI(const char* functionName, Args... args);

	static Array<ExportedSymbolGroup*>* GetGlobalExportedSymbolArray();
	static std::set<ExportedSymbolGroup*>& GetGlobalExportedSymbolSet() {
		return g_symbolSet;
	}
	static bool IsExportedSymbolGroup(void* o);
	static void ImportFunctionAPIFromSymbol(ExportedSymbolGroup* symbolGroup,
		ExportedSymbolMember* member);
	static GameFunctionAPI* GetGameFunctionAPI(std::string uniqueName);
	static GameFunctionAPI* GetGameFunctionAPI(ExportedSymbolMember* member);
};

