#include "OverlayMenu.h"
#include "RendererHook.h"
#include "utils.h"
#include "ObjectScanner.h"
#include <decima-native/RTTI.h>
#include <decima-native/RTTIObject.h>
#include <decima-native/RTTIRefObject.h>
#include "extern/imgui/imgui.h"
#include "extern/imgui/backends/imgui_impl_win32.h"
#include "extern/imgui/backends/imgui_impl_dx12.h"
#include "extern/imgui/misc/cpp/imgui_stdlib.h"
#include <format>
#include <wrl/client.h>
#include <numbers> // std::numbers
#include <algorithm>
#include "MoverComponent.h"
#include "DecimaNative.h"

using Microsoft::WRL::ComPtr;
#define gui ImGui

bool IsSearchFilterSkipItem(std::string src, std::string word) {
	if (word.empty()) return false;
	return !IsContains(src, word);
}

OverlayMenu* g_overlay;

#include "LuaModManagementOverlay.h"
#include  "GameAPIExporterOverlay.h"
OverlayMenu::OverlayMenu()
{
	g_overlay = this;
	renderer = RendererHook::Instance();
	objScanner = ObjectScanner::Instance();
	entityList = &objScanner->entityList;


	// register overlay class
	m_overlays.push_back(new LuaModManagementOverlay());
	m_overlays.push_back(new GameAPIExporterOverlay());
}

void OverlayMenu::UpdateOverlayToggle() {
	static bool wasPressed = false;
	bool pressed = (GetAsyncKeyState(VK_HOME) & 0x8000) != 0;
	if (pressed && !wasPressed)
		isShow = !isShow;

	wasPressed = pressed;
}


// Config for example app
static const int APP_NUM_FRAMES_IN_FLIGHT = 2;
static const int APP_NUM_BACK_BUFFERS = 2;
static const int APP_SRV_HEAP_SIZE = 64;
struct FrameContext
{
	ID3D12CommandAllocator* CommandAllocator;
	UINT64                      FenceValue;
};

void OverlayMenu::Initialize()
{
	log("OverlayMenu init...");

	renderer->RegisterPresent([this]()
		{
			OnPresent();
		}
	);

	log("OverlayMenu init successfully");
}


std::vector<ID3D12CommandAllocator*> CommandAllocators;
ID3D12GraphicsCommandList* cmd;
ID3D12DescriptorHeap* SrvDescriptorHeap;
ID3D12DescriptorHeap* RtvDescriptorHeap;

bool isInitializeBeforePresent = false;
WNDPROC WndProc;
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT APIENTRY WndProc_Hook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
	if (g_overlay->isShow) {
		ImGuiIO& io = ImGui::GetIO();
		if (io.WantCaptureMouse || io.WantCaptureKeyboard) {
			return true;
		}
	}

	return CallWindowProcW(WndProc, hWnd, uMsg, wParam, lParam);
}

void InitImGuiStyle() {
	ImGui::CreateContext();
	ImGui::StyleColorsDark();
	ImGuiIO& io = ImGui::GetIO();
	io.WantCaptureMouse = true;
	io.WantCaptureKeyboard = true;
	io.MouseDrawCursor = true;
	// font
	ImFont* consolas = io.Fonts->AddFontFromFileTTF("C:/Windows/Fonts/consolab.ttf", 20.0f);
	ImGui::PushFont(consolas);
	// background
	float opacity = 0.95;
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.0f, 0.0f, 0.0f, opacity));
}

