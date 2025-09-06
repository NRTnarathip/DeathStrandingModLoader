#pragma once
#include <vector>
#include <mutex>
#include <unordered_set>
#include "GameTypes.h"

struct RTTIObject;

class ObjectScanner
{
public:
	static ObjectScanner* Instance() {
		static ObjectScanner instance;
		return &instance;
	}

	EntityList entities;
};

