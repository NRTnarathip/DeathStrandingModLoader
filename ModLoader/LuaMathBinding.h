#pragma once
#include <sol/sol.hpp>

class LuaMathBinding {
public:
	static void Bind(sol::state& lua);
};