void OverlayMenu::InitializeBeforePresent()
{
	isInitializeBeforePresent = true;

	auto swapChain = renderer->m_swapChain;
	auto device = renderer->GetDevice();
	HWND window = renderer->GetHwnd();

	const D3D12_DESCRIPTOR_HEAP_DESC srvHeapDesc = {
	   .Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,
	   .NumDescriptors = 16,
	   .Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE,
	};
	device->CreateDescriptorHeap(&srvHeapDesc, IID_PPV_ARGS(&SrvDescriptorHeap));

	const D3D12_DESCRIPTOR_HEAP_DESC rtvHeapDesc = {
		.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV,
		.NumDescriptors = 8,
		.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE,
	};
	device->CreateDescriptorHeap(&rtvHeapDesc, IID_PPV_ARGS(&RtvDescriptorHeap));

	DXGI_SWAP_CHAIN_DESC swapChainDesc;
	swapChain->GetDesc(&swapChainDesc);

	CommandAllocators.resize(swapChainDesc.BufferCount);
	for (auto& CommandAllocator : CommandAllocators)
		device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&CommandAllocator));

	device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, CommandAllocators[0], nullptr, IID_PPV_ARGS(&cmd));
	cmd->Close();

	IMGUI_CHECKVERSION();
	InitImGuiStyle();

	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX12_InitInfo info;
	info.Device = device;
	info.CommandQueue = renderer->m_commandQueue;
	info.NumFramesInFlight = static_cast<int>(swapChainDesc.BufferCount);
	ID3D12Resource* tempBackBuffer = nullptr;
	swapChain->GetBuffer(0, IID_PPV_ARGS(&tempBackBuffer));
	D3D12_RESOURCE_DESC backBufferDesc = tempBackBuffer->GetDesc();
	tempBackBuffer->Release();
	info.RTVFormat = backBufferDesc.Format;
	info.SrvDescriptorHeap = SrvDescriptorHeap;
	info.LegacySingleSrvCpuDescriptor = SrvDescriptorHeap->GetCPUDescriptorHandleForHeapStart();
	info.LegacySingleSrvGpuDescriptor = SrvDescriptorHeap->GetGPUDescriptorHandleForHeapStart();
	ImGui_ImplDX12_Init(&info);

	WndProc = (WNDPROC)(SetWindowLongPtrW(window, GWLP_WNDPROC, (LONG_PTR)WndProc_Hook));
}


MyVec3 RotationMatrixToEuler(MyRotMatrix& rotMatrix)
{
	auto& col0 = rotMatrix.Col0;
	auto& col1 = rotMatrix.Col1;
	auto& col2 = rotMatrix.Col2;
	auto pi = std::numbers::pi;
	auto pi_2 = pi / 2.0;
	MyVec3 euler;
	// Assuming matrix is column-major
	if (col0.z < 1.0f)
	{
		if (col0.z > -1.0f)
		{
			euler.y = std::asin(-col0.z);                    // pitch
			euler.x = std::atan2(col1.z, col2.z);           // roll
			euler.z = std::atan2(col0.y, col0.x);           // yaw
		}
		else
		{
			// col0.z == -1
			euler.y = pi_2;        // pitch 90 deg
			euler.x = -std::atan2(-col1.x, col1.y);
			euler.z = 0;
		}
	}
	else
	{
		// col0.z == 1
		euler.y = -pi_2;       // pitch -90 deg
		euler.x = std::atan2(-col1.x, col1.y);
		euler.z = 0;
	}

	// Convert from radians to degrees
	euler.x = euler.x * 180.0f / pi;
	euler.y = euler.y * 180.0f / pi;
	euler.z = euler.z * 180.0f / pi;

	return euler;
}

