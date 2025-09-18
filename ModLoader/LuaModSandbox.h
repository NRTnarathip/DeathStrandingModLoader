#pragma once
#include <iostream>
#include <filesystem>
#include <set>
#include <unordered_map>
#include <chrono>
#include <deque>

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>

using namespace std::chrono;

enum LuaModStatus : uint32_t {
	Idle,
	Running,
	Stop,
	Error,
};

// forward
struct LuaModSandbox;


struct LuaModLog {
	using OnLuaNativeLogCallback_t = std::function<void(LuaModSandbox* sandbox, std::string logLine)>;
	static std::vector<OnLuaNativeLogCallback_t> g_onLuaLogCallbacks;
	std::deque<std::string> logLines;
	int maxLines = 1000;
	void Push(std::string& line) {
		logLines.push_back(line);

		// clear old lines
		while (logLines.size() > maxLines) {
			logLines.pop_front();
		}
	}
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

	std::string m_id;
	sol::state m_lua;
	std::string m_code;
	LuaModStatus m_currentStatus;
	void SetNewStatus(LuaModStatus newStatus);
	LuaModLog m_modLog;

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
	LuaModSandbox();
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
	LuaModLog* GetModLog() { return &m_modLog; }
	const char* GetID() const { return m_id.c_str(); };
};

