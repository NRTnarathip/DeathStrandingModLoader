#include <iostream>
#include <fstream> 
#include <Windows.h>
#include <vector>
#include <Windows.h>

static void* mi_win_virtual_allocx(void* addr, size_t size, size_t try_alignment, DWORD flags) {
	return VirtualAlloc(NULL, size, flags, PAGE_READWRITE);
}

int main()
{
	mi_win_virtual_allocx(NULL, 1024 * 1024, MEM_COMMIT | MEM_RESERVE, 0x99999);

	DWORD dLastError = GetLastError();
	LPCTSTR strErrorMessage = NULL;

	FormatMessage(
		FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_ARGUMENT_ARRAY | FORMAT_MESSAGE_ALLOCATE_BUFFER,
		NULL,
		dLastError,
		0,
		(LPWSTR)&strErrorMessage,
		0,
		NULL);

	//Prints debug output to the console
	MessageBox(nullptr, strErrorMessage, TEXT("Information"), MB_OK);

	printf("done read buffer\n");
	system("pause");
}
