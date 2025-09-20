#include "LuaMathBinding.h"
#include "GameTypes.h"

struct DSPlayerEntity;
#define nil nullptr
Vec3 EntityGetPosition(DSPlayerEntity* player) {
	if (player == nil) return Vec3(0, 0, 0);

	auto ent = (Entity*)player;
	return ent->worldTransform.position;
}
void LuaMathBinding::Bind(sol::state& lua)
{
	lua.new_usertype<Vec3>("Vec3",
		sol::constructors<
		Vec3(),
		Vec3(double, double, double)
		>(),
		"magnitude", sol::property(&Vec3::GetMagnitude),
		"normalize", sol::property(&Vec3::GetNormalize),
		"x", &Vec3::x,
		"y", &Vec3::y,
		"z", &Vec3::z
	);

	auto entityTable = lua.create_table();
	entityTable["GetPosition"] = &EntityGetPosition;
	//entityTable["GetSpeed"] = &Entity::GetLinearSpeed;
	//entityTable["GetVelocity"] = &Entity::GetVelocity;
	//entityTable["GetHealth"] = &Entity::GetHealth;
	lua["Entity"] = entityTable;

}
