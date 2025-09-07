#include "GameTypes.h"
#include <set>
#include <mutex>

struct EntityList {
	mutable std::recursive_mutex mtx;
	std::set<Entity*> entitiesSet;
	void add(void* value) {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		entitiesSet.insert((Entity*)value);
	}
	void remove(void* value) {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		entitiesSet.erase((Entity*)value);
	}

	size_t size() {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		return entitiesSet.size();
	}
};
