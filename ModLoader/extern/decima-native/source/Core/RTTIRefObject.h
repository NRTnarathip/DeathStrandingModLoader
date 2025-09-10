#pragma once

#include "Core/RTTIObject.h"
#include "PCore/UUID.h"
#include "Offsets.h"

class RTTIRefObject : public RTTIObject {
public:
	GGUUID mObjectUUID;
	uint32_t mRefCount;
};
