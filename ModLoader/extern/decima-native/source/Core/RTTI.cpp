#include "RTTI.h"

String RTTI::GetName() const {
    String out;
    Offsets::CallID<"RTTI::GetName", String *(*)(const RTTI *, String *)>(this, &out);
    return out;
}

String RTTI::ToString(const void *value) const {
    String out;
    Offsets::CallID<"RTTI::ToString", String *(*)(const RTTI *, const void *, String *)>(this, value, &out);
    return out;
}

bool RTTI::FromString(void *inObject, const String &inString) const {
    if (auto compound = AsClass(); compound) {
        return compound->mFromString && compound->mFromString(inString, static_cast<RTTIObject *>(inObject));
    }
    if (auto atom = AsAtom(); atom) {
        return atom->mFromString && atom->mFromString(inString, inObject);
    }
    if (auto container = AsContainer(); container) {
        return container->mContainerInfo->mFromString && container->mContainerInfo->mFromString(inString, *container, inObject);
    }
    if (auto _enum = AsEnum(); _enum) {
        for (auto i = 0; i < _enum->mNumValues; i++) {
            const auto &value = _enum->mValues[i];
            if (inString != value.mName)
                continue;
            memcpy(inObject, &value.mValue, _enum->mSize);
            return true;
        }
    }
    return false;
}
