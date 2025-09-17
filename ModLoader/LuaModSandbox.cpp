#include "LuaModSandbox.h"
#include "DecimaNative.h"
#include "utils.h"
#include "LuaModFunctionAPI.h"

namespace LuaNative {

	// Utils API
	std::string LuaArgToString(sol::stack_proxy arg) {
		auto type = arg.get_type();
		switch (type) {
		case sol::type::userdata:
			return std::format("userdata@{}", arg.get<void*>());
		case sol::type::lightuserdata:
			return std::format("lightuserdata@{}", arg.get<void*>());
		case sol::type::string:
			return arg.get<std::string>();
		case sol::type::boolean:
			return arg.get<bool>() ? "true" : "false";
		case sol::type::number:
			return std::format("{}", arg.get<double>());
		case sol::type::table: {
			auto tablePtr = arg.get<sol::table>();
			void* ptr = &tablePtr; //unk ptr
			return std::format("table@{}", ptr);
		}
		case sol::type::function: {
			auto fn = arg.get<sol::function>();
			return std::format("func@{}", fn.pointer());
		}
		case sol::type::nil:
			return "nil";
		case sol::type::none:
			return "none";
		case sol::type::poly:
			return std::format("class@{}", arg.get<void*>());
		default:
			return std::format("unknowArgType@{}", (int)type);
		}

	}

	static void LuaLog(sol::variadic_args args) {
		std::stringstream ss;

		// timestamp
		auto now = std::chrono::system_clock::now();
		auto time_t = std::chrono::system_clock::to_time_t(now);
		auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
			now.time_since_epoch()) % 1000;
		auto tm = *std::localtime(&time_t);
		std::string tmFormat = std::format("{:02d}:{:02d}:{:02d}:{:03d}",
			tm.tm_hour, tm.tm_min, tm.tm_sec, ms.count());
		ss << "[LUA][" << tmFormat.c_str() << "] ";

		// main
		int argCount = args.size();
		for (int argIndex = 0; argIndex < argCount; argIndex++) {
			auto arg = args[argIndex];
			ss << LuaArgToString(arg);
			if (argIndex != argCount - 1) {
				ss << " ";
			}
		}

		// log it
		log(ss.str().c_str());
	}


	// Game API
	static void* GetLocalPlayer() {
		log("try get local player..");
		static auto fn = DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetLocalDSPlayerEntity");
		auto result = fn->Call<void*>();
		log("result: %p", result);
		return result;
	}
}


void LuaModSandbox::CreateNewEnvrionment()
{
	// enable libs
	m_solState.open_libraries(sol::lib::base, sol::lib::math,
		sol::lib::table, sol::lib::string);


	// Default API
	m_solState.set_function("Log", LuaNative::LuaLog);
	m_solState.set_function("Import", [this](std::string filePath) {
		this->LuaImport(filePath);
		});
	m_solState.set_function("Await", sol::yielding(LuaAwait));
	m_solState.set_function("CreateThread", [this](sol::function fn) {
		this->LuaCreateThread(fn);
		});

	// Alias
	m_solState["Wait"] = m_solState["Await"];


	// Setup Game API
	m_solState.set_function("GetLocalPlayer", LuaNative::GetLocalPlayer);
}

void LuaModSandbox::LuaImport(std::string path)
{
	log("try importing lua file: %s", path);


	log("imported lua file: %s", path);
}

void LuaModSandbox::Restart()
{
	// setup env
	SetNewStatus(LuaModStatus::Running);
	CreateNewEnvrionment();
}

void LuaModSandbox::Stop()
{
	if (!IsRunning()) {
		log("can't stop mod because is not running");
		return;
	}

	SetNewStatus(LuaModStatus::Stop);

	log("stopped sandbox!");
}

bool LuaModSandbox::RunMainCodeOnce(std::string code)
{
	log("try run main code...");
	// clear status first!
	if (!IsRunning()) {
		log("error can't run code!, mod are not Running");
		return false;
	}

	try {
		this->m_code = code;
		SetNewStatus(LuaModStatus::Running);
		log("try run sol::script()..");
		m_solState.script(code);
		log("run sol::script() successfully");
	}
	catch (const sol::error& e) {
		SetNewStatus(LuaModStatus::Error);
		auto errorString = std::format("LuaSandbox Error: {}", e.what());
		log(errorString.c_str());
	}

	return IsRunning();
}

