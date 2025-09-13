#pragma once
#include "GameTypes.h" 
#include "EntityList.hpp" 
#include <unordered_set>

class ObjectScanner
{
private:
	std::recursive_mutex mtx;
	std::set<const RTTI*> rttiSet;
	std::set<void*> objInstanceSet;
	std::unordered_map<void*, const RTTI*> rttiLookupByObject;


public:
	static ObjectScanner* Instance() {
		static ObjectScanner instance;
		return &instance;
	}

	ObjectScanner();
	auto GetLock() { return std::unique_lock<std::recursive_mutex>(mtx); }
	EntityList entityList;

	void AddRTTIUnsafe(const RTTI* o);
	bool IsRTTIUnsafe(const RTTI* o);
	bool IsRTTIObjectInstance(void* o);
	std::set<const RTTI*>& GetTypes();

	std::set<void*>& GetObjectInstances() { return objInstanceSet; }
	void AddRTTIObjectInstance(const RTTI* rtti, void* o);
	void AddRTTIObjectInstanceUnsafe(const RTTI* rtti, void* o);
	void RemoveRTTIObjectInstance(const RTTI* rtti, void* o);
	void AddEntity(Entity* e);
	void RemoveEntity(Entity* e);
	const RTTI* TryGetObjectTypeUnsafe(void* o);
	const RTTI* TryGetObjectType(void* o);
	const char* TryGetObjectInstanceKind(void* o);
	const char* TryGetObjectTypeName(void* o);
	inline bool IsRTTIObjectInstanceUnsafe(void* o) {
		return objInstanceSet.find(o) != objInstanceSet.end();
	}
};

