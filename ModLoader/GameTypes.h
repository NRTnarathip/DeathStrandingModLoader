#pragma once

#include <cstdint>
#include <cstring>
#include <Windows.h>
#include <emmintrin.h> 
#include <vector>
#include <iostream>
#include <atomic>
#include <cstring>
#include <mutex>
#include <unordered_set>
#include <decima-native/RTTI.h>
#include <decima-native/RTTIObject.h>
#include <decima-native/RTTIRefObject.h>
#include <decima-native/Array.h>
#include <decima-native/String.h>
#include <decima-native/GGUUID.h>

#define assert_offset(struct_type, member, expected_offset) \
    static_assert(offsetof(struct_type, member) == expected_offset, \
                  #member " offset mismatch")

#define assert_size(type, expected_size) \
    static_assert(sizeof(type) == (expected_size), "Size of " #type " is not " #expected_size)


struct MyString {
	char* str; //0x0 -> 0x7

	bool Includes(const char* includeString) {
		std::string string(str);
		return string.find(includeString) != std::string::npos;
	}
};

void SetNewMyString(MyString* self, const char* newString);

bool IsReadable(void* p);

// define struct type
struct Metadata {
	const char* GetInterface2(Metadata* meta) {
		uintptr_t selfPtr = (uintptr_t)meta;
		return (const char*)(selfPtr + 0xA0);
	}
};

struct ResourceHeaderInfo2 {
	const char* filePath; //0x0
	int p1;
	int p2;
	Metadata* meta; // 0x10
};

// size 0x40 from ghidra
#pragma pack(push, 1)
struct ResourceHeader {
	int index; // 0x00
	int unknow1; // 0x04, could be a type or category identifier
	const char* name; // 0x08, pointer to a string name of the resource
	ResourceHeaderInfo2* info; //0x10
	bool isEncrypted; // 0x18, indicates if the resource is encrypted
	char padding[7];               // 0x19 - 0x1F ? เพื่อให้ align เป็น 8-byte (รวม = 8 bytes)
	uint64_t unknownField1;        // 0x20 (8 bytes)
	uint32_t value1;               // 0x28 (4 bytes)
	uint32_t value2;               // 0x2C (4 bytes)
};
#pragma pack(pop)

struct ResourceList {
	int count;
	int capacity;
	void* data;
};

struct MyVector {
	uint32_t count;   // current number of items
	uint32_t capacity; // allocated capacity
	void** items; // pointer to array of items
};

struct ResourceManager
{
	uint32_t var_0x0; // 0x00 -> 0x03
	uint32_t var_0x8; // 0x04 -> 0x07
	MyString* cacheNameString; // 0x08 -> 0x0F
	char padding1[0x20]; // 0x10 -> 0x2F
	MyVector pakFileVector; // 0x30
	int pakFilePatchTotal; // 0x40
};


enum class MyReadFileStatus : uint32_t
{
	Unk0 = 0,
	Unk1 = 1,
	Success = 2,
	Failed = 3,
	AccessDenied = 4,
	CantOpenFile = 5,
	FileNotOpened = 6,
	FileNotFound = 7,
	CantReadFromFile = 8,
	CantWriteToFile = 9,
	InputPastEndOfFile = 10,
	UnableToWriteAllBytes = 11,
	FileAlreadyExists = 12,
	OutOfFileHandles = 13,
	ReadCallbackFailed = 14,
	DeviceIsFull = 15,
	OperationCanceled = 16,
	FileCorrupted = 17
};

struct ArchiveFileEntry;
struct ArchiveChunkEntry;
// size 0x40
struct MyPakFileInfo {
public:
	int index; //0x0 - 0x3
	uint32_t encryptKey; // 0x4 - 0x7
	const char* filePath; //0x08 - 0x0F
	void* gap10; //0x10 - 0x17
	bool isEncrypted; //0x18 - 0x19
	char padding[7]; //0x1A - 0x1F, padding to align to 8 bytes
	MyVector fileEntryVector; // 0x20 -> 0x2F
	MyVector chunkEntryVector; // 0x30 -> 0x37
};

struct ResourceReaderHandle {
	LONGLONG someValue; //0x0
	char padding[0x10 - 0x8];
	int status; //0x10
	char padding1[0x20 - 0x14];
	char* entryPath;  //0x20
	MyString* fullPath; //0x28
	char padding2[0x20]; // padding to align to 0x50
	MyString* errorString; // 0x50
	bool someBool1; // 0x58
};

assert_offset(ResourceReaderHandle, status, 0x10);
assert_offset(ResourceReaderHandle, entryPath, 0x20);
assert_offset(ResourceReaderHandle, fullPath, 0x28);
assert_offset(ResourceReaderHandle, errorString, 0x50);
assert_offset(ResourceReaderHandle, someBool1, 0x58);


enum EPackFileCategory : int {
	Invalid = -1,
	Initial = 0,
	Area00 = 1,
	Barch01 = 2,
	Remainder = 3,
	Area01 = 4,
	Area02 = 5,
	Area04 = 6,
	Warrior01 = 7,
	Warrior02 = 8,
	Warrior03 = 9,
	Patch = 10,
	PackFileCategries = 11,
};

struct FieldInfo {
	const RTTIAttr attr;
	size_t offset;
};

std::vector<FieldInfo> GetFields(void* o);

uint32_t GetRTTITypeSize(const RTTI* type);
void SetFuncRTTITypeSize(void* funcPtr);

const char* BoolToStr(bool v);

struct EntityResource {};
struct EntityComponent : public RTTIObject {
};
struct EntityComponentContainer {
	Array<const EntityComponent*> Components;
};


#include <cmath>
// size 24
struct MyVec3 {
	double x = 0;
	double y = 0;
	double z = 0;
	MyVec3() {}
	MyVec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
	double GetMagnitude() const {
		return sqrt((x * x) + (y * y) + (z * z));
	}
	MyVec3 GetNormalize() {
		double mag = GetMagnitude();
		MyVec3 n{};
		// Avoid division by zero
		if (mag > 0.00001) {
			n.x = x / mag;
			n.y = y / mag;
			n.z = z / mag;
		}
		return n;
	}
};
#define Vec3 MyVec3

// size 16
struct MyVec3Pack {
	float x, y, z;
};
#define Vec3Pack MyVec3Pack

// size 32
struct MyVec4 : MyVec3 {
	double w;
};
#define Vec4 MyVec4

// size 20
struct MyVec4Pack : MyVec3Pack {
	float w;
};
#define Vec4Pack MyVec4Pack

// size 36bit
struct MyRotMatrix {
	MyVec3Pack Col0;
	MyVec3Pack Col1;
	MyVec3Pack Col2;
};
#define RotMatrix MyRotMatrix

//size 60bit
struct WorldTransform {
	MyVec3 position; // size 24bit
	RotMatrix rotation; // size 36bit
};

namespace Flags {
	enum EntityFlags : uint32_t {
		Empty = 0x0,
		WorldTransformChanged = 0x1,
		Visible = 0x2,
		Dead = 0x80,
		Sleeping = 0x100,
		HasParent = 0x200,
		Dispensable = 0x800,
		HasCollisionVolume = 0x4000,
		VisualBoundsUpdatePending = 0x800000,
		// PreviousWorldTransformChanged = 0x8000000, ?
		PreventComponentModification = 0x80000000,
	};
}

template<typename T> requires (std::is_base_of_v<RTTIRefObject, T>)
struct Ref {
	T* mPtr;
};

class StreamingRefHandle
{
public:
	enum StreamFlags : uint8_t
	{
		None = 0,
		Loaded = 0x80,
	};

	struct StreamData
	{
		uint32_t m_RefCount;			// 0x0
		String m_CorePath;				// 0x8
		GGUUID m_UUID;					// 0x10
		uint64_t m_Unknown20;			// 0x20
		void* m_Manager;	// 0x28
		Ref<RTTIRefObject> m_Ref;		// 0x30
	};
	assert_size(StreamData, 0x38);

	StreamData* m_Data = nullptr;					// 0x0 Ref counted pointer
	void* m_RefCallback = nullptr;	// 0x8
	void* m_Unknown10 = nullptr;					// 0x10
	StreamFlags m_Flags = None;						// 0x18
	uint8_t m_UnknownFlags = 0;						// 0x19

	RTTIRefObject* Get() {
		if (m_Data && (m_Flags & Loaded) != 0)
			return m_Data->m_Ref.mPtr;
		return nullptr;
	}
};
assert_size(StreamingRefHandle, 0x20);

struct Entity {
	// vtable:  0x3d04050
	// 0: 0x234e590
	// 1: 0x23478c0
	// 15: 0x234dd10 GetHealth
	// 16: 0x234dd10 GetMaxHealth

	// fields
	void** vtable; // 0x0
	GGUUID uuid; // 0x8 -> 0x18
	void* weakPtrList; // 0x18 -> 0x20;
	byte gap0x20_0x60[0x60 - 0x20];
	RTTIObject* EntityRep; // 0x60
	void* gap0x68;
	Entity* parent; // 0x70
	Entity* childBegin; // 0x78
	Entity* childNext; // 0x80
	uint32_t flag; // 0x88 -> 0x8C
	byte gap0x8C_0xB0[0xB0 - 0x8C];
	EntityComponent* mover; // 0xb0
	EntityComponent* model;// 0xb8
	EntityComponent* destructibility;// 0xc0
	WorldTransform worldTransform; // 0xC8
	WorldTransform localTransform; // 0x104

	// function
	const char* GetName();
	Vec3 GetVelocity();
	MyVec3Pack GetAngularVelocity();
	float GetLinearSpeed();
	Array<const EntityComponent*>* GetAllComponent();
	Entity* GetParent();
	int GetChildCount();
	Entity* GetChild(int index);
	const char* TypeName();
	std::string GetUUIDString();
	bool IsDead();
	void SetSleeping(bool sleep);
	void SetInvulnerable(bool on);
	float GetHealth();
	float GetMaxHealth();
};

struct Player : public Entity {};

struct ExportedSymbolMember {
	enum class MemberKind : uint32_t
	{
		Simple = 0,
		Enum = 1,
		Class = 2,
		Struct = 3,
		Typedef = 4,
		Function = 5,
		Variable = 6,
		Container = 7,
		SourceFile = 8,
	};
	struct Signature {
		const char* mTypeName; //0x0
		const char* mModifiers; //0x8
		const RTTI* mType; //0x10
		void* mUnk18; //0x18
		uint8_t mUnk20; //0x20
	};
	assert_size(Signature, 0x28);

	struct LanguageInfo {
		void* address;
		const char* name;
		const char* includeName;
		void* unk0x18;
		Array<Signature> signatureArray;
		void* unk0x30;
		void* unk0x38;
	};
	assert_size(LanguageInfo, 0x40);

	MemberKind mKind;
	const RTTI* mRTTI; //0x8
	const char* mSymbolNamespace; //0x10
	const char* mSymbolName; //x18
	char _pad1[0x8]; //0x20
	LanguageInfo mLanguages[3]; //0x28
	bool IsExportFunction() { return mKind == MemberKind::Function; }
	bool IsExportVariable() { return mKind == MemberKind::Variable; }
	bool IsExportContainer() { return mKind == MemberKind::Container; }
	const char* GetKindName();
};
assert_offset(ExportedSymbolMember, mKind, 0x0);
assert_offset(ExportedSymbolMember, mRTTI, 0x8);
assert_offset(ExportedSymbolMember, mSymbolNamespace, 0x10);
assert_offset(ExportedSymbolMember, mSymbolName, 0x18);
assert_offset(ExportedSymbolMember, mLanguages, 0x28);
assert_size(ExportedSymbolMember, 0xE8);

struct ExportedSymbolGroup : RTTIObject {
	bool mAlwaysExport; //0x8
	// unsafe mNamespace, may nullptr
	const char* mNamespace; //0x10 
	Array<ExportedSymbolMember> mMembers; //0x18
	Array<RTTI*> mDependencies; //0x28
};
assert_offset(ExportedSymbolGroup, mAlwaysExport, 0x8);
assert_offset(ExportedSymbolGroup, mNamespace, 0x10);
assert_offset(ExportedSymbolGroup, mMembers, 0x18);
assert_offset(ExportedSymbolGroup, mDependencies, 0x28);
assert_size(ExportedSymbolGroup, 0x38);

const char* TryGetRTTIName(const RTTI* o);

struct Mat44 {
	Vec4 Col0;
	Vec4 Col2;
	Vec4 Col3;
	Vec4 Col4;
};
assert_size(Mat44, 128);

struct Quat {
	float x, y, z, w;
};

struct AttackEventLink {};

struct LocalizerVariable {};

struct LocalizedText {};
#define LocalizedText LocalizedText

struct AttackEventTag {};
struct Array_cptr_AttackEventTag {};
#define Array_cptr_AttackEventTag Array_cptr_AttackEventTag

typedef uint64_t uint64;
typedef uint32_t uint;

enum class EDSEvaluationType {};

struct SoundShape {};
#define SoundShape SoundShape

struct XpMultiplier {};
struct FRGBAColor {};
#define FRGBAColor FRGBAColor

#define Quat Quat

struct Controller {};

struct WString {};
#define WString WString

struct EnvelopeData {};
#define EnvelopeData EnvelopeData

struct AnnotationResource {};

struct BoundingBox3 {};

struct TagProperty {};

struct DestructibilityPart {};
#define DestructibilityPart DestructibilityPart

struct QuestResource {};
#define QuestResource QuestResource

struct AIGroup {};
#define AIGroup AIGroup

struct HtnSymbol {};
#define HtnSymbol HtnSymbol

struct StreamingTileStateResource {};
#define StreamingTileStateResource StreamingTileStateResource

struct EntityComponentResource {};
#define EntityComponentResource EntityComponentResource

struct CameraModeResource {};
#define CameraModeResource CameraModeResource

struct Route {};
#define Route Route

struct PropertyContainerResource {};
#define PropertyContainerResource PropertyContainerResource

struct PropertyContainer {};
#define PropertyContainer PropertyContainer

struct AIDefendAreaSet {};
#define AIDefendAreaSet AIDefendAreaSet

struct EnumFactEntry {};
#define EnumFactEntry EnumFactEntry

struct DSAirplaneGameActor {};
#define DSAirplaneGameActor DSAirplaneGameActor

struct AIAttack {};
#define AIAttack AIAttack

struct DSPlayerPadCheckBoxes {};
#define DSPlayerPadCheckBoxes DSPlayerPadCheckBoxes

struct ActiveStatesQueue {};
#define ActiveStatesQueue ActiveStatesQueue

struct JointID {};
#define JointID JointID

struct PoseID {};
#define PoseID PoseID

struct SkeletonAnimationEventPayload {};
#define SkeletonAnimationEventPayload SkeletonAnimationEventPayload

struct PBDGraphUpdateArgs {};
#define PBDGraphUpdateArgs PBDGraphUpdateArgs

struct WorldDataTile {};
#define WorldDataTile WorldDataTile

struct SentenceResource {};
#define SentenceResource SentenceResource

struct UDSEventSetUintStat {};
#define UDSEventSetUintStat UDSEventSetUintStat

struct UDSEventSetIntStat {};
#define UDSEventSetIntStat UDSEventSetIntStat

struct UDSEventSetFloatStat {};
#define UDSEventSetFloatStat UDSEventSetFloatStat

struct DSMissionSafeConditionResource {};
struct DSMissionSpeedConditionResource {};
struct DSMissionServiceConditionResource {};
struct DSMissionBaggageWeightConditionResource {};
struct DSMissionBaggageCountConditionResource {};
struct DSMissionHouseResourceList {};
#define DSMissionSafeConditionResource DSMissionSafeConditionResource
#define DSMissionHouseResourceList DSMissionHouseResourceList
#define DSMissionSpeedConditionResource DSMissionSpeedConditionResource
#define DSMissionServiceConditionResource DSMissionServiceConditionResource
#define DSMissionBaggageWeightConditionResource DSMissionBaggageWeightConditionResource
#define DSMissionBaggageCountConditionResource DSMissionBaggageCountConditionResource

struct UDSEventMechanicUse {};
#define UDSEventMechanicUse UDSEventMechanicUse

struct DSMissionResourceList {};
#define DSMissionResourceList DSMissionResourceList
struct DSHouseholdInfoResource {};
#define DSHouseholdInfoResource DSHouseholdInfoResource
