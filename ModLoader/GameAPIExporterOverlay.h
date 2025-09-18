#pragma once
#include "ImGuiOverlayBase.h"

class GameAPIExporterOverlay final : public  ImGuiOverlayBase {
private:

public:
	std::string GetWindowTitle() override { return "Game API Exporter"; }
	void OnDraw() override;
};

