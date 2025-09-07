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
#include <algorithm>

using Microsoft::WRL::ComPtr;

OverlayMenu* g_overlay;

OverlayMenu::OverlayMenu()
{
	renderer = RendererHook::Instance();
	g_overlay = this;
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


	// draw menu here
	//ImGui::ShowDemoWindow();
	ObjectScanner* objScanner = ObjectScanner::Instance();
	objScanner->ScanAllObject();

	auto entityList = &objScanner->entityList;

	// lock first!!
	std::lock_guard<std::recursive_mutex> lock(entityList->mtx);
	auto entityTotal = entityList->size();
	ImGui::Begin("Entity List");
	ImGui::LabelText("##entitycount", "Total Entities: %zu", entityTotal);

	ImGui::BeginChild("EntityListChild", ImVec2(0, 0), true);

	static std::string entityListFilter;
	ImGui::InputText("Entity Filter", &entityListFilter);

	int index = -1;
	for (Entity* e : entityList->list) {
		ImGui::PushID(e);
		index++;

		auto entityRTTI = (RTTIObject*)e;
		auto type = entityRTTI->GetRTTI();
		std::string typeNameString = type->GetName().str();
		bool anyMatch = true;
		if (!entityListFilter.empty())
			anyMatch = IsContains(typeNameString, entityListFilter);

		if (!anyMatch) {
			ImGui::PopID();
			continue;
		}

		std::string label = "[" + std::to_string(index) + "] " + typeNameString;

		if (ImGui::TreeNode(label.c_str())) {
			auto pos = e->position;
			auto ptr = (byte*)e;
			ImGui::Text("ptr: %p", e);
			ImGui::Text("position: %.2f, %.2f, %.2f", pos.x, pos.y, pos.z);

			auto vtable = *(void***)e;
			ImGui::Text("VTable rva: %llx", ConvertAddressToRva(vtable));
			ImGui::Text("GetRTTI() rva: %llx", ConvertAddressToRva(vtable[0]));
			ImGui::Text("Deconstruct rva: %llx", ConvertAddressToRva(vtable[1]));
			const Entity* parent = nullptr;
			try {
				parent = entityRTTI->Get<const Entity*>("Parent");
				if (parent) {
					log("found parent: %p", parent);
				}
			}
			catch (...) {}
			ImGui::Text("Parent: %p", parent);

			auto componentContainer = e->GetAllComponent();
			auto componentArray = &componentContainer->Components;
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

			ImGui::TreePop();
		}

		ImGui::PopID();
	}

	ImGui::EndChild();


	ImGui::End();


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

