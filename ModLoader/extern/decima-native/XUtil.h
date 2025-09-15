#pragma once

#include <stddef.h>
#include <vector>
#include <type_traits>

namespace XUtil {

    uintptr_t FindPattern(uintptr_t StartAddress, uintptr_t MaxSize, const char *Mask);

    std::vector<uintptr_t> FindPatterns(uintptr_t StartAddress, uintptr_t MaxSize, const char *Mask);

    bool GetPESectionRange(uintptr_t ModuleBase, const char *Section, uintptr_t *Start, uintptr_t *End);

}