void LuaModSandbox::UpdateTick()
{
	//log("try lua sandbox update..");
	if (IsStop() || IsError()) {
		// don't update any thing
		return;
	}

	try {
		for (auto& newThreadSafePtr : m_threadNewList) {
			auto t = newThreadSafePtr.get();
			m_threadWorkingList.push_back(std::move(newThreadSafePtr));
			log("added thread: %d to working", t->id);
		}
		m_threadNewList.clear();

		const auto now = steady_clock::now();

		// update all thread working list
		for (auto& threadSafePtr : m_threadWorkingList) {
			auto t = threadSafePtr.get();
			auto& co = t->co;

			//log("try update thread: %d", t->id);
			if (!t->isFinish && t->IsAwaiting() && now >= t->wakeTime) {
				// mark is running
				if (t->isRunning == false)
					t->isRunning = true;

				// reset first!
				t->wakeTime = steady_clock::time_point();

				//log("calling co: %d", t->id);
				sol::protected_function_result returnResult = co();
				//log("called result return count: %d", returnResult.return_count());

				// check error: return result invalid
				auto coStatus = co.status();
				if (!returnResult.valid()) {
					sol::error err = returnResult;
					log("Coroutine error: ", err.what());
					t->isFinish = true;
				}
				// check error: status
				else if (coStatus != sol::call_status::ok
					&& coStatus != sol::call_status::yielded) {
					t->isFinish = true;
					log("status error");
				}

				// check if want set await ms
				if (!t->isFinish) {
					int returnCount = returnResult.return_count();
					// don't do anything
					if (returnCount == 0) {
						t->isFinish = true;
					}
					else if (returnCount == 1) {
						// Set Await(ms)
						int ms = returnResult;
						t->SetNewWaitTime(ms);
					}
				}
			}
		}

		// remove thread finish
		TryCleanupThreadList();

		//log("lua sandbox updated");
	}
	catch (const sol::error& e) {
		SetNewStatus(LuaModStatus::Error);
		auto errorString = std::format("LuaSandbox Error: {}", e.what());
		log(errorString.c_str());
	}
}

void LuaModSandbox::SetNewStatus(LuaModStatus newStatus)
{
	m_currentStatus = newStatus;
	switch (newStatus) {
	case LuaModStatus::Idle:
	case LuaModStatus::Running: {
		// clear
		m_stopTimepoint = steady_clock::time_point();
		m_restartTimePoint = steady_clock::now();
		break;
	}
	case LuaModStatus::Stop:
	case LuaModStatus::Error: {
		// mark on stop
		m_stopTimepoint = steady_clock::now();
		break;
	}
	default:
		break;
	}
}

int LuaModSandbox::LuaAwait(int ms) {
	return ms; // just yield. simple code
}

void LuaModSandbox::LuaCreateThread(sol::function fnBody)
{
	log("try lua CreateThread...");
	m_threadNewList.emplace_back(std::make_unique<LuaThreadCoroutine>());
	auto t = m_threadNewList.back().get();
	t->thread = sol::thread::create(m_solState.lua_state());
	t->co = sol::coroutine(t->thread.state(), fnBody);
	log("created lua thread: %d", t->id);
}

void LuaModSandbox::TryCleanupThreadList() {
	m_threadWorkingList.erase(
		std::remove_if(
			m_threadWorkingList.begin(),
			m_threadWorkingList.end(),
			[](std::unique_ptr<LuaThreadCoroutine>& t) {
				if (t->isFinish) {
					log("removing thread: %d", t->id);
					return true;
				}
				return false;
			}
		),
		m_threadWorkingList.end()
	);
}

bool LuaModSandbox::IsIdle() const {
	return m_currentStatus == LuaModStatus::Idle;
}
bool LuaModSandbox::IsRunning() const {
	return m_currentStatus == LuaModStatus::Running;
}
bool LuaModSandbox::IsStop() const {
	return m_currentStatus == LuaModStatus::Stop;
}
bool LuaModSandbox::IsError()const {
	return m_currentStatus == LuaModStatus::Error;
}

using namespace std::chrono;
size_t LuaModSandbox::GetRunDurationMs() {
	std::chrono::steady_clock::time_point endTimePoint;
	if (m_stopTimepoint.time_since_epoch().count() != 0) {
		endTimePoint = m_stopTimepoint;
	}
	else {
		endTimePoint = steady_clock::now();
	}
	return duration_cast<milliseconds>(endTimePoint - m_restartTimePoint).count();
}

LuaThreadCoroutine::LuaThreadCoroutine()
{
	static uint32_t g_idCounter = 0;
	this->id = ++g_idCounter;
}

bool LuaThreadCoroutine::IsAwaiting()
{
	if (!isRunning)
		return true;

	return wakeTime.time_since_epoch().count() != 0;
}

bool LuaThreadCoroutine::IsShouldFinish(steady_clock::time_point now)
{
	if (isFinish) return true;
	return now >= wakeTime;
}
