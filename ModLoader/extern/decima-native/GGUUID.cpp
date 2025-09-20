#include "GGUUID.h"
#include <sstream>
#include <iomanip>

std::string GGUUID::ToString() {
	std::ostringstream oss;
	oss << std::hex << std::setfill('0');

	// Data1 (4 bytes, little-endian)
	uint32_t data1 = uuid[3] << 24 | uuid[2] << 16 | uuid[1] << 8 | uuid[0];
	oss << std::setw(8) << data1 << "-";

	// Data2 (2 bytes, little-endian)
	uint16_t data2 = uuid[5] << 8 | uuid[4];
	oss << std::setw(4) << data2 << "-";

	// Data3 (2 bytes, little-endian)
	uint16_t data3 = uuid[7] << 8 | uuid[6];
	oss << std::setw(4) << data3 << "-";

	// Data4 (8 bytes, big-endian/direct)
	for (int i = 8; i < 10; ++i) oss << std::setw(2) << (int)uuid[i];
	oss << "-";
	for (int i = 10; i < 16; ++i) oss << std::setw(2) << (int)uuid[i];

	auto string = oss.str();
	return string;
}

bool GGUUID::IsEmpty()
{
	static uint8_t uuidEmpty[16] = { 0 };
	return uuid == uuidEmpty;
}

bool GGUUID::IsEmptyString(std::string string)
{
	static std::string empty = "00000000-0000-0000-0000-000000000000";
	if (string.empty())
		return true;
	if (string == empty)
		return true;

	return false;
}