void DrawVec3(const char* label, MyVec3Float vec) {
	float arr[] = { vec.x, vec.y, vec.z };
	ImGui::InputFloat3(label, arr);
}
void DrawVec3(const char* label, MyVec3Double vec) {
	DrawVec3(label, MyVec3Float{ (float)vec.x, (float)vec.y, (float)vec.z });
}
void CopyToClipboard(const void* ptr) {
	if (ptr == nullptr)
		return;
	auto str = std::format("0x{:X}", (uintptr_t)ptr);
	ImGui::SetClipboardText(str.c_str());
}
void OverlayMenu::DrawEntityInspector() {
	ImGui::Begin("Entity Inspector");

	auto entity = entityList->get(selectedEntityUUIDString);
	if (entity == nullptr) {
		ImGui::LabelText("##no_entity_selected", "No entity selected");
		ImGui::End();
		return;
	}

	ImGui::BeginChild("StructFields");

	auto entityType = entity->TypeName();
	ImGui::Text("Ptr: %p", entity);
	if (ImGui::Button("Copy Ptr")) {
		CopyToClipboard(entity);
	}
	ImGui::Text("Name: %s", entity->GetName());
	ImGui::Text("Type: %s", entityType);
	ImGui::Text("UUID: %s", selectedEntityUUIDString.c_str());
	ImGui::Text("Flags: %u", entity->flag);
	ImGui::Text("Model: %s", entity->model ? entity->model->GetTypeName() : "null");
	ImGui::Text("Parent Type: %s", entity->parent ? entity->parent->TypeName() : "null");

	if (ImGui::TreeNode("RTTI Info")) {
		auto rttiObj = (RTTIObject*)entity;
		auto rtti = rttiObj->GetRTTI();
		ImGui::Text("ptr: %p", rtti);
		ImGui::Text("size: 0x%x", rtti->mSize);

		auto ctor = (void*)AddrToRva(rtti->mConstructor);
		ImGui::Text("ctor: %p", ctor);
		if (ImGui::Button("Copy ctor"))
			CopyToClipboard(ctor);

		auto dtor = (void*)AddrToRva(rtti->mDestructor);
		ImGui::Text("dtor: %p", dtor);
		if (ImGui::Button("Copy dtor"))
			CopyToClipboard(dtor);

		ImGui::TreePop();
	}

	auto mover = (MoverComponent*)entity->mover;
	if (ImGui::TreeNode("##entity_mover", "Mover: %s",
		mover ? mover->GetTypeName() : "null")) {
		if (mover) {
			DrawVec3("velocity", mover->GetVelocity());
			DrawVec3("angular velocity", entity->GetAngularVelocity());
			ImGui::Text("linear speed: %.2f", entity->GetLinearSpeed());
		}
		ImGui::TreePop();
	}

	if (ImGui::TreeNode("##entity_destructibility", "Destructibility: %s",
		entity->destructibility ? entity->destructibility->GetTypeName() : "null")) {
		if (entity->destructibility) {
			ImGui::Text("health: %.2f", entity->GetHealth());
			ImGui::Text("max health: %.2f", entity->GetMaxHealth());
		}
		ImGui::TreePop();
	}

	if (ImGui::TreeNode("##entity_transform", "Transform")) {
		{
			auto pos = entity->worldTransform.position;
			DrawVec3("world position", pos);
			auto rot = RotationMatrixToEuler(entity->worldTransform.rotation);
			DrawVec3("world rotation", rot);
		}
		{
			auto pos = entity->localTransform.position;
			DrawVec3("local position", pos);
			auto rot = RotationMatrixToEuler(entity->localTransform.rotation);
			DrawVec3("local rotation", rot);
		}
		ImGui::TreePop();
	}

	auto& componentArray = *entity->GetAllComponent();
	if (ImGui::TreeNode("##entity_components", "Components (%d)", componentArray.size())) {
		int compIndex = -1;
		for (auto comp : componentArray) {
			ImGui::PushID(comp);

			compIndex++;
			auto compRTTI = (RTTIObject*)comp;
			auto type = compRTTI->GetRTTI();
			std::string compTypeName = type->GetName().str();
			ImGui::Text("[%d] %s", compIndex, compTypeName.c_str());
			auto fields = GetFields((void*)comp);
			if (ImGui::TreeNode(comp, "Fields (%d)", fields.size())) {
				for (auto& field : fields) {
					auto fieldType = field.attr.mType;
					ImGui::Text("%s %s | offset: 0x%x",
						fieldType->GetName().c_str(), field.attr.mName, field.offset);
				}
				ImGui::TreePop();
			}

			ImGui::PopID();
		}

		ImGui::TreePop();
	}

	ImGui::EndChild();

	ImGui::BeginChild("OhterInfo");

	auto entityFields = GetFields(entity);
	if (ImGui::TreeNode("##entity_fields", "Fields %d", entityFields.size())) {
		for (auto& field : entityFields) {
			auto fieldType = field.attr.mType;
			ImGui::Text("%s %s = (?) || offset: 0x%x",
				fieldType->GetName().c_str(), field.attr.mName, field.offset);
		}
		ImGui::TreePop();
	}

	if (ImGui::TreeNode("Utils Functions")) {
		if (ImGui::Button("Sleep()")) entity->SetSleeping(true);
		if (ImGui::Button("Wakeup()")) entity->SetSleeping(false);
		ImGui::TreePop();
	}

	ImGui::EndChild();

	ImGui::End();
}

