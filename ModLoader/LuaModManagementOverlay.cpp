#include "LuaModManagementOverlay.h"
#include "utils.h"
#include "LuaModManager.h"

void LuaModManagementOverlay::OnDraw()
{
	static LuaModEntry* g_selectMod;
	static std::string g_searchModName;
	ImGui::InputText("Search Mod Name", &g_searchModName);

	auto luaModManager = LuaModManager::Instance();
	auto& mods = luaModManager->GetAllMod();

	// init selected mod default
	if (g_selectMod == nullptr && !mods.empty()) {
		g_selectMod = (*mods.begin()).second.get();
	}

	static std::vector<std::vector<std::string>> g_tableItems;
	g_tableItems.clear();
	for (auto& modPair : mods) {
		LuaModEntry* mod = modPair.second.get();
		auto modName = mod->GetModName();
		if (IsSearchFilterSkipItem(modName, g_searchModName))
			continue;

		auto sandbox = mod->GetSandbox();
		auto modStatus = mod->GetStatusName();

		std::vector<std::string> lineItems;
		lineItems.push_back(modName);
		lineItems.push_back(mod->GetID());
		lineItems.push_back(mod->GetVersion());
		lineItems.push_back(modStatus);
		lineItems.push_back(std::format("{:.3f} s", sandbox->GetRunDurationMs() / 1000.0f));
		g_tableItems.push_back(lineItems);
	}

	static std::vector<std::string> g_tableColumnNames = {
		"Mod Name", "Mod ID", "Version", "Status", "Time Duration"
	};
	m_onClickTableRow = [&](std::string tableID, int row) {
		log("on click row: %d", row);
		auto items = g_tableItems[row];
		auto modID = items[1];
		g_selectMod = luaModManager->GetMod(modID);
		log("selected mod ID: %s", g_selectMod->GetID());
		};
	DrawTableTemplate("mods", g_tableColumnNames, g_tableItems);

}
