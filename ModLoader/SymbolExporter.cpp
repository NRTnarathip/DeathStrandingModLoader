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
		auto& func = *funcPair.second;
		txtFile << std::format("[ export     ]  {}\n", func.exportName.c_str());
		txtFile << std::format("[ signature  ]  {}\n", func.ToString());
		txtFile << std::format("[ rva        ]  0x{:x}\n", func.rva);
		txtFile << std::format("[ hash       ]  {}\n", func.hashString.c_str());
		txtFile << std::format("[ instance   ]  {}\n", func.GetInstanceTypeName().c_str());

		txtFile << "\n";
	}
	log("exported all function");
}

struct CHeaderFileBuilder {
	std::stringstream ss;
	const char* tab = "    ";
	CHeaderFileBuilder() {
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

	void AddNewClass(ClassType* classInfo) {
		const char* newLine = "\n";
		auto className = classInfo->name;
		AddLine("class " + className + " {");
		AddLine("public:");

		// just sort function by name
		auto functionsSort = classInfo->GetFunctions();
		std::sort(functionsSort.begin(), functionsSort.end(),
			[](FunctionType* a, FunctionType* b) {
				return a->name < b->name;
			});

		for (auto fun : functionsSort) {
			std::stringstream line;
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

	void SaveToFile(std::string fileName) {
		std::ofstream file(fileName.c_str(), std::ios::out | std::ios::trunc);
		file << ToString();
		file.close();
	}
};

void SymbolExporter::ExportCHeaderFile(std::string fileName) {
	log("exporting to header file...");
	auto& functions = DecimaNative::g_gameFunctionAPIMap;
	std::unordered_map<std::string, ClassType> classMap;
	std::unordered_map<std::string, SignatureType*> allTypeMap;
	for (auto& funcPair : functions) {
		GameFunctionAPI* funcPtr = funcPair.second;
		auto& fn = *funcPtr;
		//log("fun: %s", fn.name.c_str());
		//log("fun instance type: %s", fn.GetInstanceTypeName().c_str());
		auto className = ClassType::BuildClassName((FunctionType*)&fn);

		// check if className empty
		if (className.empty())
			className = "DecimaEngine"; //default name

		//log("class name: %s", className.c_str());
		// new class info
		if (classMap.find(className) == classMap.end()) {
			ClassType newClassInfo;
			newClassInfo.name = className;
			classMap[className] = newClassInfo;
		}

		// setup class info
		auto classType = classMap[className];
		classType.AddFunction(&fn);

		// collect all types
		allTypeMap[fn.returnType->name] = fn.returnType;
		for (auto param : fn.parameters)
			allTypeMap[param->name] = param;
	}
	log("exported to header file");

	// open file stream
	CHeaderFileBuilder header;

	header.Include("cstdint");
	header.AddLine();

	// forward type
	for (auto& typePair : allTypeMap) {
		auto type = typePair.second;
		if (type->isPrimitive) continue;
		header.AddLine("struct " + type->name + ";");
	}
	header.AddLine();

	// build all class
	for (auto& classInfoPair : classMap) {
		auto& classInfo = classInfoPair.second;
		header.AddNewClass(&classInfo);
	}

	// done
	std::ofstream file(fileName.c_str(), std::ios::out | std::ios::trunc);
	file << header.ToString();

}

#include "LuaModFunctionAPI.h"

void SymbolExporter::ExportCHeaderAPILua(std::string saveFileName)
{
	log("exporting Game Function API for lua native");

	//CHeaderFileBuilder header{};
	//std::vector<ClassType> classTypes;
	//header.SaveToFile(saveFileName);
	log("exported all function api for lua native");
}
