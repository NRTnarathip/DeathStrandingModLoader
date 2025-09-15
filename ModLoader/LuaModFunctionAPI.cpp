#include "LuaModFunctionAPI.h"
#include <sol/sol.hpp>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <sstream>
#include <cstdint>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdarg>
#include <sstream>
#include <thread>
#include "utils.h"

std::string LuaArgToString(sol::stack_proxy arg) {
	auto type = arg.get_type();
	switch (type) {
	case sol::type::userdata:
		return std::format("userdata@{}", arg.get<void*>());
	case sol::type::lightuserdata:
		return std::format("lightuserdata@{}", arg.get<void*>());
	case sol::type::string:
		return arg.get<std::string>();
	case sol::type::boolean:
		return arg.get<bool>() ? "true" : "false";
	case sol::type::number:
		return std::format("{}", arg.get<double>());
	case sol::type::table: {
		auto tablePtr = arg.get<sol::table>();
		void* ptr = &tablePtr; //unk ptr
		return std::format("table@{}", ptr);
	}
	case sol::type::function: {
		auto fn = arg.get<sol::function>();
		return std::format("func@{}", fn.pointer());
	}
	case sol::type::nil:
		return "nil";
	case sol::type::none:
		return "none";
	case sol::type::poly:
		return std::format("class@{}", arg.get<void*>());
	default:
		return std::format("unknowArgType@{}", (int)type);
	}

}

void LuaModFunctionAPI::Log(sol::variadic_args args) {
	std::stringstream ss;
	int  argCount = args.size();
	for (int argIndex = 0; argIndex < argCount; argIndex++) {
		auto arg = args[argIndex];
		ss << LuaArgToString(arg);
		if (argIndex != argCount - 1) {
			ss << " ";
		}
	}
	log(ss.str().c_str());
}

void LuaModFunctionAPI::Wait(int ms) {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

