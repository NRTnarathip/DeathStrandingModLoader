#pragma once

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

private:
	RendererHook* renderer;
	void UpdateOverlayToggle();
	void OnPresent(unsigned int sync, unsigned int flags);
	void DrawImGuiData();
	void InitializeBeforePresent();
};

