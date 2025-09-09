#pragma once
#include "ObjectScanner.h"

class RendererHook;

class OverlayMenu
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
	std::string selectedEntityUUID;

private:
	RendererHook* renderer;
	ObjectScanner* objScanner;
	EntityList* entityList = nullptr;
	void UpdateOverlayToggle();
	void OnPresent(unsigned int sync, unsigned int flags);
	void DrawImGuiData();
	void InitializeBeforePresent();
	void DrawEntityInspectorMenu();
	void DrawEntityListViewer();
};

