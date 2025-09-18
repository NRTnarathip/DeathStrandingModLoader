#include "LuaBindingPrivate.h"
// #include "GameAPIGenerated.h"

void LuaBindingPrivate::BindingAllFunction(sol::state& lua)
{
#ifdef LUA_GAME_API_IMPORTED
	BindingFunctions(lua);
#endif
}
