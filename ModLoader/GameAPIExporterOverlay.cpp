#include "GameAPIExporterOverlay.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "DecimaNative.h"
#include <algorithm>
#include "utils.h"
#include <iostream>
#include <string>
#include <regex>
#include <sol/sol.hpp>

namespace ExampleAPI {
	struct ExamplePlayerEntity {
		static Entity* GetLocalPlayerEntity() {
			typedef Entity* (*FnType)();
			static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExamplePlayerEntity_GetLocalPlayerEntity")->address);
			return fn();
		}
		const char* GetPlayerName() {
			return "Hello World";
		}
	};
	static void BindingGameAPI(sol::state& lua) {
		lua.new_usertype<ExamplePlayerEntity>("ExGetLocalPlayerEntity",
			sol::no_constructor,
			// member functions
			"ApplyInventorySetting", &ExamplePlayerEntity::GetLocalPlayerEntity,
			// static functions
			"GetPlayerName", &ExamplePlayerEntity::GetPlayerName
		);
	}
}

struct LuaGameBindingGenerator {
	using Lines = std::vector<std::string>;
	std::stringstream m_ss;
	std::string m_currentTab = "";
	const std::string tab4 = "    ";

	bool IsSkipLuaBindingType(std::string typeName) {
		static std::set<std::string> g_skipTypes = {
			"RTTI", "RTTIObject", "RTTIRefObject", "RTTIGroup",
			"String",
			"GGUUID",
			"WorldTransform",
			"Mat44",
			"Vec3", "Vec3Pack",
			"Vec4", "Vec4Pack",
			"Entity",
			"Player",
			"Camera",
			"Spawnpoint",
			"Sequence",
			"EntityResource",
			"EntityComponent",
			"AttackEventManager",
			"DecimaEngine",
			"PathHelperNodeComponent",
			"AssertReporterGroup",
			"EDSEvaluationType",
			"Controller",
			"AttackEventLink",
		};
		return g_skipTypes.contains(typeName);
	}

	void AddLine(std::string line = "") {
		m_ss << m_currentTab << line << "\n";
	}
	void PushTab() {
		m_currentTab += tab4;
	}
	void PopTab() {
		if (m_currentTab.empty())
			return;
		m_currentTab = m_currentTab.substr(0, m_currentTab.size() - tab4.size());
	}
	void Comment(std::string line) {
		AddLine("// " + line);
	}

