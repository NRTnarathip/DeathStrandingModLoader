// LaernNumaNode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <psapi.h>
#include <tchar.h>

int main()
{
	std::cout << "Hello World!\n";
	ULONG HighestNodeNumber;
	PVOID* Buffers = NULL;

	SYSTEM_INFO SystemInfo;
	GetSystemInfo(&SystemInfo);
	auto NumberOfProcessors = SystemInfo.dwNumberOfProcessors;
	auto PageSize = SystemInfo.dwPageSize;

	//
	// Get the highest node number.
	//

	if (!GetNumaHighestNodeNumber(&HighestNodeNumber))
	{
		_tprintf(_T("GetNumaHighestNodeNumber failed: %d\n"), GetLastError());
	}

	if (HighestNodeNumber == 0)
	{
		_putts(_T("Not a NUMA system - exiting"));
	}

	std::printf("exit");
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
