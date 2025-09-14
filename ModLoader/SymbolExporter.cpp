#include "SymbolExporter.h"
#include <filesystem>
#include "utils.h"
#include "DecimaNative.h"

void SymbolExporter::ExportAllFuncionAPI()
{
	log("try exporting all function...");

	auto& functions = DecimaNative::g_gameFunctionAPIMap;

	// write file
	log("exporting to text file...");
	std::ofstream txtFile("dsdc_export_functions.txt", std::ios::out | std::ios::trunc);
	for (auto& funcPair : functions) {
		auto& func = funcPair.second;
		auto signature = func.ToString();
		txtFile << std::format("[[functionID]] {}\n", func.uniqueName);
		txtFile << std::format("[[signature]]  {}\n", func.signatureString);
		txtFile << "\n";
	}

	log("exporting to header file...");
	std::ofstream headerFile("dsdc_export_functions.txt", std::ios::out | std::ios::trunc);
	for (auto& funcPair : functions) {
		auto& func = funcPair.second;
		auto signature = func.ToString();

	}

	log("exported all function");
}
