#include "ImGuiOverlayBase.h"
#include <iostream>
#include <algorithm>
#include "utils.h"


// helpr
void ImGuiOverlayBase::BeginWindow(std::string name) {
	ImGui::Begin(name.c_str());
}

bool ImGuiOverlayBase::BeginTable(const char* label_id,
	std::vector<const char*> columeNames)
{
	bool on = ImGui::BeginTable(label_id, columeNames.size(),
		ImGuiTableFlags_ScrollY
		| ImGuiTableFlags_Borders
		| ImGuiTableFlags_RowBg
		| ImGuiTableFlags_Hideable
		| ImGuiTableFlags_Resizable
		| ImGuiTableFlags_Sortable
		| ImGuiTableFlags_Reorderable);
	if (on) {
		ImGui::TableSetupScrollFreeze(0, 1);
		for (auto& name : columeNames)
			ImGui::TableSetupColumn(name);
		ImGui::TableHeadersRow();
	}
	return on;
}

bool ImGuiOverlayBase::BeginTableSelectableNewRow(const char* label, bool selected)
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

void ImGuiOverlayBase::DrawTableTemplate(std::string label_id, std::vector<std::string>& columnNames,
	std::vector<std::vector<std::string>>& tableItems)
{
	const auto flags = ImGuiTableFlags_ScrollY
		| ImGuiTableFlags_Borders
		| ImGuiTableFlags_RowBg
		| ImGuiTableFlags_Hideable
		| ImGuiTableFlags_Resizable
		| ImGuiTableFlags_Sortable
		| ImGuiTableFlags_Reorderable;
	bool on = ImGui::BeginTable(label_id.c_str(), columnNames.size(), flags);
	if (!on) return;

	ImGui::TableSetupScrollFreeze(0, 1);
	for (auto name : columnNames)
		ImGui::TableSetupColumn(name.c_str());
	ImGui::TableHeadersRow();

	int columnCount = columnNames.size();
	// sort
	if (ImGuiTableSortSpecs* sortSpecs = ImGui::TableGetSortSpecs()) {
		if (sortSpecs->SpecsDirty) {
			const ImGuiTableColumnSortSpecs& spec = sortSpecs->Specs[0];
			int col = spec.ColumnIndex;
			auto dir = spec.SortDirection;
			std::sort(tableItems.begin(), tableItems.end(),
				[&](auto& left, auto& right) {
					int cmp = left[col] < right[col];
					return dir == ImGuiSortDirection_Ascending ? cmp < 0 : cmp > 0;
				});

			sortSpecs->SpecsDirty = false;
		}
	}

	int rowIndex = 0;
	for (auto& items : tableItems) {
		ImGui::PushID(rowIndex);
		ImGui::TableNextRow();
		for (int i = 0; i < items.size(); i++) {
			auto text = items[i].c_str();
			if (i == 0) {
				if (BeginTableSelectableNewRow(text)) {
					if (m_onClickTableRow)
						m_onClickTableRow(label_id, rowIndex);
				}
			}
			else {
				ImGui::TableSetColumnIndex(i);
				ImGui::TextUnformatted(text);
			}
		}
		ImGui::PopID();
		rowIndex++;
	}

	EndTable();
}

bool ImGuiOverlayBase::IsSearchFilterSkipItem(std::string src, std::string word) {
	if (word.empty()) return false;
	return !IsContains(src, word);
}
