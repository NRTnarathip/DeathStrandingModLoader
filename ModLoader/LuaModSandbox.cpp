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

	static void Log(sol::variadic_args args) {
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
		static auto fn = DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetLocalDSPlayerEntity");
		return fn->Call<void*>();
	}
}


void LuaModSandbox::SetupEnvrionment()
{
	// enable libs
	lua.open_libraries(sol::lib::base, sol::lib::math,
		sol::lib::table, sol::lib::string);


	// Default API
	lua.set_function("Log", LuaNative::Log);
	lua.set_function("Await", sol::yielding(Await));
	lua.set_function("CreateThread", [this](sol::function fn) {
		this->CreateThread(fn);
		});

	// Alias
	lua["Wait"] = lua["Await"];


	// Setup Game API
	lua.set_function("GetLocalPlayer", LuaNative::GetLocalPlayer);
}


bool LuaModSandbox::Run(std::string code)
{
	log("try run code...");
	// clear status first!
	if (!IsIdle())
		return false;

	try {
		this->code = code;
		status = LuaModStatus::Running;
		lua.script(code);
		log("run code successfully");
	}
	catch (const sol::error& e) {
		status = LuaModStatus::Error;
		auto errorString = std::format("LuaSandbox Error: {}", e.what());
		log(errorString.c_str());
	}

	return !IsError();
}

void LuaModSandbox::UpdateTick()
{
	try {
		for (auto& newThread : m_threadNewList) {
			m_threadWorkingList.push_back(newThread);
			log("added thread: %d to working", newThread->id);
		}
		m_threadNewList.clear();

		const auto now = steady_clock::now();

		// update all thread working list
		for (auto& thread : m_threadWorkingList) {
			auto t = thread;
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

	}
	catch (const sol::error& e) {
		status = LuaModStatus::Error;
		auto errorString = std::format("LuaSandbox Error: {}", e.what());
		log(errorString.c_str());
	}
}

int LuaModSandbox::Await(int ms) {
	// just yield. simple code
	return ms;
}

void LuaModSandbox::CreateThread(sol::function fnBody)
{
	auto t = new LuaThreadCoroutine();
	t->thread = sol::thread::create(lua.lua_state());
	t->co = sol::coroutine(t->thread.state(), fnBody);
	m_threadNewList.push_back(t);
}

void LuaModSandbox::TryCleanupThreadList() {
	m_threadWorkingList.erase(
		std::remove_if(
			m_threadWorkingList.begin(),
			m_threadWorkingList.end(),
			[this](auto t) {
				if (t->isFinish) {
					log("remove thread: %p", t);
					delete t;
					return true;
				}
				return false;
			}
		),
		m_threadWorkingList.end()
	);

}

bool LuaModSandbox::IsIdle() const {
	return status == LuaModStatus::Idle;
}
bool LuaModSandbox::IsRunning() const {
	return status == LuaModStatus::Running;
}
bool LuaModSandbox::IsError()const {
	return status == LuaModStatus::Error;
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
