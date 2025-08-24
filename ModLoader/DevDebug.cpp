#include "DevDebug.h"
#include "utils.h"
#include "types.h"
#include "extern/decima-native/source/Core/RTTIObject.h"

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
		auto rtti = (RTTIObject*)playerEnt;
		auto type = rtti->GetRTTI();
		log("type: %p", type);
		auto name = type->GetName();
		log("name ptr: %p", name);
		log("  type name: %s", name.c_str());
		auto fields = type->GetAttrs();
		log("  field count: %d", fields.size());
		for (auto& field : fields) {
			log("  field: %s", field.mName);
		}
	}
	return playerEnt;
}

void SetupDevDebug()
{
	//HookFuncRva(0x278b160, &MyAddWeapon2, &backupMyAddWeapon2);
	//HookFuncRva(0x2758c80, &DSNodePlayerGetParamFloat, &backupDSNodePlayerGetParamFloat);
	HookFuncRva(0x23c60b0, &My_GetDSPlayerByID, &backupMyGetPlayerEntityByID);

	// from decima-native/source/main.cpp
	Offsets::MapSignature("RTTIRefObject::DecrementRef", "40 53 48 83 EC 20 48 8B D9 B8 ? ? ? ? F0 0F C1 41 ? 25 ? ? ? ? 83 F8 01 75 34 8B 41");
	Offsets::MapSignature("String::FromCString", "40 53 48 83 EC 20 48 8B D9 48 C7 01 00 00 00 00 49 C7 C0 FF FF FF FF");
	Offsets::MapSignature("String::FromString", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 39 48 8B F2 48 8B D9 48 3B 3A 74 54 48 89 6C 24");
	Offsets::MapSignature("String::~String", "40 53 48 83 EC 20 48 8B 19 48 8D 05 ? ? ? ? 48 83 EB 10 48 3B D8 74 27 B8 ? ? ? ? F0 0F C1 03 0F BA F0 1F 83 F8 01 75 15 48 8B");
	Offsets::MapSignature("RTTI::GetName", "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 0F B6 41 04 48 8B FA 48 8B F1 83 F8");
	Offsets::MapSignature("RTTI::ToString", "4C 8B DC 57 41 54 41 55 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 4C 8B E9 4D 8B E0 0F B6");
}
