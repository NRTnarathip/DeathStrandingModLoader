#include "DevDebug.h"
#include "utils.h"
#include "types.h"
#include "RTTI.h"

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

struct PlayerEntity {
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
PlayerEntity* My_GetPlayerEntityByID(PlayerMgr* p1_playerMgr, int p2_id) {
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
		auto rtti = (RTTIObject*)playerEnt;
		log("rtti vtable rva: 0x%llx", (uint64_t)ConvertAddressToRva(*(void***)rtti));
		auto type = rtti->GetRTTI();
		auto name = type->Name();
		log("  type name: %s", name.c_str());
		//auto typeName = type->getTypeName();
		//void** vtable = *(void***)type;
		//log("  type name ptr: %p", typeName);
		//if (typeName) {
		//	log("  type name cstr: %s", typeName);
		//	log("  type name MyString: %s", ((MyString*)type->getTypeName())->str);
		//}
	}
	return playerEnt;
}

void SetupDevDebug()
{
	//HookFuncRva(0x278b160, &MyAddWeapon2, &backupMyAddWeapon2);
	//HookFuncRva(0x2758c80, &DSNodePlayerGetParamFloat, &backupDSNodePlayerGetParamFloat);
	HookFuncRva(0x23c60b0, &My_GetPlayerEntityByID, &backupMyGetPlayerEntityByID);
}
