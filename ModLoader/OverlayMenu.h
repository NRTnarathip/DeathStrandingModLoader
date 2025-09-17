#pragma once
#include "ObjectScanner.h"
#include "ImGuiOverlayBase.h"

class RendererHook;

class OverlayMenu final : public ImGuiOverlayBase
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

	std::string GetWindowTitle() override { return "Master Overlay"; }
	void OnDraw() override {}

private:
	std::vector<ImGuiOverlayBase*> m_overlays;

	RendererHook* renderer;
	ObjectScanner* objScanner;
	EntityList* entityList = nullptr;
	void* dumpObjPtr = nullptr;
	int dumpStructSizeCurrent = 0x100;
	void UpdateOverlayToggle();
	void OnPresent();
	void DrawImGuiData();
	void InitializeBeforePresent();
	void DrawEntityInspector();
	void DrawEntityListViewer();
	void DrawTypeListViewer();
	void DrawSymbolInspector();
	void DrawDumpStructMenu();
	void DrawObjectInstanceListViewer();
	void DrawFunctionAPIExporter();
};

