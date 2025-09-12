#pragma once
#include "extern/imgui/imgui.h"

class ImGuiOverlayBase
{
public:
	inline void Begin(const char* name) {
		ImGui::Begin(name);
	}
	inline void End() {
		ImGui::End();
	}
};

