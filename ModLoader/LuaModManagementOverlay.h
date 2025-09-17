#pragma once
#include "ImGuiOverlayBase.h"
#include "LuaModEntry.h"

class CommandTool {
public:
	using CmdArgs_t = std::vector<std::string>;
	using CmdCallback_t = std::function<void(const CmdArgs_t args)>;
	std::unordered_map<std::string, CmdCallback_t> commands;
	void Register(std::string cmdName, CmdCallback_t callback) {
		commands[cmdName] = callback;
	}
	CmdCallback_t TryGetCommandCallback(std::string cmd) {
		if (commands.contains(cmd))
			return commands.at(cmd);
		return nullptr;
	}
};

class LuaModManagementOverlay final : public ImGuiOverlayBase {
private:
	LuaModEntry* m_selectMod = nullptr;
	std::string GetSelectedModID() {
		if (m_selectMod) return m_selectMod->GetID();
		return "";
	}

public:
	CommandTool cmdTool;

	std::string GetWindowTitle() override {
		return "Lua Mod Management";
	}
	void OnDraw() override;
	void SendCmd(std::string cmd);
	void OnCmdRestart(CommandTool::CmdArgs_t args);
	void OnCmdStop(CommandTool::CmdArgs_t args);
};

