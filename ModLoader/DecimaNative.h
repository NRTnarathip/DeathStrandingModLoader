#pragma once
#include "GameTypes.h"
#include <unordered_map>
#include <set>

struct GameFunctionAPI {
	ExportedSymbolGroup* symbolGroup;
	ExportedSymbolMember* symbolMember;
	const char* name;
	const char* fullName;
	void* address;

	template<typename Ret, typename... Args>
	Ret Call(Args... args) {
		using Fn = Ret(*)(Args...);
		Fn fn = reinterpret_cast<Fn>(this.address);
		return fn(args...);
	}

};

struct DecimaNative
{
public:
	static std::unordered_map<std::string, GameFunctionAPI> g_gameFunctionAPIMap;
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
	static GameFunctionAPI* GetGameFunctionAPI(const char* functionName);
};

