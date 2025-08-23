#pragma once
class LoaderConfig
{

public:
	static LoaderConfig& Instance() {
		static LoaderConfig m_instance;
		return m_instance;
	}

	/// <summary>
	/// General
	/// </summary>
	bool enableConsole = false;

	/// <summary>
	/// Logger
	/// </summary>
	bool logConsole = true;
	bool logFile = false;
	bool logRenderer = false;
	bool logTimeStamp = true;
	bool logThreadID = true;

	/// <summary>
	/// dev debug
	/// </summary>
	bool devDebug = false;

private:
	LoaderConfig();
	const char* configFilePath = "mod_loader_config.ini";
};

