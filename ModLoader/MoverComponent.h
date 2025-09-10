#pragma once
#include "GameTypes.h"

struct MoverComponent : public EntityComponent
{
	MyVec3Float GetVelocity();
};

