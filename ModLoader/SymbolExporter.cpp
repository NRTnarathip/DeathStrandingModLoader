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
	std::unordered_map<std::string, ClassType*> classMap;
	std::set<std::string> typeNameSet;
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
			auto newClassInfo = new ClassType();
			newClassInfo->name = className;
			classMap[className] = newClassInfo;
		}

		auto classInfo = classMap[className];
		//add function signature
		classInfo->AddFunction(&fn);
		typeNameSet.insert(fn.returnType->name);
		for (auto param : fn.parameters) {
			typeNameSet.insert(param->name);
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
