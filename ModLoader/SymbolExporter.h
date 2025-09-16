#pragma once
#include <iostream>

class SymbolExporter
{
public:
	static void ExportAllFuncionAPI();
	static void ExportCHeaderFile(std::string fileName);
	static void ExportCHeaderAPILua(std::string saveFileName);
};

