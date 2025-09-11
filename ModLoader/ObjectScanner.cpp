#include "ObjectScanner.h"
#include "utils.h"
#include "GameTypes.h"

void* (*backupMyEntityNewObject)(void* p1);
void* HK_MyEntityNewObject(void* p1) {
	//log("Begin MyEntityNewObject called, p1: %p", p1);
	Entity* ent = (Entity*)backupMyEntityNewObject(p1);

	auto instance = ObjectScanner::Instance();
	auto lock = instance->GetLock();

	instance->AddEntity(ent);

	//log("End MyEntityNewObject result: %p", result);
	return ent;
}

void (*MyEntityFreeObject)(Entity* p1);
void HK_MyEntityFreeObject(Entity* p1) {
	//log("MyEntityFreeObject called, p1: %p", p1);
	auto instance = ObjectScanner::Instance();
	auto lock = instance->GetLock();
	instance->RemoveEntity(p1);

	MyEntityFreeObject(p1);
}
const char* GetRTTITypeName(void* p1) {
	return ((RTTIObject*)p1)->GetTypeName();
}

struct EntitySpawnerInfo {
	byte gap1[0x4]; //0x00 -> 0x03
	byte createType;  //0x04 -> 0x05;
	byte gap2[0x1b]; //0x05 -> 0x1f
	void* unk0x20; // 0x20
};


typedef void* (*FuncRTTIClassObjCtorDtor_t)(void* p1, void* p2);
struct HookRTTICtorDtorInfo {
	RTTI* rtti;
	FuncRTTIClassObjCtorDtor_t originalCtor;
	FuncRTTIClassObjCtorDtor_t originalDtor;
};
std::unordered_map<RTTI*, HookRTTICtorDtorInfo*> g_hookRTTICtorDtorMap;

void* HK_FuncRTTIClassObjCtor(RTTI* rtti, void* p2) {
	//std::string typeName = rtti->GetName().c_str();
	//log("Begin HK_FuncRTTIClassObjCtor, p1: %p, p1_rttiType: %s, p2: %p",
	//	p1, typeName.c_str(), p2);

	auto instance = ObjectScanner::Instance();
	auto lock = instance->GetLock();
	auto hook = g_hookRTTICtorDtorMap[rtti];
	auto result = hook->originalCtor(rtti, p2);
	//log("result: %p", result);

	instance->AddRTTIObjectInstance(rtti, result);

	//log("End HK_FuncRTTIClassObjCtor");

	return result;
}

void* HK_FuncRTTIClassObjDtor(RTTI* rtti, void* p2) {
	auto instance = ObjectScanner::Instance();
	auto lock = instance->GetLock();
	auto hook = g_hookRTTICtorDtorMap[rtti];
	instance->RemoveRTTIObjectInstance(rtti, p2);
	hook->originalDtor(rtti, p2);
	return p2;
}

HookRTTICtorDtorInfo* AddHookRTTIObjectCtorDtorUnsafe(RTTI* rtti) {
	auto instance = ObjectScanner::Instance();

	// already hook
	if (g_hookRTTICtorDtorMap.find(rtti) != g_hookRTTICtorDtorMap.end())
		return nullptr;

	if (rtti->mKind == RTTIKind::Compound) {
		HookRTTICtorDtorInfo* hook = new HookRTTICtorDtorInfo();
		auto rttiClass = (RTTIClass*)rtti;
		bool canHook = rttiClass->mConstructor && rttiClass->mDestructor;
		if (!canHook)
			return nullptr;

		hook->rtti = rtti;
		hook->originalCtor = (FuncRTTIClassObjCtorDtor_t)rttiClass->mConstructor;
		hook->originalDtor = (FuncRTTIClassObjCtorDtor_t)rttiClass->mDestructor;
		g_hookRTTICtorDtorMap[rtti] = hook;

		// change ctor & dtor
		rttiClass->mConstructor = (const void*)HK_FuncRTTIClassObjCtor;
		rttiClass->mDestructor = (const void*)HK_FuncRTTIClassObjDtor;
		log("Hooked RTTI: %s, ctor: %p, dtor: %p",
			rtti->GetName().c_str(),
			hook->originalCtor,
			hook->originalDtor);
		return hook;
	}

	return nullptr;
}

uint32_t(*backupGetRTTISize)(RTTI* p1);
uint32_t HK_GetRTTISize(RTTI* p1) {
	auto instance = ObjectScanner::Instance();
	auto lock = instance->GetLock();

	bool exist = instance->IsRTTIUnsafe(p1);
	if (exist) return backupGetRTTISize(p1);

	// added RTTI & Object Instance
	instance->AddRTTIUnsafe(p1);

	// hook class ctor & dtor
	std::string typeName = p1->GetName().c_str();
	if (!typeName.empty()) {
		AddHookRTTIObjectCtorDtorUnsafe(p1);
	}

	auto result = backupGetRTTISize(p1);

	return result;
}

uint32_t GetRTTISize(void* p1) {
	if (backupGetRTTISize)
		return backupGetRTTISize((RTTI*)p1);

	typedef UINT32(*GetRTTISize_t)(void* p1);
	static GetRTTISize_t fn = (GetRTTISize_t)GetFuncAddr(0x19f43b0);
	return fn(p1);
}

