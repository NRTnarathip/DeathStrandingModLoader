#include "GameAPIExporterOverlay.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "DecimaNative.h"
#include <algorithm>
#include "utils.h"

struct LuaGameBindingGenerator {
	using Lines = std::vector<std::string>;
	std::stringstream m_ss;
	std::string m_currentTab = "";
	const std::string tab = "    ";
	void AddLine(std::string line = "") {
		m_ss << m_currentTab << line << "\n";
	}
	void PushTab() {
		m_currentTab += tab;
	}
	void PopTab() {
		if (m_currentTab.empty())
			return;
		m_currentTab = m_currentTab.substr(0, m_currentTab.size() - tab.size());
	}

	// example function api caller
	// line 1
	static Entity* ExGetLocalPlayerEntity() {
		// line 2
		typedef Entity* (*FnType)();
		// line 3
		static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_GetLocalPlayerEntity")->address);
		// line 4
		return fn();
	} // line 5

	Lines GenFunction(FunctionType* fn) {
		// Function
		std::string line1FnDeclare = fn->signature + " {";

		// typedef fn
		std::string fnTypeAllParamSig;
		// added this: void*
		if (fn->isInstanceFunction) {
			fnTypeAllParamSig = fn->GetInstanceTypeName() + "* self";
			if (fn->GetParamCount() > 0) {
				fnTypeAllParamSig += ", ";
			}
		}
		fnTypeAllParamSig += fn->BuildParamSignatures();
		std::string line2FnType = std::format("typedef {} (*FnType)({});",
			fn->returnType->signature.c_str(),
			fnTypeAllParamSig.c_str());

		// func import
		std::string line3GetFnAPI = std::format(
			"static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI(\"{}\")->address);",
			fn->exportName.c_str());

		std::string line4ReturnCallFn = "return fn(";
		std::vector < std::string > line4CallFnParamNames{};
		auto paramCount = fn->GetParamCount();
		if (fn->isInstanceFunction)
			line4CallFnParamNames.push_back("this");

		for (int i = 0; i < paramCount; i++) {
			line4CallFnParamNames.push_back(std::format("param{}", i + 1));
		}

		line4ReturnCallFn += StringConcatComma(line4CallFnParamNames) + ");";

		Lines lines;
		lines.push_back(line1FnDeclare);
		lines.push_back(m_currentTab + line2FnType);
		lines.push_back(m_currentTab + line3GetFnAPI);
		lines.push_back(m_currentTab + line4ReturnCallFn);
		lines.push_back("}");
		return lines;
	}

	void GenClassAndFunctions(ClassType* classType) {
		auto className = classType->name;
		AddLine("struct " + className + " {");
		// just sort function by name
		auto functionsSort = classType->GetFunctions();
		std::sort(functionsSort.begin(), functionsSort.end(),
			[](FunctionType* a, FunctionType* b) {
				return a->name < b->name;
			});

		// added function
		for (auto& fn : functionsSort) {
			auto lines = GenFunction(fn);
			for (auto line : lines)
				AddLine(m_currentTab + line);
		}

		AddLine("};");
		AddLine();
	}

	void Include(std::string name) {
		if (name[0] == '<') {
			AddLine("#include " + name);
		}
		else {
			AddLine("#include \"" + name + "\"");
		}
	}
	void Generate() {
		AddLine("#pragma once");
		AddLine();
		//include
		Include("<cstdint>");
		Include("DecimaNative.h");
		AddLine();


		// generate all class & functions
		auto functions = DecimaNative::GetAllGameFunctionAPI();
		std::unordered_map<std::string, ClassType> allClassMap;
		std::unordered_map<std::string, SignatureType*> allTypeMap;
		for (auto& funcPair : functions) {
			GameFunctionAPI* funcPtr = funcPair.second;
			auto& fn = *funcPtr;
			auto className = ClassType::BuildClassName((FunctionType*)&fn);

			if (className.empty())
				className = "DecimaEngine"; //default name

			if (allClassMap.find(className) == allClassMap.end()) {
				ClassType newClassInfo;
				newClassInfo.name = className;
				allClassMap[className] = newClassInfo;
			}

			// setup class info
			auto& classType = allClassMap[className];
			classType.AddFunction(funcPtr);

			// collect all types
			allTypeMap[fn.returnType->name] = fn.returnType;
			for (auto param : fn.parameters)
				allTypeMap[param->name] = param;
		}


		// build all Declare Type
		AddLine("namespace GameType {");
		PushTab();
		for (auto& typePair : allTypeMap) {
			auto& t = typePair.second;
			if (t->isPrimitive) continue;

			static std::set<std::string> g_typeNameSkipMap = {
				"RTTI",
				"RTTIObject",
				"RTTIRefObject",
				"String",
				"WorldTransform",
				"Vec3", "Vec3Pack",
				"Vec4", "Vec4Pack",
			};
			if (g_typeNameSkipMap.contains(t->name))
				continue;

			int typeSize = GetRTTITypeSize(t->rtti);
			AddLine("struct " + t->name + " {");
			std::string padding = std::format("uint8_t pad[0x{:x}];", typeSize);
			AddLine(tab + padding);
			AddLine("};");
		}
		PopTab();
		AddLine("}");
		AddLine();


		// build all Exported Functions
		// push namespace
		AddLine("namespace GameAPI {");
		PushTab();
		AddLine("using namespace GameType;");
		for (auto& classTypePair : allClassMap) {
			auto& classType = classTypePair.second;
			GenClassAndFunctions(&classType);
		}

		// pop namespace
		PopTab();
		AddLine("}");

	}

	void SaveToFile(std::string fileName) {
		std::ofstream file(fileName.c_str(), std::ios::out | std::ios::trunc);
		auto toString = m_ss.str();
		file << toString;
		file.close();
	}
};

void GenerateLuaGameBindings() {

	LuaGameBindingGenerator gameAPIGen;
	gameAPIGen.Generate();
	// save to file
	gameAPIGen.SaveToFile("GameAPIGenerated.h");
}

void GameAPIExporterOverlay::OnDraw()
{
	auto functions = DecimaNative::GetAllGameFunctionAPI();
	ImGui::Text("Total API: %zu", functions.size());
	if (ImGui::Button("Generate sol2 lua binding header file")) {
		GenerateLuaGameBindings();
	}
}
