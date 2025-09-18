#pragma once

#include <array>
#include <stdexcept>

template<typename T, size_t Digits = sizeof(T) * 2>
constexpr static uint32_t ParseHex(const char* Hex) {
	auto charToByte = [](char ch) constexpr -> uint32_t {
		if (ch >= 'A' && ch <= 'F')
			return ch - 'A' + 10;
		if (ch >= 'a' && ch <= 'f')
			return ch - 'a' + 10;
		if (ch >= '0' && ch <= '9')
			return ch - '0';

		throw std::invalid_argument("Invalid hexadecimal digit");
		};

	T value{};

	for (size_t i = 0; i < Digits; i++)
		value |= charToByte(Hex[i]) << (4 * (Digits - i - 1));

	return value;
}
