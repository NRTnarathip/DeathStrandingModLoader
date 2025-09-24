#include "LuaBindingPrivate.h"
#include "DecimaNative.h"

template<typename T>
struct ArrayLuaNative {
	ArrayLuaNative() {};
	uint32_t count;
	uint32_t reserve;
	T** items = nullptr;
	T* At(int index) {
		if (index < 0 || index >= count)
			return nullptr;
		return items[index];
	}
};
#define Array ArrayLuaNative

//#include "GameAPIGenerated.h"
void LuaBindingPrivate::Bind(sol::state& lua)
{
#ifdef LUA_GAME_API_IMPORTED
	BindingFunctions(lua);
#endif
}
