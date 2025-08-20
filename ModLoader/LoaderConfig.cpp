#include "LoaderConfig.h"
#include "utils.h"
#include "ini.h"
#include "INIReader.h"

LoaderConfig::LoaderConfig()
{
	INIReader reader(configFilePath);
	if (reader.ParseError() < 0) {
		return;
	}


	// General
#define General "general"
	enableConsole = reader.GetBoolean(General, "console", false);


	// Logger
#define Logger "logger"
	logConsole = reader.GetBoolean(Logger, "console", true) && enableConsole;
	logFile = reader.GetBoolean(Logger, "file", false);
	logRenderer = reader.GetBoolean(Logger, "renderer", false);
	logTimeStamp = reader.GetBoolean(Logger, "timestamp", true);
	logThreadID = reader.GetBoolean(Logger, "threadID", true);
}

