#pragma once
#include <iostream>
#include <filesystem>
#include <set>
#include <unordered_map>
#include <chrono>

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>

using namespace std::chrono;

enum LuaModStatus : uint32_t {
	Idle,
	Running,
	Error,
};

struct LuaThreadCoroutine {
	uint32_t id;
	sol::thread thread;
	sol::coroutine co;
	std::chrono::steady_clock::time_point wakeTime;
	bool isRunning = false;
	bool isFinish = false;

	LuaThreadCoroutine();
	bool IsAwaiting();
	bool IsShouldFinish(steady_clock::time_point now);
	void SetNewWaitTime(int waitMs) {
		wakeTime = steady_clock::now() + milliseconds(waitMs);
	}
};

class LuaModSandbox {
private:
	std::vector<LuaThreadCoroutine*> m_threadWorkingList;
	std::vector<LuaThreadCoroutine*> m_threadNewList;
public:
	LuaModStatus status;
	sol::state lua;
	std::string code;

	void SetupEnvrionment();
	bool Run(std::string code);
	void UpdateTick();
	bool IsIdle() const;
	bool IsRunning() const;
	bool IsError() const;


	// Global Static API
	static int Await(int ms);

	// Global Instance API
	void CreateThread(sol::function fn);
	void TryCleanupThreadList();
};

