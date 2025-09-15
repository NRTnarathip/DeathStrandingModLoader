#pragma once
#include <iostream>
#include <filesystem>
#include <set>
#include <unordered_map>

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>

enum LuaModStatus : uint32_t {
	Idle,
	Running,
	Error,
};

class LuaModSandbox {
public:
	LuaModStatus status;
	sol::state lua;
	std::string code;

	void Setup();
	bool Run(std::string& code);
	bool IsIdle() const;
	bool IsRunning() const;
	bool IsError() const;

};

