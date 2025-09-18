#pragma once

#include <cstdint>
#include <span>
#include <format>

#include "String.h"

class RTTIObject;

class RTTIRefObject;

#define ASSERT_SIZE(_Type, _Size) static_assert(sizeof(_Type) == (_Size), "sizeof(" # _Type ") == " # _Size)

enum class RTTIKind : std::uint8_t {
	Atom = 0,
	Pointer = 1,
	Container = 2,
	Enum = 3,
	Compound = 4,
	EnumFlags = 5,
	POD = 6
};

enum RTTIFlags : uint8_t {
	RTTIFactory_Registered = 0x2,
	FactoryManager_Registered = 0x4
};

struct RTTIAtom;
struct RTTIClass;
struct RTTIEnum;
struct RTTIPointer;
struct RTTIContainer;

#pragma pack(push, 1)

struct RTTI {
	std::uint32_t mId;
	RTTIKind mKind;
	RTTIFlags mFactoryFlags;

	[[nodiscard]] String GetName() const;

	[[nodiscard]] String ToString(const void* value) const;

	bool FromString(void* inObject, const String& inString) const;

	[[nodiscard]] const RTTIAtom* AsAtom() const {
		return mKind == RTTIKind::Atom ? reinterpret_cast<const RTTIAtom*>(this) : nullptr;
	}

	[[nodiscard]] const RTTIClass* AsClass() const {
		return mKind == RTTIKind::Compound ? reinterpret_cast<const RTTIClass*>(this) : nullptr;
	}

	[[nodiscard]] const RTTIEnum* AsEnum() const {
		return mKind == RTTIKind::Enum || mKind == RTTIKind::EnumFlags
			? reinterpret_cast<const RTTIEnum*>(this)
			: nullptr;
	}

	[[nodiscard]] const RTTIPointer* AsPointer() const {
		return mKind == RTTIKind::Pointer ? reinterpret_cast<const RTTIPointer*>(this) : nullptr;
	}

	[[nodiscard]] const RTTIContainer* AsContainer() const {
		return mKind == RTTIKind::Container ? reinterpret_cast<const RTTIContainer*>(this) : nullptr;
	}
	const char* GetKindName() const {
		switch (mKind)
		{
		case RTTIKind::Atom: return "RTTIAtom";
		case RTTIKind::Compound: return "RTTICompound";
		case RTTIKind::Container: return "Container";
		case RTTIKind::Enum: return "Enum";
		case RTTIKind::EnumFlags: return "EnumFlags";
		case RTTIKind::POD: return "POD";
		case RTTIKind::Pointer: return "Pointer";
		}
	}
};

#pragma pack(pop)

ASSERT_SIZE(RTTI, 0x6);

struct RTTIAtom : RTTI {
	using pFromStringFunction = bool (*)(const String& inString, void* inObject);
	using pToStringFunction = bool (*)(const void* inObject, String& outString);

	uint16_t mSize;
	uint8_t mAlignment;
	uint8_t mSimple;
	const char* mName;
	const RTTIAtom* mBaseType;
	pFromStringFunction mFromString;
	pToStringFunction mToString;
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

ASSERT_SIZE(RTTIAtom, 0x78);

struct RTTIValue {
	uint32_t mValue;
	const char* mName;
	const char* mAliases[3];
};

ASSERT_SIZE(RTTIValue, 0x28);

struct RTTIEnum : RTTI {
	uint8_t mSize;
	uint16_t mNumValues;
	uint8_t mAlignment;
	const char* mTypeName;
	const RTTIValue* mValues;
	const RTTI* mRepresentationType;
	[[nodiscard]] auto Values() const { return std::span{ mValues, mNumValues }; }
};

ASSERT_SIZE(RTTIEnum, 0x28);

struct RTTIBase {
	const RTTIClass* mType;
	uint64_t mOffset;
};

ASSERT_SIZE(RTTIBase, 0x10);

struct RTTIAttr {
	using pGetterFunction = void (*)(const void* inObject, void* outValue);
	using pSetterFunction = void (*)(void* inObject, const void* inValue);

	const RTTI* mType;
	uint16_t mOffset;
	uint16_t mFlags;
	const char* mName;
	pGetterFunction mGetter;
	pSetterFunction mSetter;
	const char* mMinValue;
	const char* mMaxValue;
};

ASSERT_SIZE(RTTIAttr, 0x38);

struct RTTIOrderedAttr : RTTIAttr {
	const RTTIClass* mParent;
	const char* mCategory;
};

ASSERT_SIZE(RTTIOrderedAttr, 0x48);

struct RTTIMessageHandler {
	const RTTI* mMessage;
	const void* mHandler;
};

ASSERT_SIZE(RTTIMessageHandler, 0x10);

struct RTTIMessageOrderEntry {
	uint32_t mBefore;
	const RTTI* mMessage;
	const RTTI* mCompound;
};

ASSERT_SIZE(RTTIMessageOrderEntry, 0x18);

struct RTTIClass : RTTI {
	using pFromStringFunction = bool (*)(const String& inString, RTTIObject* inObject);
	using pToStringFunction = bool (*)(const RTTIObject* inObject, String& outString);

