#pragma once
#include <sol/sol.hpp>

struct LuaBindingPrivate {
	static void BindingAllFunction(sol::state& lua);
};