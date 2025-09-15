#include "SymbolExporter.h"
#include <functional>
#include <filesystem>
#include "utils.h"
#include "DecimaNative.h"

class EntityTest {

};

struct ClassInfo {
	std::string name;
	std::vector<GameFunctionAPI*> functions;
};

std::string BuildClass(ClassInfo* c) {

	std::stringstream ss;
	const char* newLine = "\n";
	ss << "class " << c->name.c_str() << " {" << newLine;
	ss << "public:" << newLine;
	const char* tab = "    ";
	for (auto fun : c->functions) {
		ss << tab;
		if (!fun->isInstanceFunction) {
			ss << "static ";
		}
		ss << fun->signature << ";";
		ss << newLine;
	}

	ss << "};";

	// done
	auto result = ss.str();
	return result;
}

void SymbolExporter::ExportAllFuncionAPI()
{
	log("try exporting all function...");

	auto& functions = DecimaNative::g_gameFunctionAPIMap;

	// write file
	log("exporting to text file...");
	std::ofstream txtFile("dsdc_export_functions.txt", std::ios::out | std::ios::trunc);
	for (auto& funcPair : functions) {
		auto& func = funcPair.second;
		txtFile << std::format("[ namespace  ]  {}\n", func.symbolNamespace.c_str());
		txtFile << std::format("[ functionID ]  {}\n", func.uniqueName);
		txtFile << std::format("[ signature  ]  {}\n", func.signature);
		txtFile << std::format("[ rva        ]  0x{:x}\n", func.rva);
		txtFile << std::format("[ hash       ]  {}\n", func.hashString);
		txtFile << std::format("[ instance   ]  {}\n", func.instanceTypeName.c_str());

		txtFile << "\n";
	}

	log("exporting to header file...");
	std::unordered_map<std::string, ClassInfo*> classMap;
	for (auto& funcPair : functions) {
		auto& func = funcPair.second;
		ClassInfo* classInfo = nullptr;
		std::string className;
		if (func.isInstanceFunction) {
			className = func.instanceTypeName;
		}
		else {
			className = func.symbolNamespace;
		}
		if (classMap.find(className) == classMap.end()) {
			// build new class info
			classInfo = new ClassInfo();
			classInfo->name = className;
			classMap[className] = classInfo;
		}

		classInfo = classMap[className];
		//add function signature
		classInfo->functions.push_back(&func);
	}

	// define forward class
	std::ofstream headerFile("dsdc_functions.h", std::ios::out | std::ios::trunc);
	for (auto& classInfoPair : classMap) {
		auto info = classInfoPair.second;
		auto classText = BuildClass(info);
		headerFile << classText.c_str();
		headerFile << "\n\n";
	}

	log("exported all function");
}
