#pragma once
#include <iostream>
#include <cstdint>

struct GGUUID {
	uint8_t uuid[16];
	std::string ToString();
	bool IsEmpty();
	static bool IsEmptyString(std::string string);
};
