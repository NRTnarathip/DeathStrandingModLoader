#pragma once
#include <cstdint>
#include <string>
#include <array>
#include <span>
#include <type_traits>

template<size_t A, size_t B, typename = std::enable_if_t<A == B>>
struct is_offset_equal : std::true_type {};

template<size_t A, size_t B>
inline constexpr bool is_offset_equal_v = is_offset_equal<A, B>::value;

#define assert_offset(Structure, Member, Offset) static_assert(is_offset_equal_v<offsetof(Structure, Member), (Offset)>, "Structure member offset is unexpected");
#define assert_size(Structure, Size) static_assert(is_offset_equal_v<sizeof(Structure), (Size)>, "Structure size is unexpected");

// forward
class RTTI;



// define class, struct
class RTTIObject {
public:
	[[nodiscard]] virtual const RTTI* GetRTTI() const = 0;

	virtual ~RTTIObject() = 0;
};

assert_size(RTTIObject, 8);



enum class RTTIKind : uint8_t {
	Atom,
	Pointer,
	Container,
	Enum,
	Compound,
	EnumFlags,
	POD,
	EnumBitSet
};

enum RTTIFlags : uint8_t {
	RTTIFactory_Registered = 0x2,
	FactoryManager_Registered = 0x4
};

struct RTTI;
struct RTTIAtom;
struct RTTICompound;
struct RTTIEnum;
struct RTTIPointer;
struct RTTIContainer;
struct RTTIPod;

typedef RTTI* pRTTI;
typedef const RTTI* pcRTTI;

#pragma pack(push, 1)

struct RTTI {
	int32_t mId;
	RTTIKind mKind;
	RTTIFlags mFactoryFlags;

	RTTI(const RTTI&) = delete;
	RTTI(RTTI&&) = delete;

	[[nodiscard]] std::string BaseName() const;

	[[nodiscard]] std::string Name() const;

	[[nodiscard]] std::string KindName() const;

	[[nodiscard]] const RTTIAtom* AsAtom() const;

	[[nodiscard]] const RTTICompound* AsCompound() const;

	[[nodiscard]] const RTTIEnum* AsEnum() const;

	[[nodiscard]] const RTTIPointer* AsPointer() const;

	[[nodiscard]] const RTTIContainer* AsContainer() const;

	[[nodiscard]] const RTTIPod* AsPOD() const;
};

#pragma pack(pop)

assert_size(RTTI, 0x6);

struct RTTIAtom : RTTI {
	uint16_t mSize;
	uint8_t mAlignment;
	uint8_t mSimple;
	const char* mTypeName;
	const RTTIAtom* mParentType;
	const void* mFromString;
	const void* mToString;
	const void* mUnk30;
	const void* mCopy;
	const void* mEquals;
	const void* mConstructor;
	const void* mDestructor;
	const void* mAssignWithEndian;
	const void* mAssign;
	const void* mGetSize;
	const void* mCompareStrings;
	const RTTI* mRepresentationType;
};

assert_size(RTTIAtom, 0x80);

struct RTTIValue {
	uint32_t mValue;
	const char* mName;
	std::array<const char*, 4> mAliases;
};

assert_size(RTTIValue, 0x30);

struct RTTIEnum : RTTI {
	uint8_t mSize;
	uint8_t mAlignment;
	uint16_t mNumValues;
	const char* mTypeName;
	const RTTIValue* mValues;
	const RTTI* mRepresentationType;

	[[nodiscard]] auto Values() const { return std::span{ mValues, mNumValues }; }
};

assert_size(RTTIEnum, 0x28);

struct RTTIBase {
	const RTTICompound* mType;
	uint32_t mOffset;
};

assert_size(RTTIBase, 0x10);

struct RTTIAttr {
	const RTTI* mType;
	uint16_t mOffset;
	uint16_t mFlags;
	const char* mName;
	const void* mGetter;
	const void* mSetter;
	const char* mMinValue;
	const char* mMaxValue;
};

assert_size(RTTIAttr, 0x38);

struct RTTIOrderedAttr : RTTIAttr {
	const RTTICompound* mParent;
	const char* mGroup;
};

assert_size(RTTIOrderedAttr, 0x48);

struct RTTIMessageHandler {
	const RTTI* mMessage;
	const void* mHandler;
};

assert_size(RTTIMessageHandler, 0x10);

struct RTTIMessageOrderEntry {
	uint32_t mBefore;
	const RTTI* mMessage;
	const RTTI* mCompound;
};

assert_size(RTTIMessageOrderEntry, 0x18);

struct RTTIFunction {
	char mReturnType;
	const char* mName;
	const char* mArguments;
	const void* mFunction;
};

assert_size(RTTIFunction, 0x20);

struct RTTICompound : RTTI {
	uint8_t mNumBases;
	uint8_t mNumAttrs;
	// uint8_t mNumFunctions;
	uint8_t mNumMessageHandlers;
	uint8_t mNumMessageOrderEntries;
	uint8_t _mPad09;
	uint32_t mVersion;
	uint32_t mSize;
	uint16_t mAlignment;
	uint16_t mFlags;
	const void* mConstructor;
	const void* mDestructor;
	const void* mFromString;
	const void* mUnk30;
	const void* mToString;
	const char* mTypeName;
	// uint32_t mTypeNameCrc;
	const RTTI* mNextType;
	const RTTI* mPrevType;
	const RTTIBase* mBases;
	const RTTIAttr* mAttrs;
	// const RTTIFunction *mFunctions;
	const RTTIMessageHandler* mMessageHandlers;
	const RTTIMessageOrderEntry* mMessageOrderEntries;
	const void* mGetExportedSymbols;
	const RTTI* mRepresentationType;
	const RTTIOrderedAttr* mOrderedAttrs;
	uint32_t mNumOrderedAttrs;
	RTTIMessageHandler mMsgReadBinary;
	uint32_t mMsgReadBinaryOffset;
	uint32_t mUnkAC;

	[[nodiscard]] auto Bases() const { return std::span{ mBases, mNumBases }; }

	[[nodiscard]] auto Attrs() const { return std::span{ mAttrs, mNumAttrs }; }

	[[nodiscard]] auto Attrs() { return std::span{ mAttrs, mNumAttrs }; }

	// [[nodiscard]] auto Functions() const { return std::span{mFunctions, mNumFunctions}; }

	[[nodiscard]] auto MessageHandlers() const { return std::span{ mMessageHandlers, mNumMessageHandlers }; }
};

assert_size(RTTICompound, 0xB0);

struct RTTIPointer : RTTI {
	struct Data {
		const char* mTypeName;
		uint32_t mSize;
		uint8_t mAlignment;
		const void* mConstructor;
		const void* mDestructor;
		const void* mGetter;
		const void* mSetter;
		const void* mCopier;
	};

	const RTTI* mItemType;
	const Data* mPointerType;
	const char* mTypeName;
};

assert_size(RTTIPointer, 0x20);
assert_size(RTTIPointer::Data, 0x38);

struct RTTIContainer : RTTI {
	struct Data {
		const char* mTypeName;
		uint16_t mSize;
		uint8_t mAlignment;
		uint8_t mArray;
		const void* mConstructor;
		const void* mDestructor;
		// ...
	};

	const RTTI* mItemType;
	const Data* mContainerType;
	const char* mTypeName;
};

assert_size(RTTIContainer, 0x20);
assert_size(RTTIContainer::Data, 0x20);

struct RTTIPod : RTTI {
	uint32_t mSize;
	const char* mTypeName;
};

assert_size(RTTIPod, 0x18);
