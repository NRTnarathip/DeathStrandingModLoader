#include "DecimaNative.h"
#include <decima-native/RTTIObject.h>
#include "utils.h"
#include "set"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::unordered_map<std::string, GameFunctionAPI*> DecimaNative::g_gameFunctionAPIMap;
std::unordered_map<std::string, ClassType*> DecimaNative::g_gameClassAPIMap;
std::set<ExportedSymbolGroup*> DecimaNative::g_symbolSet;
Array<ExportedSymbolGroup*>* DecimaNative::g_symbolArray = nullptr;

void (*backupExportedSymbolGroupRegisterAllTypes)(MyVector* p1_symbolGroupArray,
	void* param_2, void* param_3, void* param_4);
void HK_ExportedSymbolGroupRegisterAllTypes(MyVector* p1_symbolGroupArray,
	void* param_2, void* param_3, void* param_4) {

	// call original
	backupExportedSymbolGroupRegisterAllTypes(p1_symbolGroupArray,
		param_2, param_3,
		param_4);

	DecimaNative::OnExportedSymbolGroupRegisterAllTypes();
}

void DecimaNative::Initialize()
{
	// map signatures
	Offsets::MapSignature("RTTIRefObject::DecrementRef", "40 53 48 83 EC 20 48 8B D9 B8 ? ? ? ? F0 0F C1 41 ? 25 ? ? ? ? 83 F8 01 75 34 8B 41");
	Offsets::MapSignature("String::FromCString", "40 53 48 83 EC 20 48 8B D9 48 C7 01 00 00 00 00 49 C7 C0 FF FF FF FF");
	Offsets::MapSignature("String::FromString", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 39 48 8B F2 48 8B D9 48 3B 3A 74 54 48 89 6C 24");
	Offsets::MapSignature("String::~String", "40 53 48 83 EC 20 48 8B 19 48 8D 05 ? ? ? ? 48 83 EB 10 48 3B D8 74 27 B8 ? ? ? ? F0 0F C1 03 0F BA F0 1F 83 F8 01 75 15 48 8B");
	Offsets::MapSignature("RTTI::GetName", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 0F B6 41 04 48 8B FA 48 8B F1 83 F8");
	Offsets::MapSignature("RTTI::ToString", "4C 8B DC 57 41 54 41 55 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 4C 8B E9 4D 8B E0 0F B6");

	// global variable
	g_symbolArray = (Array<ExportedSymbolGroup*>*)GetAddressFromRva(0x4f66a70);

	// hook functions
	HookFuncRva(0x18fbb40, HK_ExportedSymbolGroupRegisterAllTypes, &backupExportedSymbolGroupRegisterAllTypes);
}

void DecimaNative::OnExportedSymbolGroupRegisterAllTypes()
{
	// initialize symbols
	auto total = g_symbolArray->size();
	auto array = (MyVector*)g_symbolArray;

	std::unordered_map<std::string, SignatureType*> allTypeMap;

	for (int i = 0; i < total; i++) {
		auto symbol = (ExportedSymbolGroup*)array->items[i];
		g_symbolSet.insert(symbol);

		if (symbol->mMembers.size() == 0)
			continue;

		for (int memberIndex = 0; memberIndex < symbol->mMembers.size(); memberIndex++) {
			auto* member = &symbol->mMembers[memberIndex];
			if (member->mKind == ExportedSymbolMember::MemberKind::Function) {
				auto fn = ImportFunctionAPIFromSymbol(symbol, member);
				if (fn == nullptr)
					continue;

				// build class holding function
				auto className = ClassType::BuildClassName(fn);
				if (className.empty())
					className = "DecimaEngine"; //default name

				// create new
				if (g_gameClassAPIMap.find(className) == g_gameClassAPIMap.end()) {
					ClassType* newClassInfo = new ClassType();
					newClassInfo->name = className;
					newClassInfo->rtti = fn->instanceRTTI;
					g_gameClassAPIMap[className] = newClassInfo;
				}

				// add func to class
				auto& classType = g_gameClassAPIMap[className];
				classType->AddFunction(fn);

				// collect all types
				for (auto type : fn->GetAllTypes())
					allTypeMap[type->name] = type;
			}
		}

	}

	// apply class RTTI
	for (auto& classPair : g_gameClassAPIMap) {
		auto& c = *classPair.second;
		if (allTypeMap.contains(c.name)) {
			c.rtti = allTypeMap[c.name]->rtti;
		}
	}
}

Array<ExportedSymbolGroup*>* DecimaNative::GetGlobalExportedSymbolArray()
{
	// check & update symbol cache to set
	if (g_symbolSet.size() != g_symbolArray->size()) {
		int startIndex = g_symbolSet.size() - 1;
		if (startIndex < 0) startIndex = 0;
	}

	return g_symbolArray;
}

bool DecimaNative::IsExportedSymbolGroup(void* o)
{
	auto& set = GetGlobalExportedSymbolSet();
	return set.contains((ExportedSymbolGroup*)o);
}

GameFunctionAPI* DecimaNative::ImportFunctionAPIFromSymbol(ExportedSymbolGroup* symbolGroup, ExportedSymbolMember* symbolMember)
{
	if (!symbolMember->IsExportFunction())
		return nullptr;

	if (GetGameFunctionAPI(symbolMember)) {
		//log("skip duplicate function api: %s", api.fullName);
		return nullptr;
	}

	auto fn = new GameFunctionAPI();
	Reflection::BuildFunction(symbolGroup, symbolMember, (FunctionType*)fn);

	// added
	g_gameFunctionAPIMap[fn->exportName] = fn;
	// debug

	return fn;
}

GameFunctionAPI* DecimaNative::GetGameFunctionAPI(std::string exportName)
{
	if (g_gameFunctionAPIMap.contains(exportName))
		return g_gameFunctionAPIMap[exportName];

	return nullptr;
}

GameFunctionAPI* DecimaNative::GetGameFunctionAPI(ExportedSymbolMember* member)
{
	return GetGameFunctionAPI(Reflection::GetFunctionExportName(member));
}

std::unordered_map<std::string, GameFunctionAPI*> DecimaNative::GetAllGameAPI()
{
	return g_gameFunctionAPIMap;
}


template<typename Ret, typename ...Args>
Ret DecimaNative::CallGameAPI(const char* functionName, Args ...args)
{
	Ret result{};
	auto api = GetGameFunctionAPI(functionName);
	if (!api) {
		log("function api: %s not found", functionName);
		return result;
	}

	return result;
}

