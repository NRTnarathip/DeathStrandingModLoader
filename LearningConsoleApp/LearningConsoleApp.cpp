#include <iostream>
#include <fstream> 
#include <Windows.h>
#include <vector>

int main()
{
	std::cout << "Hello World!\n";

	const char* binPath = "E:\SteamLibrary\steamapps\common\DEATH STRANDING DIRECTORS CUT\data\59b95a781c9170b0d13773766e27ad90.bin";

	std::ifstream file(binPath, std::ios::binary);

	const int length = 0x2000;
	std::vector<char> buffer(length);
	file.read(buffer.data(), length);

	printf("done read buffer\n");
	system("pause");
}
