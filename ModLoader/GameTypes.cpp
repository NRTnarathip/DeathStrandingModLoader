#include "GameTypes.h" 
#include "utils.h"
#include <set>

typedef char* (*My_StringBuild4_t)(MyString* src, uint64_t allocateSize);

char* MyStringEmptyPtr = (char*)GetAddressFromRva(0x4562cb0);
void SetNewMyString(MyString* p1_self, const char* p2_newString)
{
	My_StringBuild4_t My_StringBuild4 = (My_StringBuild4_t)GetAddrFromRva(0x190d6c0);
	std::string string(p2_newString);
	uint64_t len = string.size();
	p1_self->str = MyStringEmptyPtr;

	char* newStr = My_StringBuild4(p1_self, len);
	memcpy(newStr, string.c_str(), len);
	newStr[len] = '\0';
	*(int*)(newStr + -8) = (int)len;
}
bool IsReadable(void* p) {
	static std::recursive_mutex pointerValidCacheMtx;
	static std::set<void*> pointerValidCache;

	if (p == nullptr) return false;

	std::lock_guard<std::recursive_mutex> lock(pointerValidCacheMtx);
	if (pointerValidCache.find(p) != pointerValidCache.end())
		return true;

	MEMORY_BASIC_INFORMATION mbi{};
	if (VirtualQuery(p, &mbi, sizeof(mbi)) == 0) return false;
	if (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) return false;
	bool valid = (mbi.State == MEM_COMMIT);
	if (valid) {
		pointerValidCache.insert(p);
	}
	return valid;
}
const RTTIClass* SafeGetRTTI(RTTIObject* obj) {
	__try {
		return obj->GetRTTI();
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return nullptr;
	}
}

std::vector<FieldInfo> GetFields(void* obj)
{
	std::vector<FieldInfo> fields;
	auto type = ((RTTIObject*)obj)->GetRTTI();
	type->ForEachAttribute([&](const RTTIAttr& inAttr, size_t inOffset) {
		FieldInfo field = { .attr = inAttr, .offset = inOffset };
		fields.push_back(field);
		return false;
		});
	return fields;
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

const char* Entity::GetName()
{
	//typedef MyString(*GetNameFunc)(Entity* ent);
	//GetNameFunc fn = (GetNameFunc)vtable[3];
	//return fn(this).str;
	return "null";
}

MyVec4Float Entity::GetVelocity()
{
	MyVec4Float velocity;
	typedef void* (*GetVelocityFunc)(Entity* ent, void* velo);
	static auto fn = (GetVelocityFunc)GetFuncRva(0x234c180);
	fn(this, &velocity);
	return velocity;
}

MyVec3Float Entity::GetAngularVelocity()
{
	static auto fn = (void* (*)(Entity * ent, void* veloOut))GetFuncRva(0x23628b0);
	MyVec3Double velo;
	fn(this, &velo);
	MyVec3Float velo3 = { (float)velo.x, (float)velo.y, (float)velo.z };
	return velo3;
}

float Entity::GetLinearSpeed()
{
	auto velo = GetVelocity();
	return sqrt(velo.x * velo.x + velo.y * velo.y + velo.z * velo.z);
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

std::string Entity::GetUUIDString()
{
	return uuid.ToString();
}

bool Entity::IsDead()
{
	return flag & Flags::EntityFlags::Dead;
}

void Entity::SetSleeping(bool sleep)
{
	typedef void (*SetSleepingFunc)(Entity* ent, bool sleep);
	static auto fn = (SetSleepingFunc)(GetFuncRva(0x2361e20));
	fn(this, sleep);
}

void Entity::SetInvulnerable(bool on)
{
	typedef void (*SetInvulnerableFunc)(Entity* ent, bool on);
	static auto fn = (SetInvulnerableFunc)(GetFuncRva(0x2361d90));
	fn(this, on);
	log("setted god mod: %d", on);
}


float Entity::GetHealth()
{
	typedef float (*GetHealth_t)(Entity* ent);
	static GetHealth_t fn = (GetHealth_t)vtable[15];
	return fn(this);
}

float Entity::GetMaxHealth()
{
	typedef float (*GetMaxHealth_t)(Entity* ent);
	static GetMaxHealth_t fn = (GetMaxHealth_t)vtable[16];
	return fn(this);
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

uint32_t(*g_GetRTTITypeSize)(const RTTI* type) = 0;
uint32_t GetRTTITypeSize(const RTTI* type) {
	if (type == nullptr) return 0;

	if (g_GetRTTITypeSize == 0)
		g_GetRTTITypeSize = (uint32_t(*)(const RTTI*))GetAddrFromRva(0x19f43b0);
	return g_GetRTTITypeSize(type);
}
void SetFuncRTTITypeSize(void* funcPtr)
{
	g_GetRTTITypeSize = (uint32_t(*)(const RTTI*))funcPtr;
}

const char* BoolToStr(bool v) { return v ? "true" : "false"; }

const char* TryGetRTTIName(const RTTI* o) {
	if (o == nullptr) return "null";
	return o->GetName().c_str();
}

const char* ExportedSymbolMember::GetKindName() {
	switch (mKind) {
	case MemberKind::Simple: return "Simple";
	case MemberKind::Enum: return "Enum";
	case MemberKind::Class: return "Class";
	case MemberKind::Struct: return "Struct";
	case MemberKind::Typedef: return "Typedef";
	case MemberKind::Function: return "Function";
	case MemberKind::Variable: return "Variable";
	case MemberKind::Container: return "Container";
	case MemberKind::SourceFile: return "SourceFile";
	default: return "Unknown";
	}
}
