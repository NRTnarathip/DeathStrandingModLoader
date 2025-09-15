#pragma once
#include <sol/sol.hpp>

class LuaModFunctionAPI {
public:
	static void Log(sol::variadic_args args);
	static void Wait(int ms);
};