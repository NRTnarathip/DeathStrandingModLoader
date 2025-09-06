#pragma once
#include <vector>
#include <mutex>
#include <unordered_set>

struct Vec3 {
	double x, y, z;
};

struct WorldTransform {
	Vec3 position; // size 24bit
	// rotMatrix size 36bit
};

struct Entity {
	// fields
	char gap[0xc8];
	Vec3 position;

	// function
	double GetLinearSpeed();
};

class EntityList {
public:
	mutable std::recursive_mutex mtx;
	std::unordered_set<Entity*> entities;
	void push(void* value) {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		entities.insert((Entity*)value);
	}

	size_t size() {
		std::lock_guard<std::recursive_mutex> lock(mtx);
		return entities.size();
	}
};

