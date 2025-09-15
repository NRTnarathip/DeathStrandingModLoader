#pragma once

#include "RTTI.h"

class RTTIObject {
private:
	template<typename T>
	T& GetUnsafe(std::string_view inName) {
		void* pointer = nullptr;
		auto rtti = GetRTTI();
		const RTTIAttr* outAttrGetter = nullptr;
		rtti->ForEachAttribute([&](const RTTIAttr& inAttr, size_t inOffset) {
			if (inAttr.mName != inName)
				return false;
			if (inAttr.mGetter != nullptr) {
				outAttrGetter = &inAttr;
				return true;
			}
			pointer = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(this) + inOffset);
			return true;
			});

		if (outAttrGetter != nullptr) {
			T outValue;
			outAttrGetter->mGetter(this, &outValue);
			return outValue;
		}

		if (pointer == nullptr)
			throw std::runtime_error(std::format("Can't find attribute {} in {}", inName, rtti->GetName().c_str()));
		return *reinterpret_cast<T*>(pointer);
	}

public:
	virtual const RTTIClass* GetRTTI() const = 0;
	virtual ~RTTIObject() = 0;

	const char* GetTypeName() {
		return GetRTTI()->GetName().c_str();
	}

	template<typename T>
	T& Get(std::string_view inName) {
		return GetUnsafe<T>(inName);
	}

	template<typename T>
	const T& Get(std::string_view inName) const {
		return GetUnsafe<T>(inName);
	}

	bool Set(std::string_view inName, const String& inValue) {
		const RTTIAttr* attr;
		auto& object = GetRTTI()->GetAttrRefUnsafe<uintptr_t>(*this, inName, &attr);
		return attr->mType->FromString(reinterpret_cast<void*>(&object), inValue);
	}
};