#include "ObjectScanner.h"
#include "utils.h"
#include "GameTypes.h"

void* (*backupMyEntityNewObject)(void* p1);
void* HK_MyEntityNewObject(void* p1) {
	//log("Begin MyEntityNewObject called, p1: %p", p1);
	Entity* result = (Entity*)backupMyEntityNewObject(p1);

	auto list = &ObjectScanner::Instance()->entityList;
	list->add(result);

	//log("End MyEntityNewObject result: %p", result);
	return result;
}

void (*MyEntityFreeObject)(void* p1);
void HK_MyEntityFreeObject(void* p1) {
	//log("MyEntityFreeObject called, p1: %p", p1);

	auto scanner = ObjectScanner::Instance();
	auto list = &scanner->entityList;
	list->remove(p1);

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

UINT32 GetAllocSizeOf(void* p1) {
	typedef UINT32(*GetAllocSize_t)(void* p1);
	static GetAllocSize_t funcAddr = (GetAllocSize_t)GetFuncAddr(0x19f43b0);
	return funcAddr(p1);
}

void* (*backupMyLikeCreateObjectByClassType)(void* p1_unk);
void* MyLikeCreateObjectByClassType(void* p1_unk) {
	log("Begin MyLikeCreateObjectByClassType called");
	//log("p1 type: %s", GetRTTITypeName(p1_unk));
	auto result = backupMyLikeCreateObjectByClassType(p1_unk);
	log("MyLikeCreateObjectByClassType result: %p", result);

	EntitySpawnerInfo& info = *(EntitySpawnerInfo*)p1_unk;
	log("ent create type: %d", info.createType);
	if (info.createType == 4) {
		void* funcPtr = *(void**)&info.unk0x20;
		log("  func ptr 0x20 rva: 0x%llx", ConvertAddressToRva(funcPtr));
	}

	auto allocateSize = GetAllocSizeOf(p1_unk);
	log("p1 alloc size: 0x%x", allocateSize);
	log("End MyLikeCreateObjectByClassType");
	return result;
}

void* (*backupMyLikeGetClassTypeFromString)(void* param_1, const char* p2_classTypeName);
void* MyLikeGetClassTypeFromString(void* param_1, const char* p2_classTypeName) {
	log("MyLikeGetClassTypeFromString called: classTypeName: %s", p2_classTypeName);
	auto result = backupMyLikeGetClassTypeFromString(param_1, p2_classTypeName);
	log("MyLikeGetClassTypeFromString result: %p", result);
	return result;
}
struct EntityResource {
	virtual void* VF0() = 0;
	virtual void* VF1() = 0;
	virtual void* VF2() = 0;
	virtual void* VF3() = 0;
	virtual void* VF4() = 0;
	virtual void* VF5() = 0;
	virtual void* VF6() = 0;
	virtual void* VF7() = 0;
	virtual void* VF8() = 0;
	virtual void* VF9() = 0;
	virtual void* VF10() = 0;
	virtual void* VF11() = 0;
	virtual void* VF12() = 0;
	virtual void* GetClassType() = 0;
};

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


	// debug
	//HookFuncRva(0x19f4830, &MyLikeCreateObjectByClassType, &backupMyLikeCreateObjectByClassType);
	//HookFuncRva(0x19f41b0, &MyLikeGetClassTypeFromString, &backupMyLikeGetClassTypeFromString);
	//HookFuncRva(0x2373940, &MyLikeEntitySpawner3, &backupMyLikeEntitySpawner3);
	//HookFuncRva(0x1dde990, &MyEntityResourceUnk, &backupMyEntityResourceUnk);
	log("ObjectScanner init successfully");
}

void ObjectScanner::ScanAllObject()
{
}
