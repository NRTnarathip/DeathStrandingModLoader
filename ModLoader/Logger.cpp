#include "Logger.h"
#include "LoaderConfig.h"
#include  <iostream>
#include <fstream>
#include <Windows.h>
#include <sstream>
#include <cstdint>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <cstdarg>
#include <sstream>


std::string Logger::GetTimeNowMsString() {
	std::stringstream ss;
	auto now = std::chrono::system_clock::now();
	auto time_t = std::chrono::system_clock::to_time_t(now);
	auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
		now.time_since_epoch()) % 1000;
	auto tm = *std::localtime(&time_t);
	std::string tmFormat = std::format("{:02d}:{:02d}:{:02d}:{:03d}",
		tm.tm_hour, tm.tm_min, tm.tm_sec, ms.count());
	ss << tmFormat.c_str();
	return ss.str();
}

Logger::Logger()
{
	m_config = LoaderConfig::Instance();

	// ready setup
	if (m_config->enableConsole) {
		// allow logger
		AllocConsole();
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);
		freopen("CONIN$", "r", stdin);
	}

	if (m_config->logFile) {
		m_logStream.open(m_logFileName, std::ios::out | std::ios::trunc);
	}
}

void Logger::logFormat(const char* format, ...)
{
	if (m_config->logConsole == false
		&& m_config->logFile == false)
		return;

	char buffer[1024];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	// build string
	std::stringstream sstream;
	if (m_config->logTimeStamp) {
		auto now = std::chrono::system_clock::now();
		auto in_time = std::chrono::system_clock::to_time_t(now);
		sstream << "[" << std::put_time(std::localtime(&in_time), "%T") << "]";
	}

	if (m_config->logThreadID) {
		DWORD tid = GetCurrentThreadId();
		sstream << "[TID:" << tid << "] ";
	}

	sstream << buffer << std::endl;

	// log it
	if (m_config->logConsole)
		std::cout << sstream.str();

	if (m_config->logFile) {
		m_logStream << sstream.str();
		m_logStream.flush();
	}
}

