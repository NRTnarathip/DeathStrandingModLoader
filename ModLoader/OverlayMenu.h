#pragma once
#include "ObjectScanner.h"
#include "ImGuiOverlayBase.h"

class RendererHook;

class OverlayMenu : ImGuiOverlayBase
{
public:
	static OverlayMenu* Instance()
	{
		static OverlayMenu inst;
		return &inst;
	}

	bool isShow = true;

	OverlayMenu();
	void Initialize();
	std::string selectedEntityUUIDString;
	void* dumpStructPtr;

private:
	RendererHook* renderer;
	ObjectScanner* objScanner;
	EntityList* entityList = nullptr;
	void UpdateOverlayToggle();
	void OnPresent(unsigned int sync, unsigned int flags);
	void DrawImGuiData();
	void InitializeBeforePresent();
	void DrawEntityInspector();
	void DrawEntityListViewer();
	void DrawTypeListViewer();
	void DrawSymbolInspector();
	void DrawDumpStructMenu();
};