std::string entityListFilter;
void DrawEntityNodeLoop(Entity* ent) {
	if (ent == nullptr)
		return;

	auto type = ((RTTIObject*)ent)->GetRTTI();
	auto typeName = ent->TypeName();
	if (!entityListFilter.empty()
		&& !IsContains(typeName, entityListFilter))
		return;

	ImGuiTreeNodeFlags flags = ImGuiTreeNodeFlags_OpenOnArrow;

	auto childCount = ent->GetChildCount();
	if (childCount == 0)
		flags = ImGuiTreeNodeFlags_Leaf | ImGuiTreeNodeFlags_NoTreePushOnOpen;

	auto isSelected = (g_overlay->selectedEntityUUIDString == ent->GetUUIDString());
	if (isSelected)
		flags = flags | ImGuiTreeNodeFlags_Selected;
	auto uuid = ent->GetUUIDString();

	if (ImGui::TreeNodeEx(ent, flags, "[%s] - %s", typeName, ent->GetName())) {
		for (int i = 0; i < childCount; i++) {
			auto child = ent->GetChild(i);
			DrawEntityNodeLoop(child);
		}

		if (childCount > 0)
			ImGui::TreePop();
	}

	if (ImGui::IsItemClicked()) {
		g_overlay->selectedEntityUUIDString = uuid;
		g_overlay->SetDumpStructPtr(ent, GetRTTITypeSize(type));
	}

};

void OverlayMenu::DrawEntityListViewer() {
	auto entityTotal = entityList->size();
	ImGui::Begin("Entity List");
	ImGui::LabelText("##entity_total", "Entities Total: %zu", entityTotal);

	ImGui::InputText("Entity Filter", &entityListFilter);

	ImGui::BeginChild("EntityListChild", ImVec2(0, 0), true);
	for (Entity* e : entityList->list) {
		if (e->GetParent() == nullptr) {
			DrawEntityNodeLoop(e);
		}
	}

	ImGui::EndChild();
	ImGui::End();
}

void OverlayMenu::DrawTypeListViewer()
{
	BeginWindow("Type List");

	auto& types = objScanner->GetTypes();
	auto typeTotal = types.size();

	ImGui::Text("Total Types: %zu", typeTotal);
	static std::string typeSearch;
	ImGui::InputText("Type Search", &typeSearch);

	ImGui::BeginChild("TypeListTableChild", ImVec2(0, 0), true);
	std::vector<std::string> columeNames = { "Type", "ID","Size" };
	if (ImGui::BeginTable("TypeListTable", columeNames.size(),
		ImGuiTableFlags_ScrollY
		| ImGuiTableFlags_Borders
		| ImGuiTableFlags_RowBg
		| ImGuiTableFlags_Hideable
		| ImGuiTableFlags_Resizable
		| ImGuiTableFlags_Reorderable)) {

		ImGui::TableSetupScrollFreeze(0, 1);
		for (auto& name : columeNames)
			ImGui::TableSetupColumn(name.c_str());

		ImGui::TableHeadersRow();
		for (auto& type : types) {
			auto typeName = type->GetName().c_str();
			if (typeSearch.size() != 0 && !IsContains(typeName, typeSearch))
				continue;

			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			static const RTTI* selectedType;
			if (ImGui::Selectable(typeName, type == selectedType,
				ImGuiSelectableFlags_SpanAllColumns)) {
				selectedType = type;
				SetDumpStructPtr((void*)type, GetRTTITypeSize(type));
			}
			ImGui::TableNextColumn();
			ImGui::Text("%d", type->mId);
			ImGui::TableNextColumn();
			ImGui::Text("0x%x", GetRTTITypeSize(type));
		}

		ImGui::EndTable();
	}
	ImGui::EndChild();

	EndWindow();
}


