#pragma once
#include <stdint.h>


// Version information for the ModLoader
#define VERSION_MAJOR 0 
#define VERSION_MINOR 0 
#define VERSION_PATCH 3


// Helper macros to convert version numbers to a string
#define STRINGIFY_HELPER(x) #x
#define STRINGIFY(x) STRINGIFY_HELPER(x)
#define VERSION_STRING \
    STRINGIFY(VERSION_MAJOR) "." \
    STRINGIFY(VERSION_MINOR) "." \
    STRINGIFY(VERSION_PATCH)

const uint32_t VersionMajor = VERSION_MAJOR;
const uint32_t VersionMinor = VERSION_MINOR;
const uint32_t VersionPatch = VERSION_PATCH;
const char* VersionString = VERSION_STRING;

const char* GetVersionString() {
	return VERSION_STRING;
}