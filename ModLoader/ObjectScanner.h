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


public:
	static ObjectScanner* Instance() {
		static ObjectScanner instance;
		return &instance;
	}

	ObjectScanner();
	auto GetLock() { return std::unique_lock<std::recursive_mutex>(mtx); }
	EntityList entityList;

	void AddRTTIUnsafe(RTTI* o);
	bool IsRTTIUnsafe(RTTI* o);
	bool IsRTTIObjectExist(void* o);
	std::set<RTTI*>& GetTypes();

	void AddRTTIObjectInstance(RTTI* rtti, void* o);
	void RemoveRTTIObjectInstance(RTTI* rtti, void* o);
	void AddEntity(Entity* e);
	void RemoveEntity(Entity* e);
	RTTI* TryGetObjectTypeUnsafe(void* o);
	RTTI* TryGetObjectType(void* o);
	const char* TryGetObjectInstanceKind(void* o);
	const char* TryGetObjectTypeName(void* o);
	inline bool IsRTTIObjectInstanceUnsafe(void* o) {
		return objInstanceSet.find(o) != objInstanceSet.end();
	}
};

