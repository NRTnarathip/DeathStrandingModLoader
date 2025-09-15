#pragma once

#include "RTTIObject.h"
#include "UUID.h"
#include "Offsets.h"

class RTTIRefObject : public RTTIObject {
public:
	GGUUID mObjectUUID;
	uint32_t mRefCount;
};
