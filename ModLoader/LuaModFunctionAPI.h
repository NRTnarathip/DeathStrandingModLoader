#pragma once
#include <sol/sol.hpp>

class LuaModFunctionAPI {
public:
	static void Log(sol::variadic_args args);
	static int Await(int ms);
	static void CreateThread(sol::function fnBody);
};