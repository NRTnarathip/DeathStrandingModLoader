#pragma once
#include "utils.h"
#include <d3dx12.h>
#include <dxgi1_6.h>
#include <functional>
#include <vector>

typedef HRESULT(*CreateReservedResource_t)(
	ID3D12Device* self,
	_In_  const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riid,
	_COM_Outptr_opt_  void** ppvResource);

typedef HRESULT(*CreateHeap_t)(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_opt_  void** ppvHeap);

typedef void (*ExecuteCommandLists_t)(
	ID3D12CommandQueue* self,
	_In_  UINT NumCommandLists,
	_In_reads_(NumCommandLists)  ID3D12CommandList* const* ppCommandLists);

typedef HRESULT(*CreateCommandQueue_t)(
	ID3D12Device* self,
	_In_  const D3D12_COMMAND_QUEUE_DESC* pDesc,
	REFIID riid,
	_COM_Outptr_  void** ppCommandQueue);

typedef HRESULT(*CreateSwapChainForHwnd_t)(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
	);

typedef HRESULT(*MySetupDx12_t)(char* p1, uint64_t a2, int p3);

typedef HRESULT(*CreateCommandList_t)(
	ID3D12Device* self,
	_In_  UINT nodeMask,
	_In_  D3D12_COMMAND_LIST_TYPE type,
	_In_  ID3D12CommandAllocator* pCommandAllocator,
	_In_opt_  ID3D12PipelineState* pInitialState,
	REFIID riid,
	_COM_Outptr_  void** ppCommandList
	);

typedef void (*CopyTextureRegion_t)(
	ID3D12GraphicsCommandList* self,
	const D3D12_TEXTURE_COPY_LOCATION* pDst,
	UINT                              DstX,
	UINT                              DstY,
	UINT                              DstZ,
	const D3D12_TEXTURE_COPY_LOCATION* pSrc,
	const D3D12_BOX* pSrcBox
	);

typedef HRESULT(*CreateCommittedResource_t)(
	ID3D12Device* self,
	_In_  const D3D12_HEAP_PROPERTIES* pHeapProperties,
	D3D12_HEAP_FLAGS HeapFlags,
	_In_  const D3D12_RESOURCE_DESC* pDesc,
	D3D12_RESOURCE_STATES InitialResourceState,
	_In_opt_  const D3D12_CLEAR_VALUE* pOptimizedClearValue,
	REFIID riidResource,
	_COM_Outptr_opt_  void** ppvResource);

typedef HRESULT(*ID3D12Resource_SetName_t)(ID3D12Resource* self, _In_z_  LPCWSTR Name);

typedef HRESULT(*ID3D12Resource_Map_t)(
	ID3D12Resource* self, UINT Subresource,
	_In_opt_  const D3D12_RANGE* pReadRange,
	_Outptr_opt_result_bytebuffer_(_Inexpressible_("Dependent on resource"))  void** ppData);

typedef void(*ID3D12Resource_Unmap_t)(
	ID3D12Resource* self, UINT Subresource,
	_In_opt_  const D3D12_RANGE* pWrittenRange);

using OnPresent_t = std::function<void()>;

class Logger;

class RendererHook
{
public:
	static RendererHook* Instance()
	{
		static RendererHook inst;
		return &inst;
	}
	RendererHook();

	ID3D12Device14* m_device = 0;
	inline ID3D12Device14* GetDevice() const {
		return m_device;
	}
	HWND GetHwnd();

	IDXGIFactory2* m_factory = 0;
	IDXGISwapChain3* m_swapChain = 0;
	ID3D12CommandQueue* m_commandQueue;

	void logFormat(const char* format, ...);
	void __stdcall HK_ExecuteCommandLists(ID3D12CommandQueue* self, UINT NumCommandLists, ID3D12CommandList* const* ppCommandLists);
	HRESULT __stdcall HK_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC* pDesc, REFIID riid, void** ppCommandQueue);
	HRESULT HK_SetupDx12(char* p1, uint64_t p2, int p3);
	HRESULT HK_CreateSwapChainForHwnd(
		IDXGIFactory2* self,
		IUnknown* pDevice,
		HWND hWnd,
		const DXGI_SWAP_CHAIN_DESC1* pDesc,
		const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
		IDXGIOutput* pRestrictToOutput,
		IDXGISwapChain1** ppSwapChain);

	inline HRESULT GetDeviceRemoveCode() {
		return m_device->GetDeviceRemovedReason();
	}

	void RegisterPresent(OnPresent_t callback);

	HRESULT HK_Present(void* pSwapChain, UINT SyncInterval, UINT Flags);

private:
	std::vector<OnPresent_t> m_presentCallbacks;
	bool m_isEnableLog = false;
	Logger* m_logger;
	HWND m_window = 0;
};


