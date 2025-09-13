#pragma once
#include "extern/imgui/imgui.h"
#include <vector>

class ImGuiOverlayBase
{
public:
	inline void Begin(const char* name) {
		ImGui::Begin(name);
	}
	inline void End() {
		ImGui::End();
	}
	bool BeginTable(const char* label_id, std::vector<const char*> columeNames);
	bool BeginFirstRow(const char* label, bool selected = false);
	inline void EndTable() { ImGui::EndTable(); }
	void NextTextColumn(const char* fmt, ...);
};

