#include "DevDebug.h"
#include "utils.h"
#include "GameTypes.h"
#include "ObjectScanner.h"
#include "extern/decima-native/source/Core/RTTIObject.h"
#include "Logger.h"
#include <vector>
#include <mutex>

typedef void (*MyAddWeapon2_t)(void* p1, byte p2);
MyAddWeapon2_t backupMyAddWeapon2;
void MyAddWeapon2(void* p1, byte p2) {
	log("Begin MyAddWeapon2, p1: %p, p2: %d", p1, p2);
	backupMyAddWeapon2(p1, p2);
}

typedef float(*DSNodePlayerGetParamFloat_t)(int p1);
DSNodePlayerGetParamFloat_t backupDSNodePlayerGetParamFloat;
float DSNodePlayerGetParamFloat(int p1) {
	log("Begin DSNodePlayerGetParamFloat, p1: %d | 0x%x", p1);
	auto r = backupDSNodePlayerGetParamFloat(p1);
	log("End DSNodePlayerGetParamFloat: result: %f", r);
	return r;
}

struct PlayerEntity : RTTIObject {
	char gap[0x88];
	uint32_t id;
};
struct PlayerMgr {
	char gap[0x38];
	int total; // 0x38 -> 0x3b
	int unk0x3C; // 0x3c -> 0x3f
	PlayerEntity** players;
};

typedef PlayerEntity* (*My_GetPlayerEntityByID_t)(PlayerMgr* p1_playerMgr, int p2_id);
My_GetPlayerEntityByID_t backupMyGetPlayerEntityByID;
PlayerEntity* My_GetDSPlayerByID(PlayerMgr* p1_playerMgr, int p2_id) {
	log("Begin My_GetPlayerEntityByID, p1: %p, p2: %d", p1_playerMgr, p2_id);
	log("player mgr:");
	log("  total: %d", p1_playerMgr->total);
	log("  unk 0x3C: %d", p1_playerMgr->unk0x3C);
	auto playerEnt = backupMyGetPlayerEntityByID(p1_playerMgr, p2_id);
	log("End My_GetPlayerEntityByID: result: %p", playerEnt);
	if (playerEnt) {
		log("player info:");
		log("  id: %u", playerEnt->id);
		log("rtti info:");
		auto type = playerEnt->GetRTTI();
		log("type: %p", type);
		auto name = type->GetName();
		log("  type name: %s", name.c_str());
		void** vtable = *(void***)playerEnt;
		log("GetRTTI func rva: %p", AddrToRva(vtable[0]));

	}
	return playerEnt;
}

int* (*backupMultiSpawnpoint_ExportedGetEntities)(int* param_1, void* param_2);
int* MultiSpawnpoint_ExportedGetEntities(int* param_1, void* param_2)
{
	auto result = backupMultiSpawnpoint_ExportedGetEntities(param_1, param_2);
	MyVector* list = (MyVector*)param_2;
	log("MultiSpawnpoint_ExportedGetEntities: %p", list);
	log("list count: %d", list->count);
	return result;
}

void LogVec3(const char* label, void* o) {
	auto vec = (MyVec3*)o;
	log("[%s] x: %.2f, y: %.2f, z: %.2f", label, vec->x, vec->y, vec->z);
}

void* (*bakcupMyLikeSearchEntityInRadius) (RTTIObject* param_1,
	MyVector* p2_position, float p3_radius, MyVector* p4_vector);
void* HK_MyLikeSearchEntityInRadius(RTTIObject* p1_manager,
	MyVector* p2_position, float p3_radius, MyVector* p4_vector) {
	log("MyLikeSearchEntityInRadius called");
	LogVec3("position", p2_position);
	log("radius: %f", p3_radius);
	auto result = bakcupMyLikeSearchEntityInRadius(p1_manager, p2_position, p3_radius, p4_vector);
	log("found count: %d", p4_vector->count);

	return result;
}

void (*backupDSPlayerEntitySymbols)(void* symbolGroup);
void HK_DSPlayerEntitySymbols(void* p1_exportedSymbolGroup) {
	log("begin DSPlayerEntitySymbols, symbolGroup: %p", p1_exportedSymbolGroup);

	backupDSPlayerEntitySymbols(p1_exportedSymbolGroup);
	log("registered symbols");

	ExportedSymbolGroup* symbolGroup = (ExportedSymbolGroup*)p1_exportedSymbolGroup;
	log("namespace: %s", symbolGroup->mNamespace);
	log("members: %d", symbolGroup->mMembers.size());
	PrintStackTrace();

	log("end DSPlayerEntitySymbols");
}

void SetupDevDebug()
{
	//return;
	//HookFuncRva(0x278b160, &MyAddWeapon2, &backupMyAddWeapon2);
	//HookFuncRva(0x2758c80, &DSNodePlayerGetParamFloat, &backupDSNodePlayerGetParamFloat);
	//HookFuncRva(0x23c60b0, &My_GetDSPlayerByID, &backupMyGetPlayerEntityByID);
	//HookFuncRva(0x262B920, &GetRTTI, &backupGetRTTI);
	//HookFuncRva(0x2362af0, &GetEntityPos, &backupGetEntityPos);
	//HookFuncRva(0x23da700, &MultiSpawnpoint_ExportedGetEntities, &backupMultiSpawnpoint_ExportedGetEntities);
	//HookFuncRva(0x252a470, &HK_MyLikeSearchEntityInRadius, &bakcupMyLikeSearchEntityInRadius);
	//HookFuncRva(0x26ef0d0, HK_DSPlayerEntitySymbols, &backupDSPlayerEntitySymbols);
}
