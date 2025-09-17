#pragma once
#include "extern/imgui/imgui.h"
#include "extern/imgui/misc/cpp/imgui_stdlib.h"
#include <vector>
#include <iostream>
#include <functional>

class ImGuiOverlayBase {
public:
	std::function<void(std::string label_id, int index)> m_onClickTableRow;

	ImGuiOverlayBase() {}
	// abstract function
	virtual std::string GetWindowTitle() = 0;
	virtual void OnDraw() = 0;

	// helpr
	static bool IsSearchFilterSkipItem(std::string src, std::string word);
	void BeginWindow(std::string name);
	void EndWindow() { ImGui::End(); }
	bool BeginTable(const char* label_id, std::vector<const char*> columeNames);
	bool BeginTableSelectableNewRow(const char* label, bool selected = false);
	inline void EndTable() { ImGui::EndTable(); }
	void NextTextColumn(const char* fmt, ...);

	// template table simple
	void DrawTableTemplate(std::string label_id,
		std::vector<std::string>& columnNames,
		std::vector<std::vector<std::string>>& tableItems);

};

