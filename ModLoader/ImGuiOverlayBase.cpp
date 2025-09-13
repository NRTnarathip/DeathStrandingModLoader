#include "ImGuiOverlayBase.h"
#include <iostream>

bool ImGuiOverlayBase::BeginTable(const char* label_id,
	std::vector<const char*> columeNames)
{
	bool on = ImGui::BeginTable(label_id, columeNames.size(),
		ImGuiTableFlags_ScrollY
		| ImGuiTableFlags_Borders
		| ImGuiTableFlags_RowBg
		| ImGuiTableFlags_Hideable
		| ImGuiTableFlags_Resizable
		| ImGuiTableFlags_Reorderable);
	if (on) {
		ImGui::TableSetupScrollFreeze(0, 1);
		for (auto& name : columeNames)
			ImGui::TableSetupColumn(name);
		ImGui::TableHeadersRow();
	}
	return on;
}

bool ImGuiOverlayBase::BeginFirstRow(const char* label, bool selected)
{
	ImGui::TableNextRow();
	ImGui::TableNextColumn();
	return ImGui::Selectable(label, selected, ImGuiSelectableFlags_SpanAllColumns);
}

void ImGuiOverlayBase::NextTextColumn(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	int size = std::vsnprintf(nullptr, 0, fmt, args);
	va_end(args);

	std::string result(size, '\0');
	va_start(args, fmt);
	std::vsnprintf(result.data(), result.size() + 1, fmt, args);
	va_end(args);

	ImGui::TableNextColumn();
	ImGui::TextUnformatted(result.c_str());
}
