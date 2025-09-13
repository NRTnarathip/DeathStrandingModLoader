#include "DecimaNative.h"
#include "extern/decima-native/source/Core/RTTIObject.h"
#include "utils.h"
#include "set"


std::unordered_map<std::string, GameFunctionAPI> DecimaNative::g_gameFunctionAPIMap;
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
	log("DecimaNative::OnExportedSymbolGroupRegisterAllTypes");
	auto total = g_symbolArray->size();
	log("total symbol: %zu", total);
	auto array = (MyVector*)g_symbolArray;
	for (int i = 0; i < total; i++) {
		auto symbol = (ExportedSymbolGroup*)array->items[i];
		g_symbolSet.insert(symbol);
		log("added symbol: %s", symbol->mNamespace);

		if (symbol->mMembers.size() == 0)
			continue;

		RTTI* memberClassType = nullptr;
		for (int memberIndex = 0; memberIndex < symbol->mMembers.size(); memberIndex++) {
			auto& member = symbol->mMembers[memberIndex];

			if (member.mKind == ExportedSymbolMember::MemberKind::Class) {
				memberClassType = (RTTI*)member.mRTTI;
				continue;
			}

			if (member.IsExportFunction()) {
				GameFunctionAPI api;
				auto funcInfo = &member.mLanguages[0];
				api.fullName = member.mSymbolName;
				api.name = funcInfo->name;
				api.address = funcInfo->address;
				api.symbolGroup = symbol;
				api.symbolMember = &member;
				//log("api: %s", api.fullName);
				//log("func addr: %p", funcInfo->address);
				// check if already exist
				if (g_gameFunctionAPIMap.contains(api.fullName)) {
					//log("skip duplicate function api: %s", api.fullName);
					continue;
				}

				// added api
				g_gameFunctionAPIMap[api.fullName] = api;
				//log("added new api: %s", api.fullName);
			}
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

GameFunctionAPI* DecimaNative::GetGameFunctionAPI(const char* functionName)
{
	if (g_gameFunctionAPIMap.contains(functionName))
		return &g_gameFunctionAPIMap[functionName];

	return nullptr;
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