void OverlayMenu::DrawSymbolInspector()
{
	BeginWindow("Symbol Inspector");
	auto type = objScanner->TryGetObjectType(dumpObjPtr);
	ImGui::Text("Ptr: %p", dumpObjPtr);
	ImGui::Text("Type: %s", objScanner->TryGetObjectTypeName(dumpObjPtr));

	static std::vector<const char*> k_symbolTypeNames = {
		"Symbol",
		"Export"
	};
	if (DecimaNative::IsExportedSymbolGroup(dumpObjPtr)) {
		ExportedSymbolGroup* symbol = (ExportedSymbolGroup*)dumpObjPtr;
		ImGui::Text("Always Export: %s", BoolToStr(symbol->mAlwaysExport));
		ImGui::Text("Namespace: %s", symbol->mNamespace ? symbol->mNamespace : "null");
		ImGui::Text("Members: %zu", symbol->mMembers.size());
		ImGui::Text("Dependencies: %zu", symbol->mDependencies.size());
		std::vector<const char*> columeNames = { "Kind", "Name", "Address" };
		if (BeginTable("exportedMemberTable", columeNames)) {
			for (int i = 0; i < symbol->mMembers.size(); i++) {
				auto& member = symbol->mMembers[i];
				ExportedSymbolMember* memberPtr = &symbol->mMembers[i];
				ImGui::PushID(i);
				auto memberTypeInt = (uint32_t)member.mKind;
				if (BeginTableSelectableNewRow(member.GetKindName(), false)) {
					CopyToClipboard(memberPtr);
					auto type = member.mRTTI;
					auto typeName = type ? type->GetName().c_str() : "null";
					if (member.IsExportFunction()) {
						auto api = DecimaNative::GetGameFunctionAPI(memberPtr);
						if (api) {
							log("selected api: %s", api->ToString());
						}
					}
				}

				NextTextColumn(member.mSymbolName);
				NextTextColumn("%p", memberPtr);
				ImGui::PopID();
			}
			EndTable();
		}
	}
	else {
		ImGui::Text("This object is not ExportedSymbolGroup");
	}

	EndWindow();
}

std::string PtrToStrHex(void* ptr) {
	if (ptr == nullptr) return "0x0";
	return std::format("0x{:X}", (uintptr_t)ptr);
}

void* PtrStrHexToPtr(const std::string str) {
	if (str.empty() || str == "0x0") return nullptr;
	return (void*)(strtoull(str.c_str(), nullptr, 16));
}

void InputIntHex(const char* label, int& value) {
	if (value < 0)
		value = 0;

	auto hexString = std::format("0x{:X}", value);
	ImGui::InputText("", &hexString);
	value = std::stoi(hexString, nullptr, 16);


	ImGuiIO& io = ImGui::GetIO();
	ImGui::SameLine();
	int addValue = 0;
	float h = ImGui::GetFrameHeight();
	if (ImGui::Button("-", ImVec2(h, h)))
		addValue = -1;

	ImGui::SameLine();
	if (ImGui::Button("+", ImVec2(h, h)))
		addValue = 1;;

	if (io.KeyShift)
		addValue *= 0x10;
	else if (io.KeyCtrl)
		addValue *= 0x100;

	value += addValue;

	if (value < 0)
		value = 0;

	ImGui::SameLine();
	ImGui::Text(label);
}

void OverlayMenu::SetDumpStructPtr(void* p, int size)
{
	dumpObjPtr = p;
	if (size > 0) {
		dumpStructSizeCurrent = size;
	}
}

void OverlayMenu::DrawDumpStructMenu()
{
	BeginWindow("Dump Struct");

	std::string dumpStructPtrString = PtrToStrHex(dumpObjPtr);
	ImGui::InputText("Pointer (Hex)", &dumpStructPtrString);
	if (!IsReadable(dumpObjPtr)) {
		ImGui::Text("Pointer can't read");
	}

	int maxStructSize = -1;
	auto currentObjType = objScanner->TryGetObjectType(dumpObjPtr);
	if (currentObjType)
		maxStructSize = GetRTTITypeSize(currentObjType);

	ImGui::Text("Object Type: %s", objScanner->TryGetObjectTypeName(dumpObjPtr));
	ImGui::Text("Instance Kind: %s", objScanner->TryGetObjectInstanceKind(dumpObjPtr));
	ImGui::Text("RTTI Type Size: 0x%x", GetRTTITypeSize(currentObjType));

	dumpObjPtr = PtrStrHexToPtr(dumpStructPtrString);

	if (dumpObjPtr) {
		const int k_DumpStructSizeMin = 0x8;
		InputIntHex("Struct Size", dumpStructSizeCurrent);
		if (dumpStructSizeCurrent < k_DumpStructSizeMin)
			dumpStructSizeCurrent = k_DumpStructSizeMin;

		if (maxStructSize > 0 && dumpStructSizeCurrent > maxStructSize)
			dumpStructSizeCurrent = maxStructSize;

		std::vector<std::string> columeNames = { "Type", "Instance Kind","Offset", "Object Address" };
		if (ImGui::BeginTable("DumpStructTable",
			columeNames.size(),
			ImGuiTableFlags_ScrollY
			| ImGuiTableFlags_Borders
			| ImGuiTableFlags_RowBg
			| ImGuiTableFlags_Hideable
			| ImGuiTableFlags_Resizable
			| ImGuiTableFlags_Reorderable))
		{
			ImGui::TableSetupScrollFreeze(0, 1);
			for (auto& name : columeNames)
				ImGui::TableSetupColumn(name.c_str());

			ImGui::TableHeadersRow();
			for (int offset = 0; offset < dumpStructSizeCurrent; offset += 8) {
				if (currentObjType == nullptr)
					break;

				void* currentFieldAddr = (byte*)dumpObjPtr + offset;
				if (!IsReadable(currentFieldAddr)) continue;
				void* currentObj = *(void**)currentFieldAddr;
				auto type = objScanner->TryGetObjectTypeUnsafe(currentObj);
				if (!type) continue;

				auto typeName = type->GetName().c_str();

				ImGui::PushID(offset);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				if (ImGui::Selectable(typeName, dumpObjPtr == currentObj,
					ImGuiSelectableFlags_SpanAllColumns))
				{
					CopyToClipboard(currentObj);
					dumpObjPtr = currentObj;
				}
				ImGui::TableNextColumn();
				ImGui::Text("%s", objScanner->TryGetObjectInstanceKind(currentObj));
				ImGui::TableNextColumn();
				ImGui::Text("0x%x", offset);
				ImGui::TableNextColumn();
				ImGui::Text("%p", currentObj);
				ImGui::PopID();
			}

			ImGui::EndTable();
		}
	}

	EndWindow();
}

