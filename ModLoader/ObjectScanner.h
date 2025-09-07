#pragma once
#include "GameTypes.h" 
#include "EntityList.hpp" 

class ObjectScanner
{
public:
	static ObjectScanner* Instance() {
		static ObjectScanner instance;
		return &instance;
	}

	ObjectScanner();

	EntityList entityList;
	void ScanAllObject();
};

