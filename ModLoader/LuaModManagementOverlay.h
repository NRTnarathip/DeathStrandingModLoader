#pragma once
#include "ImGuiOverlayBase.h"

class LuaModManagementOverlay final : public ImGuiOverlayBase {
public:
	std::string GetWindowTitle() override {
		return "Lua Mod Management";
	}
	void OnDraw() override;
};

