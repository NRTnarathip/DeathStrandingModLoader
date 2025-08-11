#include "RendererHook.h"
#include "utils.h";
#include <Windows.h>

typedef HRESULT(*CreateSwapChainForHwnd_t)(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
	);
CreateSwapChainForHwnd_t backup_CreateSwapChainForHwnd;
HRESULT HK_CreateSwapChainForHwnd_Static(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND                                  hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain
) {
	return RendererHook::Instance().HK_CreateSwapChainForHwnd(self, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
}


typedef HRESULT(*MySetupDx12_t)(char* p1, uint64_t a2, int p3);
MySetupDx12_t backup_MySetupDx12;
HRESULT HK_MySetupDx12_Static(char* p1, uint64_t p2, int p3) {
	return RendererHook::Instance().HK_SetupDx12(p1, p2, p3);
}

HRESULT RendererHook::HK_SetupDx12(char* p1, uint64_t p2, int p3)
{
	log("Hook Begin: HK_MySetupDx12");
	auto result = backup_MySetupDx12(p1, p2, p3);
	log("Hook End: HK_MySetupDx12");
	log("  result: %d", result);

	// init variable
	m_pDevice = *(ID3D12Device**)GetAddressFromRva(0x5558FA0);
	m_pFactory = *(IDXGIFactory2**)(p1 + 0x10);


	// ready hooks api
	{
		void** vtable = *(void***)m_pFactory;
		void* target = vtable[15];
		HookFuncAddr(target, &HK_CreateSwapChainForHwnd_Static, &backup_CreateSwapChainForHwnd);
	}
	{
		void** vtable = *(void***)m_pDevice;
		//HookFuncAddr(vtable[8], &HK_CreateCommandQueue, &origin_CreateCommandQueue);
		//HookFuncAddr(vtable[12], &HK_CreateCommandList, &backup_CreateCommandList);
		//HookFuncAddr(vtable[27], &HK_CreateCommittedResource, &backup_CreateCommittedResource);
		//HookFuncAddr(vtable[31], &HK_CreateSharedHandle, &backup_CreateSharedHandle);
		//HookFuncAddr(vtable[20], &HK_CreateRenderTargetView, &backup_CreateRenderTargetView);
	}

	return result;
}

HRESULT RendererHook::HK_CreateSwapChainForHwnd(
	IDXGIFactory2* self,
	IUnknown* pDevice,
	HWND hWnd,
	const DXGI_SWAP_CHAIN_DESC1* pDesc,
	const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
	IDXGIOutput* pRestrictToOutput,
	IDXGISwapChain1** ppSwapChain)
{
	log("Hook Begin HK_CreateSwapChainForHwnd");
	auto res = backup_CreateSwapChainForHwnd(
		self,
		pDevice, hWnd, pDesc,
		pFullscreenDesc, pRestrictToOutput, ppSwapChain);
	m_pSwapChain = *(IDXGISwapChain3**)ppSwapChain;
	log("Hook End HK_CreateSwapChainForHwnd");
	log("  result: 0x%x", res);

	log("setup hook Present, other...");

	void** vtable = *(void***)(m_pSwapChain);
	auto presentFuncAddr = vtable[8];

	//HookFuncAddr(presentFuncAddr, &HK_DXGIPresent, &backup_DXGI_Present);
	//log("hook HK_DXGIPresent");

	return res;

}

RendererHook::RendererHook()
{
	log("initialize renderer hook..");

	HookFuncRva(0x19a6980, &HK_MySetupDx12_Static, &backup_MySetupDx12);
}
