#pragma once
#include "extern/imgui/imgui.h"
#include <vector>

class ImGuiOverlayBase
{
public:
	inline void BeginWindow(const char* name) {
		ImGui::Begin(name);
	}
	inline void EndWindow() {
		ImGui::End();
	}
	bool BeginTable(const char* label_id, std::vector<const char*> columeNames);
	bool BeginTableNewRow(const char* label, bool selected = false);
	inline void EndTable() { ImGui::EndTable(); }
	void NextTextColumn(const char* fmt, ...);

	// template table simple
	void DrawTableTemplate(const char* label_id, std::vector<const char*>& columeNames,
		std::vector<std::vector<const char*>>& items);
};

