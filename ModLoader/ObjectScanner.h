#pragma once
#include "GameTypes.h" 
#include "EntityList.hpp" 
#include <unordered_set>

class ObjectScanner
{
private:
	std::recursive_mutex mtx;
	std::set<RTTI*> rttiSet;
	std::set<void*> objInstanceSet;
	std::unordered_map<void*, RTTI*> rttiLookupByObject;

	inline bool IsRTTIObjectExistUnsafe(void* o) {
		return objInstanceSet.find(o) != objInstanceSet.end();
	}

public:
	static ObjectScanner* Instance() {
		static ObjectScanner instance;
		return &instance;
	}

	ObjectScanner();
	auto GetLock() { return std::unique_lock<std::recursive_mutex>(mtx); }
	EntityList entityList;

	void AddRTTI(RTTI* o);
	bool IsRTTIExist(RTTI* o);
	bool IsRTTIObjectExist(void* o);
	void AddRTTIObjectInstance(RTTI* rtti, void* o);
	void RemoveRTTIObjectInstance(RTTI* rtti, void* o);
	void AddEntity(Entity* e);
	void RemoveEntity(Entity* e);
	const char* TryGetObjectTypeName(void* o);
};

