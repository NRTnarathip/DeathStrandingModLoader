#include "LuaModManagementOverlay.h"
#include "utils.h"
#include "LuaModManager.h"

bool Button(std::string text) {
	return ImGui::Button(text.c_str());
}
void Text(std::string text) {
	ImGui::Text(text.c_str());
}
void LuaModManagementOverlay::OnDraw()
{
	auto luaModManager = LuaModManager::Instance();
	auto& mods = luaModManager->GetAllMod();

	// init selected mod default
	if (m_selectMod == nullptr && !mods.empty()) {
		m_selectMod = (*mods.begin()).second.get();
	}

	// Command Tool
	static std::string g_command;
	if (ImGui::InputText("Command", &g_command, ImGuiInputTextFlags_EnterReturnsTrue)) {
		if (!g_command.empty()) {
			SendCmd(g_command);
		}
		g_command = "";
	}

	// Log Windows
	{
		ImGui::Separator();
		static bool g_autoScroll = true;
		ImGui::Checkbox("Auto Scroll", &g_autoScroll);
		ImGui::BeginChild("log_window", ImVec2(0, 400), false, ImGuiWindowFlags_HorizontalScrollbar);

		struct GlobalModLog {
			std::deque<std::tuple<LuaModEntry*, std::string>> modLines;
			int maxLines = 1000;

			void AddModLog(LuaModSandbox* sandbox, std::string logLine) {
				auto mod = LuaModManager::Instance()->GetModBySandboxID(sandbox->GetID());
				// decorate log line
				auto timeNow = Logger::GetTimeNowMsString();
				logLine = std::format("[{}] [{}] {}",
					timeNow.c_str(), mod->GetID(), logLine.c_str());

				// added
				modLines.push_back({ mod, logLine });
				while (modLines.size() > maxLines) {
					modLines.pop_front();
				}
			}
		};
		static GlobalModLog g_globalLog;
		static bool g_isSetupGlobalModLog = false;
		if (g_isSetupGlobalModLog == false) {
			g_isSetupGlobalModLog = true;
			LuaModLog::g_onLuaLogCallbacks.push_back([&](LuaModSandbox* sandbox, std::string logLine) {
				g_globalLog.AddModLog(sandbox, logLine);
				});
		}

		for (auto& [mod, modLogLine] : g_globalLog.modLines) {
			ImGui::TextUnformatted(modLogLine.c_str());
		}

		if (g_autoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()) {
			ImGui::SetScrollHereY(1.0f);
		}
		ImGui::EndChild();
	}


	// show mods table
	static std::string g_searchModName;
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
		auto items = g_tableItems[row];
		auto modID = items[1];
		m_selectMod = luaModManager->GetMod(modID);
		};


	ImGui::Separator();
	auto selectedModID = GetSelectedModID();
	Text(std::format("Current Selected ModID: {}", selectedModID));
	if (Button("Restart")) {
		m_selectMod->Restart();
	}
	ImGui::SameLine();
	if (Button("Stop")) {
		m_selectMod->Stop();
	}

	ImGui::Separator();
	ImGui::BeginChild("mods_child");
	ImGui::InputText("Search Mod Name", &g_searchModName);
	DrawTableTemplate("mods_table", g_tableColumnNames, g_tableItems);
	ImGui::EndChild();

}
std::vector<std::string> Tokenize(const std::string& input) {
	std::stringstream ss(input);
	std::vector<std::string> tokens;
	std::string word;
	while (ss >> word) {
		tokens.push_back(word);
	}
	return tokens;
}
void LuaModManagementOverlay::SendCmd(std::string line)
{
	log("sending cmd line: %s", line.c_str());
	auto tokens = Tokenize(line);
	if (tokens.empty()) {
		return;
	}

	std::string cmdName = tokens[0];
	std::vector<std::string> args = tokens;
	args.erase(args.begin());

	// setup
	static bool isSetupCommands = false;
	if (isSetupCommands == false) {
		isSetupCommands = true;
		cmdTool.Register("restart", [&](auto args) {
			this->OnCmdRestart(args);
			});
		cmdTool.Register("stop", [&](auto args) {
			this->OnCmdStop(args);
			});
	}

	auto cmdHandler = cmdTool.TryGetCommandCallback(cmdName);
	if (cmdHandler) {
		cmdHandler(args);
	}
}

void LuaModManagementOverlay::OnCmdRestart(CommandTool::CmdArgs_t args)
{
	log("try run cmd restart...");

	LuaModEntry* mod = nullptr;

	if (args.empty()) {
		if (m_selectMod) {
			mod = m_selectMod;
		}
	}
	else if (args.size() == 1) {
		auto argModID = args[0];
		auto manager = LuaModManager::Instance();
		mod = manager->GetMod(argModID);
		log("try get mod at arg[0]: %s", argModID.c_str());
	}

	if (mod) {
		log("try restart modID: %s", mod->GetID());
		mod->Restart();
	}
	else {
		log("not found any mod for restart");
	}
}

void LuaModManagementOverlay::OnCmdStop(CommandTool::CmdArgs_t args)
{
	log("try run cmd stop...");
	LuaModEntry* mod = nullptr;
	if (args.empty()) {
		mod = m_selectMod;
	}

	if (mod) {
		log("try stop modID: %s", mod->GetID());
		mod->Stop();
	}
	else {
		log("not found any mod for stop cmd!");
	}
}
