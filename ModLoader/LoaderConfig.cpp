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
	enableConsole = reader.GetBoolean(General, "console", enableConsole);


	// Logger
#define Logger "logger"
	logConsole = reader.GetBoolean(Logger, "console", logConsole) && enableConsole;
	logFile = reader.GetBoolean(Logger, "file", logFile);
	logRenderer = reader.GetBoolean(Logger, "renderer", logRenderer);
	logTimeStamp = reader.GetBoolean(Logger, "timestamp", logTimeStamp);
	logThreadID = reader.GetBoolean(Logger, "threadID", logThreadID);

#define Dev "dev"
	// debug zone
	devDebug = reader.GetBoolean(Dev, "devDebug", devDebug);
}

