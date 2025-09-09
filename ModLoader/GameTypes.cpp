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

std::string MyUUID::ToString() {
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

bool MyUUID::IsEmpty()
{
	static byte uuidEmpty[16] = { 0 };
	return uuid == uuidEmpty;
}

bool MyUUID::IsEmptyString(std::string string)
{
	static std::string empty = "00000000-0000-0000-0000-000000000000";
	return string.empty() || string == empty;
}

double Entity::GetLinearSpeed()
{
	typedef double (*GetLinearSpeed_t)(Entity* ent);
	static GetLinearSpeed_t g_GetLinearSpeed = (GetLinearSpeed_t)GetFuncRva(0x234b940);
	return g_GetLinearSpeed(this);
}

#define RTTI_GET ((RTTIObject*)this)->Get
Entity* Entity::GetParent() {
	return RTTI_GET<Entity*>("Parent");
}

Entity* Entity::GetChild(int index) {
	typedef Entity* (*GetChild_t)(Entity* ent, int index);
	static GetChild_t fn = (GetChild_t)GetFuncRva(0x2361a20);
	return fn(this, index);
}

int Entity::GetChildCount() {
	typedef int (*GetChild_t)(Entity* ent);
	static GetChild_t fn = (GetChild_t)GetFuncRva(0x2362920);
	return fn(this);
}

const char* Entity::TypeName() {
	auto type = ((RTTIObject*)this)->GetRTTI();
	return type->GetName().c_str();
}

std::string Entity::GetUUID()
{
	return uuid.ToString();
}

Array<const EntityComponent*>* Entity::GetAllComponent()
{
	auto componentContainer = (EntityComponentContainer*)((byte*)this + 144);
	return &componentContainer->Components;
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

