#include "LuaModSandbox.h"
#include "DecimaNative.h"
#include "utils.h"
#include "LuaModFunctionAPI.h"

void LuaModSandbox::Setup()
{
	// load libs
	lua.open_libraries(sol::lib::base, sol::lib::math, sol::lib::table, sol::lib::string);


	// Default API
	lua.set_function("Log", &LuaModFunctionAPI::Log);
	lua.set_function("Wait", &LuaModFunctionAPI::Wait);


	// test map api
	//auto fnGetLocalDSPlayerEntity
	//	= DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetLocalDSPlayerEntity");
	//lua.set_function(fnGetLocalDSPlayerEntity->name, fnGetLocalDSPlayerEntity->address);
}

bool LuaModSandbox::Run(std::string& code)
{
	log("try run code: %s", code.c_str());
	// clear status first!
	if (!IsIdle())
		return false;

	this->code = code;
	try {
		status = LuaModStatus::Running;
		lua.script(code);
		log("run code successfully");
	}
	catch (const sol::error& e) {
		status = LuaModStatus::Error;
		auto errorString = std::format("LuaSandbox Error: {}", e.what());
		log(errorString.c_str());
	}

	return !IsError();
}

bool LuaModSandbox::IsIdle() const {
	return status == LuaModStatus::Idle;
}
bool LuaModSandbox::IsRunning() const {
	return status == LuaModStatus::Running;
}
bool LuaModSandbox::IsError()const {
	return status == LuaModStatus::Error;
}
