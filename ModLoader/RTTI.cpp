#include "RTTI.h"
#include <format>

const RTTIAtom* RTTI::AsAtom() const {
	switch (mKind) {
	case RTTIKind::Atom:
		return reinterpret_cast<const RTTIAtom*>(this);
	default:
		return nullptr;
	}
}

const RTTICompound* RTTI::AsCompound() const {
	switch (mKind) {
	case RTTIKind::Compound:
		return reinterpret_cast<const RTTICompound*>(this);
	default:
		return nullptr;
	}
}

const RTTIEnum* RTTI::AsEnum() const {
	switch (mKind) {
	case RTTIKind::Enum:
	case RTTIKind::EnumFlags:
	case RTTIKind::EnumBitSet:
		return reinterpret_cast<const RTTIEnum*>(this);
	default:
		return nullptr;
	}
}

const RTTIPointer* RTTI::AsPointer() const {
	switch (mKind) {
	case RTTIKind::Pointer:
		return reinterpret_cast<const RTTIPointer*>(this);
	default:
		return nullptr;
	}
}

const RTTIContainer* RTTI::AsContainer() const {
	switch (mKind) {
	case RTTIKind::Container:
		return reinterpret_cast<const RTTIContainer*>(this);
	default:
		return nullptr;
	}
}

const RTTIPod* RTTI::AsPOD() const {
	switch (mKind) {
	case RTTIKind::POD:
		return reinterpret_cast<const RTTIPod*>(this);
	default:
		return nullptr;
	}
}

[[nodiscard]] std::string RTTI::BaseName() const {
	switch (mKind) {
	case RTTIKind::Atom:
		return reinterpret_cast<const RTTIAtom*>(this)->mTypeName;
	case RTTIKind::Pointer:
	case RTTIKind::Container:
		return reinterpret_cast<const RTTIContainer*>(this)->mContainerType->mTypeName;
	case RTTIKind::Enum:
	case RTTIKind::EnumFlags:
	case RTTIKind::EnumBitSet:
		return reinterpret_cast<const RTTIEnum*>(this)->mTypeName;
	case RTTIKind::Compound:
		return reinterpret_cast<const RTTICompound*>(this)->mTypeName;
	default:
		throw std::runtime_error("Unreachable code");
	}
}

[[nodiscard]] std::string RTTI::Name() const {
	switch (mKind) {
	case RTTIKind::Atom:
		return reinterpret_cast<const RTTIAtom*>(this)->mTypeName;
	case RTTIKind::Pointer:
	case RTTIKind::Container: {
		const auto container = reinterpret_cast<const RTTIContainer*>(this);
		return std::format("{}<{}>", container->mContainerType->mTypeName, container->mItemType->Name());
	}
	case RTTIKind::Enum:
	case RTTIKind::EnumFlags:
	case RTTIKind::EnumBitSet:
		return reinterpret_cast<const RTTIEnum*>(this)->mTypeName;
	case RTTIKind::Compound:
		return reinterpret_cast<const RTTICompound*>(this)->mTypeName;
	case RTTIKind::POD:
		return reinterpret_cast<const RTTIPod*>(this)->mTypeName;
	default:
		throw std::runtime_error("Unreachable code");
	}
}

[[nodiscard]] std::string RTTI::KindName() const {
	switch (mKind) {
	case RTTIKind::Atom:
		return "primitive";
	case RTTIKind::Pointer:
		return "pointer";
	case RTTIKind::Container:
		return "container";
	case RTTIKind::Enum:
		return "enum";
	case RTTIKind::Compound:
		return "class";
	case RTTIKind::EnumFlags:
		return "enum flags";
	case RTTIKind::EnumBitSet:
		return "enum bitset";
	case RTTIKind::POD:
		return "pod";
	default:
		throw std::runtime_error("Unreachable code");
	}
}
