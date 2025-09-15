#pragma once

#include <array>
#include <stdexcept>

template<typename T, size_t Digits = sizeof(T) * 2>
constexpr static uint32_t ParseHex(const char *Hex) {
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

class GGUUID {
public:
    GGUUID() {
    }

    template<size_t Length>
    constexpr GGUUID(const char (&UUID)[Length]) : GGUUID(Parse(UUID)) {
    }

    bool operator==(const GGUUID &Other) const {
        return mAll == Other.mAll;
    }

    bool operator!=(const GGUUID &Other) const {
        return mAll != Other.mAll;
    }

    template<size_t Length_>
    constexpr static GGUUID Parse(const char (&UUID)[Length_]) {
        constexpr auto Length = Length_ - 1;

        if (Length != 36)
            throw std::invalid_argument("Invalid GUID length specified");
        if (UUID[8] != '-' || UUID[13] != '-' || UUID[18] != '-' || UUID[23] != '-')
            throw std::invalid_argument("Malformed GUID");

        GGUUID id{};
        id.mData1 = ParseHex<uint32_t>(UUID + 0);
        id.mData2 = ParseHex<uint16_t>(UUID + 9);
        id.mData3 = ParseHex<uint16_t>(UUID + 14);
        id.mData4[0] = ParseHex<uint8_t>(UUID + 19);
        id.mData4[1] = ParseHex<uint8_t>(UUID + 21);
        id.mData4[2] = ParseHex<uint8_t>(UUID + 24);
        id.mData4[3] = ParseHex<uint8_t>(UUID + 26);
        id.mData4[4] = ParseHex<uint8_t>(UUID + 28);
        id.mData4[5] = ParseHex<uint8_t>(UUID + 30);
        id.mData4[6] = ParseHex<uint8_t>(UUID + 32);
        id.mData4[7] = ParseHex<uint8_t>(UUID + 34);

        return id;
    }

private:
    union {
        struct {
            uint32_t mData1;
            uint16_t mData2;
            uint16_t mData3;
            uint8_t mData4[8];
        };

        std::array<std::uint8_t, 16> mAll;
    };
};
