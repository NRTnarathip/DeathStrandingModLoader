#include "GameAPIJsonExporter.h"
#include "DecimaNative.h"
#include <fstream>
#include "json.hpp"
using json = nlohmann::json;
using str = std::string;

struct GameAPIItemJson {
	str className;
	str functionName;
	str functionSignature;
	str exportName;
	str returnTypeSignature;
	str returnTypeName;
	int paramCount;
	std::vector<str> paramTypeSignatures;
	std::vector<str> paramTypeNames;
	bool isInstanceFunction;

	// auto-gen to_json / from_json
	NLOHMANN_DEFINE_TYPE_INTRUSIVE(GameAPIItemJson,
		className,
		functionName, functionSignature, exportName,
		returnTypeSignature, returnTypeName, paramCount,
		paramTypeSignatures, paramTypeNames, isInstanceFunction)
};

void GameAPIJsonExporter::Export(std::string saveFileName)
{
	std::vector<GameAPIItemJson> exportItems;

	auto& classAPIMap = DecimaNative::g_gameClassAPIMap;
	for (auto& classPair : classAPIMap) {
		auto c = classPair.second;
		auto functions = c->GetFunctions();
		auto className = c->name;
		for (auto& fn : functions) {
			GameAPIItemJson item{};
			item.className = className;
			item.exportName = fn->exportName;
			item.functionName = fn->name;
			item.functionSignature = fn->signature;
			item.isInstanceFunction = fn->isInstanceFunction;
			item.returnTypeName = fn->returnType->name;
			item.returnTypeSignature = fn->returnType->signature;
			item.paramCount = fn->GetParamCount();
			for (auto p : fn->parameters) {
				item.paramTypeNames.push_back(p->name);
				item.paramTypeSignatures.push_back(p->signature);
			}
			exportItems.push_back(item);
		}
	}

	std::ofstream file(saveFileName);

	json j = exportItems;
	file << j.dump(4);
	file.close();
}
