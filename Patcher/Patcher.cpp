// Patcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	const char* game = "E:\\SteamLibrary\\steamapps\\common\\DEATH STRANDING DIRECTORS CUT\\ds.exe";
	// original: "DisplayColor"
	uintptr_t dllNameAddress = 0x143BA4030;
	uint64_t dllNameBits = 0x006c6c642e646f6d;

	// in void My_AllocateMemForDummy(ulonglong size,ulonglong aligned) 
	uintptr_t funcPatchAddress = 0x38f9c34;
	uintptr_t retAddr = 0x38F9C44;
	const char* dllName = "mod.dll";
	char* funcBytes = new char{
		// lea rcx, ds:[0x00007FF623774030]
		//48 8D 0D F5 A3 2A 00

		// call qword ptr ds:[0x00007FF62370A5B8]
		//FF 15 74 09 24 00
	};

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