void OverlayMenu::DrawObjectInstanceListViewer()
{
	BeginWindow("Object Instance List");

	const auto& list = objScanner->GetObjectInstances();
	ImGui::Text("Instances: %zu", list.size());
	static std::string searchFilter;
	ImGui::InputText("Instance Search", &searchFilter);

	std::vector<std::string> columeNames = { "Type", "Rva", "Address" };
	if (ImGui::BeginTable("ObjectInstanceTable",
		columeNames.size(),
		ImGuiTableFlags_ScrollY
		| ImGuiTableFlags_Borders
		| ImGuiTableFlags_RowBg
		| ImGuiTableFlags_Hideable
		| ImGuiTableFlags_Resizable
		| ImGuiTableFlags_Reorderable))
	{
		ImGui::TableSetupScrollFreeze(0, 1);
		for (auto& name : columeNames)
			ImGui::TableSetupColumn(name.c_str());

		ImGui::TableHeadersRow();
		for (void* instancePtr : list) {
			auto o = (RTTIObject*)instancePtr;
			auto type = objScanner->TryGetObjectTypeUnsafe(o);
			const char* typeName = type->GetName().c_str();

			if (IsSearchFilterSkipItem(typeName, searchFilter)) continue;

			ImGui::PushID(o);
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			static RTTIObject* selectedInstance;
			if (ImGui::Selectable(typeName, selectedInstance == o,
				ImGuiSelectableFlags_SpanAllColumns))
			{
				selectedInstance = o;
				CopyToClipboard(o);
				SetDumpStructPtr(o, GetRTTITypeSize(type));
			}
			ImGui::TableNextColumn();
			ImGui::Text("0x%x", AddrToRva(o));
			ImGui::TableNextColumn();
			ImGui::Text("%p", o);
			ImGui::PopID();
		}


		ImGui::EndTable();
	}

	EndWindow();
}

#include "SymbolExporter.h"
void OverlayMenu::DrawFunctionAPIExporter()
{
	BeginWindow("Function API Exporter");

	if (ImGui::Button("Export all function to text file")) {
		SymbolExporter::ExportAllFuncionAPI();
	}

	static const char* cHeaderFileName = "dsdc_header.h";
	auto btnExportCHeaderFileLabel = std::format("Export C Header File : {}", cHeaderFileName);
	if (ImGui::Button(btnExportCHeaderFileLabel.c_str())) {
		SymbolExporter::ExportCHeaderFile(cHeaderFileName);
	}

	static bool refreshList = false;
	static std::string searchFuncName;
	if (gui::InputText("Search", &searchFuncName)) {
		refreshList = true;
	}

	static std::vector<std::string> tableColumNames = { "Export Name", "Signature", "Name" };
	static std::vector<std::vector<std::string>> tableItems;

	if (tableItems.empty())
		refreshList = true;

	if (refreshList) {
		refreshList = false;
		tableItems.clear();
		auto& functions = DecimaNative::g_gameFunctionAPIMap;
		for (auto& funcPair : functions) {
			auto& fn = *funcPair.second;
			if (IsSearchFilterSkipItem(fn.exportName, searchFuncName)) {
				continue;
			}

			std::vector<std::string> colItems;
			colItems.push_back(fn.exportName);
			colItems.push_back(fn.signature);
			colItems.push_back(fn.name);
			tableItems.push_back(colItems);
		}
	}

	DrawTableTemplate("Function API List", tableColumNames, tableItems);

	EndWindow();
}

