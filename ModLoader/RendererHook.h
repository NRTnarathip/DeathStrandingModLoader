#pragma once
#include "utils.h"
#include <d3dx12.h>
#include <dxgi1_6.h>

class RendererHook
{
public:
	static RendererHook& Instance()
	{
		static RendererHook inst;
		return inst;
	}

	ID3D12Device* m_pDevice = 0;
	inline ID3D12Device* GetDevice() const {
		return m_pDevice;
	}

	IDXGIFactory2* m_pFactory = 0;
	IDXGISwapChain3* m_pSwapChain = 0;

	RendererHook();
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