void* (*backupMyCreateObjectByRTTI)(RTTI* p1_unk);
void* MyCreateObjectByRTTI(RTTI* rtti) {

	//log("Begin MyCreateObjectByRTTI, p1: %p", rtti);
	RTTIObject* result = (RTTIObject*)backupMyCreateObjectByRTTI(rtti);

	//auto instance = ObjectScanner::Instance();
	//instance->AddRTTIToSet(rtti);
	//instance->AddRTTIObjectToSet(result);

	//log("MyCreateObjectByRTTI result: %p", result);
	//log("rtti name: %s", rtti->GetName().c_str());
	//log("rtti kind: %s", rtti->GetKindName());
	//auto allocateSize = GetRTTISize(rtti);
	//log("rtti size: 0x%x", allocateSize);


	// crash some time when get result type name
	// RGBAColorRev
	//log("result type name: %s", ((RTTIObject*)result)->GetTypeName());
	//log("result size: %d", GetRTTISize(result));
	//log("End MyCreateObjectByRTTI");

	return result;
}

void* (*backupMyLikeGetClassTypeFromString)(void* param_1, const char* p2_classTypeName);
void* MyLikeGetClassTypeFromString(void* param_1, const char* p2_classTypeName) {
	log("MyLikeGetClassTypeFromString called: classTypeName: %s", p2_classTypeName);
	auto result = backupMyLikeGetClassTypeFromString(param_1, p2_classTypeName);
	log("MyLikeGetClassTypeFromString result: %p", result);
	return result;
}

void* (*backupMyLikeEntitySpawner3)(EntityResource* param_1, void* param_2);
void* MyLikeEntitySpawner3(EntityResource* p1_entityResource, void* param_2) {
	log("Begin MyLikeEntitySpawner3 called");
	// p1 EntityResource, etc..
	log("p1 type: %s", GetRTTITypeName(p1_entityResource));
	auto result = backupMyLikeEntitySpawner3(p1_entityResource, param_2);
	log("End MyLikeEntitySpawner3 result: %p", result);
	return result;
}

void* (*backupMyEntityResourceUnk)(void* p1);
void* MyEntityResourceUnk(void* p1) {
	log("MyEntityResourceUnk called, p1: %p", p1);
	auto result = backupMyEntityResourceUnk(p1);
	log("MyEntityResourceUnk result: %p", result);
	return result;
}

ObjectScanner::ObjectScanner()
{
	log("ObjectScanner init...");

	HookFuncRva(0x2345a10, &HK_MyEntityNewObject, &backupMyEntityNewObject);
	HookFuncRva(0x23466b0, &HK_MyEntityFreeObject, &MyEntityFreeObject);
	HookFuncRva(0x19f43b0, &HK_GetRTTISize, &backupGetRTTISize);


	// debug
	//HookFuncRva(0x19f4830, &MyCreateObjectByRTTI, &backupMyCreateObjectByRTTI);
	//HookFuncRva(0x19f41b0, &MyLikeGetClassTypeFromString, &backupMyLikeGetClassTypeFromString);
	//HookFuncRva(0x2373940, &MyLikeEntitySpawner3, &backupMyLikeEntitySpawner3);
	//HookFuncRva(0x1dde990, &MyEntityResourceUnk, &backupMyEntityResourceUnk);
	log("ObjectScanner init successfully");
}

inline bool ObjectScanner::IsRTTIUnsafe(RTTI* o) {
	return rttiSet.find(o) != rttiSet.end();
}

inline bool ObjectScanner::IsRTTIObjectExist(void* o) {
	std::lock_guard<std::recursive_mutex> lock(mtx);
	return objInstanceSet.find(o) != objInstanceSet.end();
}

void ObjectScanner::AddRTTIUnsafe(RTTI* o)
{
	rttiSet.insert(o);
}

void ObjectScanner::AddRTTIObjectInstance(RTTI* rtti, void* o)
{
	std::lock_guard<std::recursive_mutex> lock(mtx);
	objInstanceSet.insert(o);
	rttiLookupByObject[o] = rtti;
}

inline void ObjectScanner::RemoveRTTIObjectInstance(RTTI* rtti, void* o) {
	std::lock_guard<std::recursive_mutex> lock(mtx);
	if (IsRTTIObjectInstanceUnsafe(o)) {
		objInstanceSet.erase(o);
		rttiLookupByObject.erase(o);
	}
}

void ObjectScanner::AddEntity(Entity* e)
{
	std::lock_guard<std::recursive_mutex> lock(mtx);
	RTTIClass* entityRTTI = (RTTIClass*)((RTTIObject*)e)->GetRTTI();
	AddRTTIObjectInstance(entityRTTI, e);
	entityList.add(e);
}

void ObjectScanner::RemoveEntity(Entity* e)
{
	std::lock_guard<std::recursive_mutex> lock(mtx);
	auto type = rttiLookupByObject[e];
	RemoveRTTIObjectInstance(type, e);
	entityList.remove(e);
}

inline const char* ObjectScanner::TryGetObjectTypeName(void* o)
{
	if (!IsReadable(o))
		return nullptr;

	std::lock_guard<std::recursive_mutex> lock(mtx);
	auto type = TryGetObjectTypeUnsafe(o);
	if (type) return type->GetName().c_str();

	return nullptr;
}

inline RTTI* ObjectScanner::TryGetObjectType(void* o)
{
	std::lock_guard<std::recursive_mutex> lock(mtx);
	return TryGetObjectTypeUnsafe(o);
}

RTTI* ObjectScanner::TryGetObjectTypeUnsafe(void* o)
{
	if (!IsReadable(o))
		return nullptr;

	if (IsRTTIObjectInstanceUnsafe(o)) {
		if (rttiLookupByObject.find(o) == rttiLookupByObject.end()) {
			log("error: obj instance not in lookup map");
			return nullptr;
		}

		return rttiLookupByObject[o];
	}

	auto tempRTTI = (RTTI*)o;
	if (IsRTTIUnsafe(tempRTTI))
		return tempRTTI;

	return nullptr;
}
