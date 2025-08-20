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
	bool enableConsole;

	/// <summary>
	/// Logger
	/// </summary>
	bool logConsole;
	bool logFile;
	bool logRenderer;
	bool logTimeStamp;
	bool logThreadID;

private:
	LoaderConfig();
	const char* configFilePath = "mod_loader_config.ini";
};

