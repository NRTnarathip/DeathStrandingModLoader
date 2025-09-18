#pragma once
#include "GameTypes.h"

struct MoverComponent : public EntityComponent
{
	MyVec3Pack GetVelocity();
};

