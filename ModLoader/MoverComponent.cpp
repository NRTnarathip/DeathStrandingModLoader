#include "MoverComponent.h"
#include "utils.h"

MyVec3Pack MoverComponent::GetVelocity()
{
	auto vtable = *(void***)(this);
	typedef void (*GetVelocity_t)(MoverComponent* self, void* outVelocity);
	static GetVelocity_t fn = (GetVelocity_t)vtable[0x19];
	MyVec4Pack velo4;
	fn(this, &velo4);
	MyVec3Pack velo3 = { velo4.x, velo4.y, velo4.z };
	return velo3;
}
