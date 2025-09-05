#pragma once
#include <fstream>

class LoaderConfig;

class Logger
{
public:
	static Logger* Instance()
	{
		static Logger instance;
		return &instance;
	}
	void logFormat(const char* format, ...);

private:
	Logger();
	std::ofstream m_logStream;
	const char* m_logFileName = "mod_log.txt";
	LoaderConfig* m_config;
};


#define log Logger::Instance()->logFormat
