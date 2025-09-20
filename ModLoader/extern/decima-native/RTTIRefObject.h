#pragma once

#include "RTTIObject.h"
#include "Offsets.h"
#include "GGUUID.h"

class RTTIRefObject : public RTTIObject {
public:
	GGUUID mObjectUUID;
	uint32_t mRefCount;
};
