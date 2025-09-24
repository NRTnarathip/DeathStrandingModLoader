#include "LuaGameTypeBinding.h"
#include "GameTypes.h"

#define nil nullptr
Vec3 GetEntityPosition(Entity* e) {
	if (e == nil)
		return Vec3{};
	return e->worldTransform.position;
}

void LuaGameTypeBinding::Bind(sol::state& lua)
{
	lua.new_usertype<Entity>("Entity",
		"health", sol::property(&Entity::GetHealth),
		"maxHealth", sol::property(&Entity::GetMaxHealth),
		"velocity", sol::property(&Entity::GetVelocity),
		"speed", sol::property(&Entity::GetLinearSpeed),
		"position", sol::property(&Entity::GetPosition)
	);

	lua.new_usertype<FRGBAColor>("FRGBAColor",
		sol::constructors<FRGBAColor()>(),
		"r", &FRGBAColor::r,
		"g", &FRGBAColor::g,
		"b", &FRGBAColor::b,
		"a", &FRGBAColor::a
	);

	lua["GetEntityPosition"] = &GetEntityPosition;
}
