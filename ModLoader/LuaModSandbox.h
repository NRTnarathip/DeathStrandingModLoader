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
	Stop,
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
	std::vector<std::unique_ptr<LuaThreadCoroutine>> m_threadWorkingList;
	std::vector<std::unique_ptr<LuaThreadCoroutine>> m_threadNewList;

	sol::state m_solState;
	std::string m_code;
	LuaModStatus m_currentStatus;
	void SetNewStatus(LuaModStatus newStatus);

	std::chrono::steady_clock::time_point m_restartTimePoint;
	std::chrono::steady_clock::time_point m_stopTimepoint;

	// Global Static API
	static int LuaAwait(int ms);

	// Global Instance API
	void LuaCreateThread(sol::function fn);
	void TryCleanupThreadList();
	void CreateNewEnvrionment();
	void LuaImport(std::string path);

public:

	void Restart();
	void Stop();
	bool RunMainCodeOnce(std::string code);
	void UpdateTick();
	bool IsIdle() const;
	bool IsRunning() const;
	bool IsStop() const;
	bool IsError() const;
	LuaModStatus GetStatus() const { return m_currentStatus; }
	size_t GetRunDurationMs();

};

