#include "GameTypes.h"
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <mutex>
#include <list>

struct EntityList {
	std::unordered_map<Entity*, std::list<Entity*>::iterator> set;
	std::list<Entity*> list;
	std::unordered_map<std::string, Entity*> lookupByUUID;

	void add(void* item) {
		if (item == nullptr) return;
		auto e = (Entity*)item;
		if (set.find(e) == set.end()) {
			list.push_back(e);
			set[e] = std::prev(list.end());
		}
	}

	void remove(void* item) {
		auto e = (Entity*)item;
		auto it = set.find(e);
		if (it != set.end()) {
			list.erase(it->second);
			set.erase(it);
			if (e->uuid.IsEmpty() == false) {
				auto uuidString = e->GetUUIDString();
				if (lookupByUUID.find(uuidString) != lookupByUUID.end())
					lookupByUUID.erase(uuidString);
			}
		}
	}

	Entity* get(std::string uuid) {
		if (MyUUID::IsEmptyString(uuid))
			return nullptr;

		if (lookupByUUID.find(uuid) != lookupByUUID.end())
			return lookupByUUID[uuid];

		// try loop get
		for (auto e : list) {
			if (e->GetUUIDString() == uuid) {
				lookupByUUID[uuid] = e;
				return e;
			}
		}

		return nullptr;
	}

	size_t size() {
		return list.size();
	}
};
