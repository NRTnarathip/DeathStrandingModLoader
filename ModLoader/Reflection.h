#pragma once
#include <iostream>
#include <set>
#include <unordered_map>
#include "GameTypes.h"

//forward 
struct RTTI;
struct ClassType;

class BaseType {
public:
	std::string name;
	virtual const char* ToString() {
		return name.c_str();
	}
};

class SignatureType : public BaseType {
public:
	std::string modifier;
	bool isConst;
	bool isPointer;
	bool isPointerToPointer;
	bool isRef;
	bool hasModifier;
	const RTTI* rtti;
	std::string signature;
};

class ParameterType : public SignatureType {
public:

};

class ReturnType : public SignatureType {
public:

};


class FunctionType : public BaseType {
public:
	ExportedSymbolGroup* symbolGroup;
	ExportedSymbolMember* symbolMember;
	std::string exportName; // unique name
	void* address;
	uintptr_t rva;
	ReturnType* returnType;
	bool isReturnVoid;
	std::vector<ParameterType*> parameters;
	// full name, example: void GetEntityPosition(Entity* param1, Vec3* param2)
	std::string signature;
	bool isInstanceFunction;
	SignatureType* instanceInfo;
	size_t hash;
	std::string hashString;


	const char* ToString() { return signature.c_str(); }
	int GetParamCount() const { return parameters.size(); }
	std::string GetInstanceTypeName() const { return instanceInfo ? instanceInfo->name : ""; }
};

class ClassType {
private:
	std::unordered_map<std::string, FunctionType*> m_functionMap;
	std::set<FunctionType*> m_functionSet;
	std::vector<FunctionType*> m_functionVector;
public:
	std::string name;
	// Key: export name
	FunctionType* AddFunction(FunctionType* fun);
	FunctionType* GetFunctionByName(std::string name);
	FunctionType* GetFunctionByExportName(std::string exportName);
	std::vector<FunctionType*> GetFunctions() { return m_functionVector; }

	static std::string BuildClassName(FunctionType* fun);
};

class Reflection
{
public:
	static std::unordered_map<std::string, SignatureType*> g_typeMap;
	static SignatureType* BuildType(ExportedSymbolGroup* symbolGroup,
		ExportedSymbolMember* symbolMember,
		ExportedSymbolMember::Signature* signaturePart);
	static SignatureType* GetType(std::string typeSignatureName);
	static SignatureType* RegisterType(SignatureType* type);
	static FunctionType* BuildFunction(ExportedSymbolGroup* symbolGroup,
		ExportedSymbolMember* symbolMember, FunctionType* funPtrInOut);
	static FunctionType* BuildFunction(ExportedSymbolGroup* symbolGroup,
		ExportedSymbolMember* symbolMember);
	static std::string BuildFunctionSignatureName(FunctionType* func);
	static std::string GetFunctionExportName(ExportedSymbolMember* symbolMember);
	static size_t BuildFunctionHash(std::string exportName);
};