	Lines GenCallFunctionAPILines(FunctionType* fn) {
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
		// fix "param1," redefine
		line2FnType = std::regex_replace(line2FnType, std::regex("param"), "p");

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
		lines.push_back(tab4 + line2FnType);
		lines.push_back(tab4 + line3GetFnAPI);
		lines.push_back(tab4 + line4ReturnCallFn);
		lines.push_back("}");
		return lines;
	}
	void GenerateClassNoRecursive(ClassType* classType) {
		auto className = classType->name;
		AddLine("struct " + className + " {");
		PushTab();

		// define fields
		auto typeSize = classType->GetTypeSize();
		AddLine("// members");
		AddLine(std::format("uint8_t m_pad[0x{:x}];", typeSize));

		// just sort function by name
		auto functionsSort = classType->GetFunctions();
		std::sort(functionsSort.begin(), functionsSort.end(),
			[](FunctionType* a, FunctionType* b) {
				return a->name < b->name;
			});

		// define all function
		AddLine("// functions");
		for (auto& fn : functionsSort) {
			auto lines = GenCallFunctionAPILines(fn);
			for (auto line : lines)
				AddLine(line);
		}

		PopTab();
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
		AddLine("#define LUA_GAME_API_IMPORTED true");
		//include
		Include("<cstdint>");
		Include("<sol/sol.hpp>");
		AddLine();


		// Build All ClassType 
		auto functions = DecimaNative::GetAllGameFunctionAPI();
		std::unordered_map<std::string, ClassType> allClassMap;
		std::unordered_map<std::string, SignatureType*> allTypeMap;
		for (auto& funcPair : functions) {
			GameFunctionAPI* funcPtr = funcPair.second;
			auto& fn = *funcPtr;
			auto className = ClassType::BuildClassName((FunctionType*)&fn);

			if (className.empty())
				className = "DecimaEngine"; //default name

			// create new
			if (allClassMap.find(className) == allClassMap.end()) {
				ClassType newClassInfo;
				newClassInfo.name = className;
				newClassInfo.rtti = fn.instanceRTTI;
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

		// apply class.rtti 
		for (auto& classPair : allClassMap) {
			auto& c = classPair.second;
			if (allTypeMap.contains(c.name)) {
				c.rtti = allTypeMap[c.name]->rtti;
			}
		}

		std::set<std::string> allForwardTypeMap;
		std::set<std::string> isClassGenerating;

		// find all signature type forward
		for (auto& typePair : allTypeMap) {
			auto& t = typePair.second;
			if (t->isPrimitive)
				continue;
			if (IsSkipLuaBindingType(t->name))
				continue;

			auto rtti = t->rtti;
			if (rtti) {
				if (rtti->mKind == RTTIKind::Enum)
					//|| rtti->mKind == RTTIKind::Container)
					continue;
			}

			allForwardTypeMap.insert(t->name);
		}

		// find all forward class
		for (auto& typePair : allClassMap) {
			auto& c = typePair.second;
			if (IsSkipLuaBindingType(c.name))
				continue;

			allForwardTypeMap.insert(c.name);
		}

		// forward struct now!!
		Comment("Define All Forward Type Here!");
		for (auto& typeName : allForwardTypeMap) {
			AddLine("struct " + typeName + ";");
		}

		// generate Array & Enum types
		for (auto& typePair : allTypeMap) {
			auto& t = typePair.second;
			if (t->isPrimitive)
				continue;

			if (IsSkipLuaBindingType(t->name))
				continue;

			//  forward type!
			auto rtti = t->rtti;
			if (rtti == nullptr) {
				log("skip type: %s, cause by rtti null!", t->name.c_str());
				continue;
			}

			int typeSize = t->GetTypeSize();
			if (typeSize == 0) {
				log("warn!!, type %s size = 0", t->name.c_str());
				continue;
			}

			switch (rtti->mKind) {
			case RTTIKind::Enum: {
				std::string enumInheritType = "";
				if (typeSize == 1)
					enumInheritType = "char";
				else if (typeSize == 2)
					enumInheritType = "int16_t";
				else if (typeSize == 4)
					enumInheritType = "int";

				AddLine(std::format("enum class {} : {}",
					t->name.c_str(), enumInheritType) + " {");
				PushTab();

				auto e = rtti->AsEnum();
				int enumIndex = -1;
				for (auto& enumValue : e->Values()) {
					enumIndex++;

					std::string enumName = enumValue.mName;
					if (enumName.empty())
						enumName = std::format("UnkIndex{}", enumIndex);

					// fix enumName: "_#..."
					enumName = std::regex_replace(enumName, std::regex("_#"), t->name + "Unk_");
					// fix "(  )" char
					enumName = std::regex_replace(enumName, std::regex("\\(([^)]+)\\)"), "");
					// fix ":" char
					enumName = std::regex_replace(enumName, std::regex(":"), "_");
					// fix "," char
					enumName = std::regex_replace(enumName, std::regex(","), "");

					// fix empty space
					static std::regex spaceEmpyPattern("\\s+");
					enumName = std::regex_replace(enumName, spaceEmpyPattern, "_");

					int value = enumValue.mValue;
					AddLine(std::format("{} = {},", enumName.c_str(), value));
				}

				PopTab();
				AddLine("};");
				break;
			}
			case RTTIKind::Container: {
				std::string arraySig;
				auto typeName = t->name;
				auto itemTypeNameCharIndex = t->name.rfind("_") + 1;
				auto itemTypeName = typeName.substr(itemTypeNameCharIndex, typeName.size());

				if (typeName.starts_with("Array_cptr")) {
					arraySig = std::format("Array<const {}*>", itemTypeName.c_str());
				}
				else {
					arraySig = std::format("Array<{}>", itemTypeName.c_str());
				}

				AddLine(std::format("#define {} {}",
					t->name.c_str(), arraySig.c_str()));
				break;
			}
			default: {
				// forward type
				bool shouldDefineForwardType = true;
				if (allClassMap.contains(t->name)) {
					auto classInfo = allClassMap[t->name];
					if (classInfo.GetFunctionCount() > 0)
						shouldDefineForwardType = false;
				}

				if (shouldDefineForwardType) {
					if (!IsSkipLuaBindingType(t->name)) {
						AddLine("#ifndef " + t->name);
						auto typeNameProxy = t->name + "Proxy";
						AddLine("struct " + typeNameProxy + ";");
						AddLine("#define " + t->name + " " + typeNameProxy);
						AddLine("#endif");
					}
				}
				break;
			}
			}
			auto rttiKind = t->rtti->GetKindName();
		}

		AddLine();


		// Building GameAPI
		Include("DecimaNative.h"); // override type on namespace GameType
		Comment("Define All Class Here!");
		std::function<void(ClassType*)> GenerateClassRecursive = [&](ClassType* classTypePtr) {
			// already gen class!!
			if (isClassGenerating.contains(classTypePtr->name))
				return;

			auto& classType = *classTypePtr;
			if (IsSkipLuaBindingType(classType.name))
				return;

			isClassGenerating.insert(classType.name);
			// get all type dependency in class
			std::set<std::string> allTypeInClass;
			for (auto& fn : classType.GetFunctions()) {
				allTypeInClass.insert(fn->returnType->name);
				for (auto& p : fn->parameters)
					allTypeInClass.insert(p->name);
			}

			// build order by class name dependencies
			for (auto& typeDependencyName : allTypeInClass) {
				// don't generate current class
				if (typeDependencyName == classType.name)
					continue;

				//not found class
				if (!allClassMap.contains(typeDependencyName))
					continue;

				if (!isClassGenerating.contains(typeDependencyName)) {
					ClassType* classDependency = &allClassMap.at(typeDependencyName);
					GenerateClassRecursive(classDependency);
				}
			}

			// build current class
			GenerateClassNoRecursive(&classType);
			};

		for (auto& classTypePair : allClassMap) {
			auto& classType = classTypePair.second;
			GenerateClassRecursive(&classType);
		}


		Comment("Sol2 lua binding all class & functions");
		AddLine("static void BindingFunctions(sol::state& lua) {");
		PushTab();


		for (auto& classPair : allClassMap) {
			auto& classType = classPair.second;
			auto className = classType.name.c_str();
			if (IsSkipLuaBindingType(className))
				continue;

			auto functions = classType.GetFunctions();
			AddLine(std::format("lua.new_usertype<{}>(\"{}\",",
				className, className));
			PushTab();
			int fnIndex = 0;
			for (auto fn : functions) {
				std::string fnBindingFullName = std::string(className) + "::" + fn->name;
				std::string line = std::format("\"{}\", &{},", fn->name, fnBindingFullName);

				fnIndex++;
				if (fnIndex == functions.size()) { // remove last comma
					line = line.substr(0, line.size() - 1);
				}

				AddLine(line);
			}
			// remove last comma
			PopTab();
			AddLine(");");
		}

		// End of BindingFunctions
		PopTab();
		AddLine("}");

		//PopTab();
		//AddLine("}");
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
