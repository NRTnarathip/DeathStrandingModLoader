#include "GameTypes.h" 
#include "utils.h"


typedef char* (*My_StringBuild4_t)(MyString* src, uint64_t allocateSize);
auto My_StringBuild4Addr = GetFuncAddr(0x190d6c0);
My_StringBuild4_t My_StringBuild4 = (My_StringBuild4_t)My_StringBuild4Addr;

char* MyStringEmptyPtr = (char*)GetAddressFromRva(0x4562cb0);
void SetNewMyString(MyString* p1_self, const char* p2_newString)
{
	std::string string(p2_newString);
	uint64_t len = string.size();
	p1_self->str = MyStringEmptyPtr;

	char* newStr = My_StringBuild4(p1_self, len);
	memcpy(newStr, string.c_str(), len);
	newStr[len] = '\0';
	*(int*)(newStr + -8) = (int)len;
}

bool IsReadable(void* p, size_t size) {
	MEMORY_BASIC_INFORMATION mbi{};
	if (VirtualQuery(p, &mbi, sizeof(mbi)) == 0) return false;
	if (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) return false;
	return (mbi.State == MEM_COMMIT);
}
const RTTIClass* SafeGetRTTI(RTTIObject* obj) {
	__try {
		return obj->GetRTTI();
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return nullptr;
	}
}

const RTTIClass* TryGetRTTI(void* o) {
	if (o == nullptr || !IsReadable(o))
		return nullptr;

	auto vtable = *(void**)o;
	if (!IsReadable(vtable))
		return nullptr;

	return SafeGetRTTI((RTTIObject*)o);
}


double Entity::GetLinearSpeed()
{
	typedef double (*GetLinearSpeed_t)(Entity* ent);
	static GetLinearSpeed_t g_GetLinearSpeed = (GetLinearSpeed_t)GetFuncRva(0x234b940);
	return g_GetLinearSpeed(this);
}

void* TryReadPtr(void** ptr) {
	__try {
		return *ptr;
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return nullptr;
	}
}

AIManagerGame* AIManagerGame::Instance()
{
	static void** ptr = (void**)GetAddressFromRva(0x7be0d38);
	if (!ptr)
		return nullptr;

	static AIManagerGame* instance = nullptr;
	if (instance == nullptr)
		instance = (AIManagerGame*)TryReadPtr(ptr);

	return instance;
}

Entity** AIManagerGame::GetEntityArray()
{
	return (Entity**)((byte*)this + 0xc98d8);
}

int AIManagerGame::GetEntityCount()
{
	return *(int*)((byte*)this + 0xc98d0);
}

