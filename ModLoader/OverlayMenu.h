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
	std::string selectedEntityUUIDString;

	OverlayMenu();
	void Initialize();
	void SetDumpStructPtr(void* p, int size = -1);

private:
	RendererHook* renderer;
	ObjectScanner* objScanner;
	EntityList* entityList = nullptr;
	void* dumpObjPtr = nullptr;
	int dumpStructSizeCurrent = 0x100;
	void UpdateOverlayToggle();
	void OnPresent(unsigned int sync, unsigned int flags);
	void DrawImGuiData();
	void InitializeBeforePresent();
	void DrawEntityInspector();
	void DrawEntityListViewer();
	void DrawTypeListViewer();
	void DrawSymbolInspector();
	void DrawDumpStructMenu();
	void DrawObjectInstanceListViewer();
};

