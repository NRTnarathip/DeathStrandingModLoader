#include "SymbolExporter.h"
#include <functional>
#include <filesystem>
#include "utils.h"
#include "DecimaNative.h"
#include <algorithm>

void SymbolExporter::ExportAllFuncionAPI()
{
	log("try exporting all function...");

	auto& functions = DecimaNative::g_gameFunctionAPIMap;

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
	log("exported all function");
}

struct ClassInfo {
	std::string className;
	std::vector<GameFunctionAPI*> functions;
};

struct HeaderBuilder {
	std::stringstream ss;
	const char* tab = "    ";
	HeaderBuilder() {
		AddLine("#pragma once");
		AddLine("");
	}
	void Clear() { ss.clear(); }
	void Define(std::string define) {
		AddLine("#define " + define);
	}
	void AddLine(std::string line = "") {
		ss << line << "\n";
	}

	void Include(std::string name) {
		AddLine("#include <" + name + ">");
	}

	void AddNewClass(ClassInfo* classInfo) {
		const char* newLine = "\n";
		auto className = classInfo->className;
		AddLine("class " + className + " {");
		AddLine("public:");

		// just sort function by name
		auto functionsSort = classInfo->functions;
		std::sort(functionsSort.begin(), functionsSort.end(),
			[](GameFunctionAPI* a, GameFunctionAPI* b) {
				return strcmp(a->name, b->name) < 0;
			});

		for (auto fun : functionsSort) {
			std::stringstream line;
			if (!fun->isInstanceFunction) {
				line << "static ";
			}
			line << fun->signature << ";";
			AddLine(tab + line.str());
		}
		// end class scope
		AddLine("};");
		AddLine();
	}
	std::string ToString() {
		return ss.str();
	}
};
void SymbolExporter::ExportCHeaderFile(std::string fileName) {
	log("exporting to header file...");
	auto& functions = DecimaNative::g_gameFunctionAPIMap;
	std::unordered_map<std::string, ClassInfo*> classMap;
	std::set<std::string> typeNameSet;
	for (auto& funcPair : functions) {
		auto& func = funcPair.second;
		ClassInfo* classInfo = nullptr;
		std::string className;
		if (func.isInstanceFunction) {
			className = func.instanceTypeName;
		}
		else {
			className = func.symbolNamespace;
			// cut "Symbols" 
			className = StringRemove(className, "Symbols");
		}
		if (classMap.find(className) == classMap.end()) {
			// build new class info
			classInfo = new ClassInfo();
			classInfo->className = className;
			classMap[className] = classInfo;
		}

		classInfo = classMap[className];
		//add function signature
		classInfo->functions.push_back(&func);
		typeNameSet.insert(func.returnInfo.typeName);
		for (auto param : func.paramInfos) {
			typeNameSet.insert(param.typeName);
		}
	}
	log("exported to header file");

	// open file stream
	HeaderBuilder header;

	std::set<std::string> noDelcareTypeNameSet = {
		"void",
		"bool",
		"double",
		"float",
		"int8",
		"int",
		"int16",
		"int32",
		"int64",
		"uint8",
		"uint16",
		"uint",
		"uint32",
		"uint64",
	};
	header.Include("cstdint");
	header.AddLine();

	// forward primitive
	header.Define("uint uint32_t");
	std::vector<std::string> primTypeForward = {
		"uint8", "uint16", "uint32", "uint64",
		"int32", "int64", "int8", "int16", };
	for (std::string typeName : primTypeForward) {
		header.Define(typeName + " " + typeName + "_t");
	}
	header.AddLine();

	// forward type
	for (auto& typeName : typeNameSet) {
		if (noDelcareTypeNameSet.find(typeName) != noDelcareTypeNameSet.end())
			continue;
		header.AddLine("struct " + typeName + ";");
	}
	header.AddLine();

	// build all class
	for (auto& classInfoPair : classMap) {
		auto classInfo = classInfoPair.second;
		header.AddNewClass(classInfo);
	}

	// done
	std::ofstream file(fileName.c_str(), std::ios::out | std::ios::trunc);
	file << header.ToString();

}
