#include "ExportedSymbolManager.h"
#include "utils.h"

MyVector* ExportedSymboManager::GetSymbolList()
{
	static MyVector* symbolList = (MyVector*)GetAddrFromRva(0x4f66a70);
	return symbolList;
}