	uint8_t mNumBases;
	uint8_t mNumAttrs;
	uint8_t mNumFunctions;
	uint8_t mNumMessageHandlers;
	uint8_t mNumMessageOrderEntries;
	uint8_t _mPad0B[3];
	uint16_t mVersion;
	uint8_t _mPad10[4];
	uint32_t mSize; // 0x14
	uint16_t mAlignment; // 0x18
	uint16_t mFlags; // 0x1A
	const void* mConstructor; // 0x20
	const void* mDestructor; // 0x28
	pFromStringFunction mFromString;
	pToStringFunction mToString;
	const char* mTypeName;
	uint32_t mTypeNameCrc;
	const RTTI* mNextType;
	const RTTI* mPrevType;
	const RTTIBase* mBases;
	const RTTIAttr* mAttrs;
	const void* mFunctions;
	const RTTIMessageHandler* mMessageHandlers;
	const RTTIMessageOrderEntry* mMessageOrderEntries;
	const void* mGetExportedSymbols;
	const RTTI* mRepresentationType;
	const RTTIOrderedAttr* mOrderedAttrs;
	uint32_t mNumOrderedAttrs;
	RTTIMessageHandler mMsgReadBinary;
	uint32_t mMsgReadBinaryOffset;

	[[nodiscard]] auto GetBases() const { return std::span{ mBases, mNumBases }; }

	[[nodiscard]] auto GetAttrs() const { return std::span{ mAttrs, mNumAttrs }; }

	template<typename T>
	T& GetAttrRefUnsafe(RTTIObject& inObject, std::string_view inName, const RTTIAttr** outAttr = nullptr) const {
		void* pointer = nullptr;
		ForEachAttribute([&](const RTTIAttr& inAttr, size_t inOffset) {
			if (inAttr.mName != inName)
				return false;
			if (inAttr.mGetter != nullptr)
				throw std::runtime_error(std::format("Can't obtain a reference to a property {}", inName));
			if (outAttr != nullptr)
				*outAttr = &inAttr;
			pointer = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(&inObject) + inOffset);
			return true;
			});
		if (pointer == nullptr)
			throw std::runtime_error(std::format("Can't find attribute {} in {}", inName, GetName().c_str()));
		return *reinterpret_cast<T*>(pointer);
	}

	template<typename Func>
		requires(std::is_invocable_r_v<bool, Func, const RTTIAttr& /* inAttr */, size_t /* inOffset */>)
	bool ForEachAttribute(const Func& inCallback, size_t inOffset = 0) const {
		for (const auto& base : GetBases()) {
			if (base.mType->ForEachAttribute(inCallback, inOffset + base.mOffset))
				return true;
		}

		for (const auto& attr : GetAttrs()) {
			if (attr.mType == nullptr)
				continue;
			if (inCallback(attr, inOffset + attr.mOffset))
				return true;
		}

		return false;
	}
};

ASSERT_SIZE(RTTIClass, 0xC0);

struct RTTIPointerInfo {
	using pGetFunction = const RTTIRefObject* (*)(const RTTIPointer& inType, const void* inObject);
	using pSetFunction = void (*)(const RTTIPointer& inType, void* inObject, const RTTIRefObject* inValue);

	const char* mName;
	uint32_t mSize;
	uint32_t mAlignment;
	const void* mConstructor;
	const void* mDestructor;
	pGetFunction mGetter;
	pSetFunction mSetter;
	const void* mCopier;
};

ASSERT_SIZE(RTTIPointerInfo, 0x38);

struct RTTIPointer : RTTI {
	const RTTI* mItemType;
	const RTTIPointerInfo* mPointerType;

	[[nodiscard]] const RTTIRefObject* Get(const void* inObject) const {
		return mPointerType->mGetter(*this, inObject);
	}

	void Set(void* inObject, const RTTIRefObject* inValue) const {
		mPointerType->mSetter(*this, inObject, inValue);
	}
};

ASSERT_SIZE(RTTIPointer, 0x18);

struct RTTIContainerInfo {
	using pGetSizeFunction = size_t(*)(const RTTIContainer& inType, const void* inObject);
	using pGetItemFunction = void* (*)(const RTTIContainer& inType, const void* inObject, size_t inIndex);

	using pFromStringFunction = bool (*)(const String& inString, const RTTIContainer& inType, void* inObject);
	using pToStringFunction = bool (*)(const void* inObject, const RTTIContainer& inType, String& outString);

	const char* mName;
	uint16_t mSize;
	uint8_t mAlignment;
	const void* mConstructor;
	const void* mDestructor;
	const void* mResize;
	const void* mInsert;
	const void* mRemove;
	pGetSizeFunction mGetSize;
	pGetItemFunction mGetItem;
	const void* mUnk48;
	const void* mUnk50;
	const void* mUnk58;
	const void* mUnk60;
	const void* mUnk68;
	const void* mUnk70;
	const void* mUnk78;
	const void* mUnk80;
	const void* mUnk88;
	const void* mUnk90;
	pToStringFunction mToString;
	pFromStringFunction mFromString;
	const void* mUnkA8;
	const void* mUnkB0;
	const void* mUnkB8;
};

ASSERT_SIZE(RTTIContainerInfo, 0xC0);

struct RTTIContainer : RTTI {
	const RTTI* mItemType;
	const RTTIContainerInfo* mContainerInfo;

	[[nodiscard]] size_t GetSize(const void* inObject) const {
		return mContainerInfo->mGetSize(*this, inObject);
	}

	[[nodiscard]] void* GetItem(const void* inObject, size_t inIndex) const {
		return mContainerInfo->mGetItem(*this, inObject, inIndex);
	}
};

ASSERT_SIZE(RTTIContainer, 0x18);