void OverlayMenu::OnPresent()
{
	UpdateOverlayToggle();
	if (!isShow)
		return;

	// init imgui
	if (isInitializeBeforePresent == false)
		InitializeBeforePresent();

	// init frame
	ImGui_ImplDX12_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	// setup safe thread
	auto lock = objScanner->GetLock();

	// ready to draw
	// Entity Inspector
	DrawEntityListViewer();
	DrawEntityInspector();
	DrawTypeListViewer();
	DrawSymbolInspector();
	DrawDumpStructMenu();
	DrawObjectInstanceListViewer();
	DrawFunctionAPIExporter();

	for (auto& overlay : m_overlays) {
		auto title = overlay->GetWindowTitle();
		overlay->BeginWindow(title);
		overlay->OnDraw();
		overlay->EndWindow();
	}

	// final
	DrawImGuiData();
}
void OverlayMenu::DrawImGuiData()
{
	ImGui::Render();
	ImDrawData* drawData = ImGui::GetDrawData();
	if (!drawData->Valid || drawData->CmdListsCount == 0)
		return;

	auto swapChain = renderer->m_swapChain;
	const auto currentBufferIndex = swapChain->GetCurrentBackBufferIndex();
	struct BackBuffer {
		ComPtr<ID3D12Resource> buffer;
		CD3DX12_CPU_DESCRIPTOR_HANDLE handle;
	};
	static std::vector<BackBuffer*> g_backBuffers;
	static bool isInitBackBuffers = false;


	// create new back buffers
	if (isInitBackBuffers == false) {
		isInitBackBuffers = true;

		DXGI_SWAP_CHAIN_DESC swapChainDesc;
		swapChain->GetDesc(&swapChainDesc);
		auto bufferCount = swapChainDesc.BufferCount;
		auto device = renderer->GetDevice();
		auto rtvDescriptorSize = device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
		for (int i = 0; i < bufferCount; i++) {
			// new buffer
			auto backBuffer = new BackBuffer();
			swapChain->GetBuffer(i, IID_PPV_ARGS(&backBuffer->buffer));

			CD3DX12_CPU_DESCRIPTOR_HANDLE handle(
				RtvDescriptorHeap->GetCPUDescriptorHandleForHeapStart(),
				i, rtvDescriptorSize);
			device->CreateRenderTargetView(backBuffer->buffer.Get(), nullptr, handle);
			backBuffer->handle = handle;

			// added
			g_backBuffers.push_back(backBuffer);
		}
	}


	// Reset command allocator, command list, then draw
	auto allocator = CommandAllocators[currentBufferIndex];
	allocator->Reset();

	// clear color
	const auto currentBackBuffer = g_backBuffers[currentBufferIndex];
	auto& rtvHandle = currentBackBuffer->handle;

	cmd->Reset(allocator, nullptr);
	D3D12_RESOURCE_BARRIER barrier = {
		.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
		.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
		.Transition = {
			.pResource = currentBackBuffer->buffer.Get(),
			.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
			.StateBefore = D3D12_RESOURCE_STATE_PRESENT,
			.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET,
		},
	};
	cmd->ResourceBarrier(1, &barrier);
	cmd->OMSetRenderTargets(1, &rtvHandle, false, nullptr);
	cmd->SetDescriptorHeaps(1, &SrvDescriptorHeap);
	ImGui_ImplDX12_RenderDrawData(drawData, cmd);


	std::swap(barrier.Transition.StateBefore, barrier.Transition.StateAfter);
	cmd->ResourceBarrier(1, &barrier);
	cmd->Close();

	renderer->m_commandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&cmd));
}

