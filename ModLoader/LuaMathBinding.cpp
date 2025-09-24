#include "LuaMathBinding.h"
#include "GameTypes.h"

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
}
