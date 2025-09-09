#include "OverlayMenu.h"
#include "RendererHook.h"
#include "utils.h"
#include "ObjectScanner.h"
#include "extern/decima-native/source/Core/RTTI.h"
#include "extern/decima-native/source/Core/RTTIObject.h"
#include "extern/imgui/imgui.h"
#include "extern/imgui/backends/imgui_impl_win32.h"
#include "extern/imgui/backends/imgui_impl_dx12.h"
#include "extern/imgui/misc/cpp/imgui_stdlib.h"
#include <format>
#include <wrl/client.h>
#include <numbers> // std::numbers
#include <algorithm>

using Microsoft::WRL::ComPtr;

OverlayMenu* g_overlay;

OverlayMenu::OverlayMenu()
{
	g_overlay = this;
	renderer = RendererHook::Instance();
	objScanner = ObjectScanner::Instance();
	entityList = &objScanner->entityList;
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

	renderer->RegisterPresent([&](UINT sync, UINT flags)
		{
			OnPresent(sync, flags);
		}
	);

	log("OverlayMenu init successfully");
}

std::vector<ID3D12CommandAllocator*> CommandAllocators;
ID3D12GraphicsCommandList* CommandList;
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

	device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, CommandAllocators[0], nullptr, IID_PPV_ARGS(&CommandList));
	CommandList->Close();



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

bool IsContains(const std::string& src, const std::string& word) {
	std::string srcLowerCase = src;
	std::string wordLowerCase = word;
	std::transform(srcLowerCase.begin(), srcLowerCase.end(), srcLowerCase.begin(), ::tolower);
	std::transform(wordLowerCase.begin(), wordLowerCase.end(), wordLowerCase.begin(), ::tolower);
	return srcLowerCase.find(wordLowerCase) != std::string::npos;
}

MyVector3 RotationMatrixToEuler(MyRotMatrix& rotMatrix)
{
	auto& col0 = rotMatrix.Col0;
	auto& col1 = rotMatrix.Col1;
	auto& col2 = rotMatrix.Col2;
	auto pi = std::numbers::pi;
	auto pi_2 = pi / 2.0;
	MyVector3 euler;
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

void OverlayMenu::DrawEntityInspectorMenu() {
	ImGui::Begin("Entity Inspector");

	auto entity = entityList->get(selectedEntityUUID);
	if (entity == nullptr) {
		ImGui::LabelText("##no_entity_selected", "No entity selected");
		ImGui::End();
		return;
	}

	auto entityType = entity->TypeName();
	ImGui::Text("type: %s", entityType);
	ImGui::Text("uuid: %s", selectedEntityUUID.c_str());

	if (ImGui::TreeNode("Transform")) {
		{
			ImGui::Text("Local Transform");
			auto pos = entity->transform.position;
			ImGui::Text("  position: %.2f, %.2f, %.2f", pos.x, pos.y, pos.z);
			auto rot = RotationMatrixToEuler(entity->transform.rotation);
			ImGui::Text("  rotation: %.2f, %.2f, %.2f", rot.x, rot.y, rot.z);
		}
		{
			ImGui::Text("World Transform");
			auto pos2 = entity->transform2.position;
			ImGui::Text("  position: %.2f, %.2f, %.2f", pos2.x, pos2.y, pos2.z);
			auto rot2 = RotationMatrixToEuler(entity->transform2.rotation);
			ImGui::Text("  rotation: %.2f, %.2f, %.2f", rot2.x, rot2.y, rot2.z);
		}
		ImGui::TreePop();
	}

	auto componentArray = entity->GetAllComponent();
	if (ImGui::TreeNode(componentArray, "Components (%d)", componentArray->size())) {
		int compIndex = -1;
		for (auto comp : *componentArray) {
			compIndex++;
			auto compRTTI = (RTTIObject*)comp;
			auto compType = compRTTI->GetRTTI();
			std::string compTypeName = compType->GetName().str();
			ImGui::Text("[%d] %s", compIndex, compTypeName.c_str());
		}
		ImGui::TreePop();
	}

	ImGui::End();
}

std::string entityListFilter;
void DrawEntityNodeLoop(Entity* ent) {
	if (ent == nullptr)
		return;

	auto typeName = ent->TypeName();
	if (!entityListFilter.empty()
		&& !IsContains(typeName, entityListFilter))
		return;

	if (ImGui::TreeNode(ent, "[%p] %s", ent, typeName)) {
		auto childCount = ent->GetChildCount();
		for (int i = 0; i < childCount; i++) {
			auto child = ent->GetChild(i);
			DrawEntityNodeLoop(child);
		}

		ImGui::TreePop();
	}

	if (ImGui::IsItemClicked())
		g_overlay->selectedEntityUUID = ent->GetUUID();

};
void OverlayMenu::DrawEntityListViewer() {
	// lock first!!
	std::lock_guard<std::recursive_mutex> lock(entityList->mtx);
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

void OverlayMenu::OnPresent(unsigned int sync, unsigned int flags)
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

	// helper safe thread
	std::lock_guard<std::recursive_mutex> lock(entityList->mtx);

	// Entity Inspector
	DrawEntityListViewer();
	DrawEntityInspectorMenu();

	// final
	ImGui::Render();
	DrawImGuiData();
}
void OverlayMenu::DrawImGuiData()
{
	ImDrawData* drawData = ImGui::GetDrawData();
	if (!drawData->Valid || drawData->CmdListsCount == 0)
		return;

	auto swapChain = renderer->m_swapChain;
	ComPtr<ID3D12Resource> backBuffer;
	const auto bufferIndex = swapChain->GetCurrentBackBufferIndex();
	swapChain->GetBuffer(bufferIndex, IID_PPV_ARGS(&backBuffer));

	// Create a brand new RTV each frame. Tracking this in engine code is too difficult.
	const auto& rtvHandle = RtvDescriptorHeap->GetCPUDescriptorHandleForHeapStart();
	auto device = renderer->GetDevice();
	device->CreateRenderTargetView(backBuffer.Get(), nullptr, rtvHandle);

	// Reset command allocator, command list, then draw
	auto allocator = CommandAllocators[bufferIndex];
	allocator->Reset();

	D3D12_RESOURCE_BARRIER barrier = {
		.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION,
		.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE,
		.Transition = {
			.pResource = backBuffer.Get(),
			.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
			.StateBefore = D3D12_RESOURCE_STATE_PRESENT,
			.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET,
		},
	};

	CommandList->Reset(allocator, nullptr);
	CommandList->ResourceBarrier(1, &barrier);

	CommandList->SetDescriptorHeaps(1, &SrvDescriptorHeap);
	CommandList->OMSetRenderTargets(1, &rtvHandle, false, nullptr);
	ImGui_ImplDX12_RenderDrawData(drawData, CommandList);

	std::swap(barrier.Transition.StateBefore, barrier.Transition.StateAfter);
	CommandList->ResourceBarrier(1, &barrier);
	CommandList->Close();

	renderer->m_commandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&CommandList));
}

