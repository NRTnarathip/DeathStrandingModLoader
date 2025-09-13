#include "DecimaNative.h"
#include "extern/decima-native/source/Core/RTTIObject.h"

void DecimaNative::Initialize()
{
	Offsets::MapSignature("RTTIRefObject::DecrementRef", "40 53 48 83 EC 20 48 8B D9 B8 ? ? ? ? F0 0F C1 41 ? 25 ? ? ? ? 83 F8 01 75 34 8B 41");
	Offsets::MapSignature("String::FromCString", "40 53 48 83 EC 20 48 8B D9 48 C7 01 00 00 00 00 49 C7 C0 FF FF FF FF");
	Offsets::MapSignature("String::FromString", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 39 48 8B F2 48 8B D9 48 3B 3A 74 54 48 89 6C 24");
	Offsets::MapSignature("String::~String", "40 53 48 83 EC 20 48 8B 19 48 8D 05 ? ? ? ? 48 83 EB 10 48 3B D8 74 27 B8 ? ? ? ? F0 0F C1 03 0F BA F0 1F 83 F8 01 75 15 48 8B");
	Offsets::MapSignature("RTTI::GetName", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 0F B6 41 04 48 8B FA 48 8B F1 83 F8");
	Offsets::MapSignature("RTTI::ToString", "4C 8B DC 57 41 54 41 55 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 4C 8B E9 4D 8B E0 0F B6");
}
