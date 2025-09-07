#include "GameTypes.h"
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <mutex>
#include <list>

struct EntityList {
	mutable std::recursive_mutex mtx;
	std::unordered_map<Entity*, std::list<Entity*>::iterator> set;
	std::list<Entity*> list;

	void add(void* item) {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		auto e = (Entity*)item;
		if (set.find(e) == set.end()) {
			list.push_back(e);
			set[e] = std::prev(list.end());
		}
	}

	void remove(void* item) {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		auto e = (Entity*)item;
		auto it = set.find(e);
		if (it != set.end()) {
			list.erase(it->second);
			set.erase(it);
		}
	}

	size_t size() {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		return list.size();
	}
};
