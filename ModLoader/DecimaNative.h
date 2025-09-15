#pragma once
#include "GameTypes.h"
#include <unordered_map>
#include <set>

struct GameFunctionAPI {
	ExportedSymbolGroup* symbolGroup;
	ExportedSymbolMember* symbolMember;
	const char* name;
	std::string symbolNamespace;
	const char* uniqueName;
	size_t hash;
	std::string hashString;
	void* address;
	uintptr_t rva;

	struct FunctionTypeInfo {
		std::string typeName;
		std::string modifier;
		const RTTI* type;
		bool isConst;
		bool isPointer;
		bool isPointerToPointer;
		bool isRef;
		bool hasModifier;
		std::string toString;
	};

	FunctionTypeInfo returnInfo;
	bool isReturnVoid;
	std::vector<FunctionTypeInfo> paramInfos;
	int GetParamCount() { return paramInfos.size(); }

	std::string signature;
	const char* ToString() { return signature.c_str(); }

	bool isInstanceFunction;
	FunctionTypeInfo instanceInfo;
	const RTTI* instanceType;
	std::string instanceTypeName;

	// helper
	template<typename Ret, typename... Args>
	Ret Call(Args... args);

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
	static void ImportFunctionAPIFromSymbol(ExportedSymbolGroup* symbolGroup, ExportedSymbolMember* member);
	static const char* GetGameFunctionAPIUniqueName(ExportedSymbolMember* member);
	static GameFunctionAPI* GetGameFunctionAPI(std::string uniqueName);
	static GameFunctionAPI* GetGameFunctionAPI(ExportedSymbolMember* member);
	static std::vector<GameFunctionAPI::FunctionTypeInfo> BuildFunctionTypeInfos(ExportedSymbolMember* symbolMember);
	static std::string BuildFunctionSignatureName(GameFunctionAPI& func);
};

