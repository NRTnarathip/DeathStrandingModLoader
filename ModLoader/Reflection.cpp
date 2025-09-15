#include "Reflection.h"
#include <sstream>
#include "utils.h"
#include "GameTypes.h"
#include <unordered_map>

std::string trim(const std::string& str) {
	if (str.empty()) return "";
	const std::string whitespace = " \t\n\r\f\v";
	size_t first = str.find_first_not_of(whitespace);
	if (std::string::npos == first)
		return "";

	size_t last = str.find_last_not_of(whitespace);
	return str.substr(first, (last - first + 1));
}

// static variables
std::unordered_map<std::string, SignatureType*> Reflection::g_typeMap;


SignatureType* Reflection::BuildType(ExportedSymbolGroup* symbolGroup, ExportedSymbolMember* symbolMember,
	ExportedSymbolMember::Signature* signaturePart)
{
	auto typePtr = new SignatureType();
	SignatureType& typeInfo = *typePtr;
	typeInfo.name = signaturePart->mTypeName;
	// remove empty space, example: " const * tchar"
	typeInfo.modifier = trim(signaturePart->mModifiers);
	typeInfo.hasModifier = !typeInfo.modifier.empty();
	typeInfo.rtti = signaturePart->mType;

	typeInfo.isConst = typeInfo.modifier.find("const") != std::string::npos;
	typeInfo.isRef = typeInfo.modifier.find("&") != std::string::npos;
	if (!typeInfo.isRef) {
		typeInfo.isPointerToPointer = typeInfo.modifier.find("* *") != std::string::npos;
		if (!typeInfo.isPointerToPointer)
			typeInfo.isPointer = typeInfo.modifier.find("*") != std::string::npos;
	}

	std::string& signature = typeInfo.signature;

	signature = signature + typeInfo.name;
	if (typeInfo.isRef)
		signature = signature + "&";
	else if (typeInfo.isPointerToPointer)
		signature = signature + "**";
	else if (typeInfo.isPointer)
		signature = signature + "*";

	if (typeInfo.isConst)
		signature = "const " + signature;

	// optional
	RegisterType(typePtr);

	// done
	return typePtr;
}

SignatureType* Reflection::GetType(std::string typeSignatureName)
{
	if (g_typeMap.find(typeSignatureName) != g_typeMap.end())
		return g_typeMap[typeSignatureName];
	return nullptr;
}

SignatureType* Reflection::RegisterType(SignatureType* type)
{
	auto existType = GetType(type->signature);
	if (existType) return  nullptr;

	g_typeMap[type->signature] = type;
	return type;
}


FunctionType* Reflection::BuildFunction(ExportedSymbolGroup* symbolGroup, ExportedSymbolMember* symbolMember,
	FunctionType* funPtrInOut)
{
	auto& fun = *funPtrInOut;

	// basic data
	fun.symbolMember = symbolMember;
	fun.symbolGroup = symbolGroup;
	auto& langInfo = symbolMember->mLanguages[0];
	fun.name = langInfo.name;
	fun.address = langInfo.address;
	fun.rva = AddrToRva(langInfo.address);
	fun.exportName = GetFunctionExportName(symbolMember);
	fun.hash = BuildFunctionHash(fun.exportName);
	fun.hashString = std::format("0x{:x}", fun.hash);


	// set signature
	// return type
	auto& funSignatures = langInfo.signatureArray;
	ReturnType* returnType = (ReturnType*)BuildType(symbolGroup, symbolMember, &funSignatures[0]);
	fun.returnType = returnType;
	fun.isReturnVoid = fun.returnType->name == "void";

	// set params type
	for (int i = 1; i < funSignatures.size(); i++) {
		auto& paramSig = funSignatures[i];
		auto paramType = (ParameterType*)BuildType(symbolGroup, symbolMember, &paramSig);
		fun.parameters.push_back(paramType);
	}

	// build instance or virtual function info
	static std::vector<const char*> instanceExportedWords = {
		"_Exported"
	};
	if (IsContainsCaseSensitive(fun.exportName, instanceExportedWords)) {
		// get instance type param1
		if (fun.GetParamCount() > 0) {
			fun.isInstanceFunction = true;
			fun.instanceInfo = (SignatureType*)fun.parameters[0];
			// remove param1, cause it's instance object
			fun.parameters.erase(fun.parameters.begin());
		}
	}

	// final decorate
	fun.signature = BuildFunctionSignatureName(&fun);


	// debug
	//log("fun signature: %s", fun.ToString());
	//log("fun name: %s", fun.name.c_str());
	//log("fun export name: %s", fun.exportName.c_str());

	return funPtrInOut;
}

FunctionType* Reflection::BuildFunction(ExportedSymbolGroup* symbolGroup, ExportedSymbolMember* symbolMember) {
	auto funPtr = new FunctionType();
	return BuildFunction(symbolGroup, symbolMember, funPtr);
}

std::string Reflection::BuildFunctionSignatureName(FunctionType* funPtr)
{
	std::stringstream sigNameStream;

	FunctionType& fun = *funPtr;

	sigNameStream << fun.returnType->signature << " " << fun.name;

	int paramCount = fun.parameters.size();
	sigNameStream << "(";
	for (int i = 0; i < paramCount; i++) {
		auto param = fun.parameters[i];
		sigNameStream << param->signature;
		sigNameStream << " param" << i + 1;
		if (i < paramCount - 1) // add comma
			sigNameStream << ", ";

	}
	sigNameStream << ")";

	auto sigName = sigNameStream.str();

	// debug
	//log("sig name: %s", sigName.c_str());

	return sigName;
}

std::string Reflection::GetFunctionExportName(ExportedSymbolMember* symbolMember)
{
	std::string exportName = symbolMember->mSymbolName;
	return exportName;
}

size_t Reflection::BuildFunctionHash(std::string exportName)
{
	if (exportName.empty()) {
		log("Error: try BuildFunctionHash exportName empty!");
		PrintStackTrace();
		return 0;
	}

	std::hash<std::string> hasher;
	size_t hashValue = hasher(exportName);
	return hashValue;
}

FunctionType* ClassType::AddFunction(FunctionType* fun)
{
	auto fn = GetFunctionByExportName(fun->exportName);
	if (fn) return nullptr; //already added

	m_functionMap[fun->exportName] = fun;
	m_functionSet.insert(fun);
	m_functionVector.push_back(fun);
	return fn;
}

FunctionType* ClassType::GetFunctionByExportName(std::string exportName)
{
	if (m_functionMap.find(exportName) != m_functionMap.end())
		return m_functionMap[exportName];
	return nullptr;
}

std::string ClassType::BuildClassName(FunctionType* fun)
{
	if (fun->isInstanceFunction)
		return fun->instanceInfo->name;

	auto mNamespace = fun->symbolGroup->mNamespace;
	if (mNamespace) {
		return StringRemove(mNamespace, "Symbols");
	}

	return "";
}

FunctionType* ClassType::GetFunctionByName(std::string name)
{
	std::vector<FunctionType*> funFoundList;

	// search fun
	for (auto& funPair : m_functionMap) {
		auto fn = funPair.second;
		if (IsContainsCaseSensitive(fn->name, name)) {
			funFoundList.push_back(fn);
		}
	}

	if (funFoundList.size() == 1)
		return funFoundList[0];

	if (funFoundList.size() > 1) {
		log("Error can't get function name: %s, cause ambiguity", name);
		return nullptr;
	}

	return nullptr;
}

