#include <Windows.h>
#include <algorithm>

#include "XUtil.h"

namespace XUtil {

    auto ParsePattern(const char *Mask) {
        std::vector<std::pair<uint8_t, bool>> pattern;

        for (size_t i = 0; i < strlen(Mask);) {
            if (Mask[i] != '?') {
                pattern.emplace_back(static_cast<uint8_t>(strtoul(&Mask[i], nullptr, 16)), false);
                i += 3;
            } else {
                pattern.emplace_back(0x00, true);
                i += 2;
            }
        }

        return pattern;
    }

    uintptr_t FindPattern(uintptr_t StartAddress, uintptr_t MaxSize, const char *Mask) {
        const auto pattern = ParsePattern(Mask);
        const auto dataStart = reinterpret_cast<const uint8_t *>(StartAddress);
        const auto dataEnd = dataStart + MaxSize + 1;

        auto ret = std::search(dataStart, dataEnd, pattern.begin(), pattern.end(),
                               [](uint8_t CurrentByte, std::pair<uint8_t, bool> Pattern) {
                                   return Pattern.second || (CurrentByte == Pattern.first);
                               });

        if (ret == dataEnd)
            return 0;

        return std::distance(dataStart, ret) + StartAddress;
    }

    std::vector<uintptr_t> FindPatterns(uintptr_t StartAddress, uintptr_t MaxSize, const char *Mask) {
        std::vector<uintptr_t> results;

        const auto pattern = ParsePattern(Mask);
        const auto dataStart = reinterpret_cast<const uint8_t *>(StartAddress);
        const auto dataEnd = dataStart + MaxSize + 1;

        for (auto i = dataStart;;) {
            auto ret = std::search(i, dataEnd, pattern.begin(), pattern.end(),
                                   [](uint8_t CurrentByte, std::pair<uint8_t, bool> Pattern) {
                                       return Pattern.second || (CurrentByte == Pattern.first);
                                   });

            // No byte pattern matched, exit loop
            if (ret == dataEnd)
                break;

            uintptr_t addr = std::distance(dataStart, ret) + StartAddress;
            results.push_back(addr);

            i = reinterpret_cast<const uint8_t *>(addr + 1);
        }

        return results;
    }

    bool GetPESectionRange(uintptr_t ModuleBase, const char *Section, uintptr_t *Start, uintptr_t *End) {
        auto ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS64>(ModuleBase +
                                                               reinterpret_cast<PIMAGE_DOS_HEADER>(ModuleBase)->e_lfanew);
        auto section = IMAGE_FIRST_SECTION(ntHeaders);

        // Assume PE header if no section
        if (!Section || strlen(Section) <= 0) {
            if (Start)
                *Start = ModuleBase;

            if (End)
                *End = ModuleBase + ntHeaders->OptionalHeader.SizeOfHeaders;

            return true;
        }

        for (uint32_t i = 0; i < ntHeaders->FileHeader.NumberOfSections; i++, section++) {
            // GetName might not be null-terminated
            if (!memcmp(section->Name, Section, sizeof(IMAGE_SECTION_HEADER::Name))) {
                if (Start)
                    *Start = ModuleBase + section->VirtualAddress;

                if (End)
                    *End = ModuleBase + section->VirtualAddress + section->Misc.VirtualSize;

                return true;
            }
        }

        return false;
    }

}