#pragma once
#include "utils.h"
#include <d3dx12.h>
#include <dxgi1_6.h>

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


class RendererHook
{
public:
	static RendererHook& Instance()
	{
		static RendererHook inst;
		return inst;
	}

	ID3D12Device14* m_pDevice = 0;
	inline ID3D12Device14* GetDevice() const {
		return m_pDevice;
	}

	IDXGIFactory2* m_pFactory = 0;
	IDXGISwapChain3* m_pSwapChain = 0;

	RendererHook();
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
		return m_pDevice->GetDeviceRemovedReason();
	}
};

