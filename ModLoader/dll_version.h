#pragma once

// Don't edit, use tool: bump-my-version
#define DLL_VERSION_MAJOR 0
#define DLL_VERSION_MINOR 0
#define DLL_VERSION_PATCH 4
#define DLL_VERSION_STRING "0.0.4"



// Helper
// Variables
#define STRINGIFY_HELPER(x) #x
#define STRINGIFY(x) STRINGIFY_HELPER(x)

#define DLL_VERSION_MAJOR_STR STRINGIFY(DLL_VERSION_MAJOR)
#define DLL_VERSION_MINOR_STR STRINGIFY(DLL_VERSION_MINOR)
#define DLL_VERSION_PATCH_STR STRINGIFY(DLL_VERSION_PATCH)

// Function
inline const char* GetDllVersionMajorStr() {
	return DLL_VERSION_MAJOR_STR;
}
inline const char* GetDllVersionMinorStr() {
	return DLL_VERSION_MINOR_STR;
}
inline const char* GetDllVersionPatchStr() {
	return DLL_VERSION_PATCH_STR;
}
inline const char* GetDllVersionStr() {
	return DLL_VERSION_STRING;
}