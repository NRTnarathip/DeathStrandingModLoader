#pragma once

#include "Offsets.h"

class String {
public:
    String() {
        Offsets::CallID<"String::FromCString", String *(*)(String *, const char *)>(this, "");
    }

    String(const char *rhs) {
        Offsets::CallID<"String::FromCString", String *(*)(String *, const char *)>(this, rhs);
    }

    String(const String &rhs) : String() {
        Offsets::CallID<"String::FromString", String *(*)(String *, const String &)>(this, rhs);
    }

    ~String() {
        Offsets::CallID<"String::~String", void *(*)(String *)>(this);
    }

    String &operator=(const String &rhs) {
        if (this == &rhs)
            return *this;
        Offsets::CallID<"String::FromString", String *(*)(String *, const String &)>(this, rhs);
        return *this;
    };

    bool operator==(const char *rhs) const {
        return strcmp(mData, rhs) == 0;
    }

    bool operator!=(const char *rhs) const {
        return strcmp(mData, rhs) != 0;
    }

    [[nodiscard]] const char *c_str() const { return mData; }

    [[nodiscard]] std::string str() const { return c_str(); }

    [[nodiscard]] std::string_view view() const { return c_str(); }

    [[nodiscard]] size_t size() const { return buffer().mLength; }

    [[nodiscard]] size_t capacity() const { return buffer().mCapacity; }

private:
    struct Buffer {
        uint32_t mRefCount;
        uint32_t mCrc;
        uint32_t mLength;
        uint32_t mCapacity;
        char mData[];
    };

    [[nodiscard]] Buffer &buffer() const {
        return *reinterpret_cast<Buffer *>(reinterpret_cast<uintptr_t>(mData - sizeof(Buffer)));
    }

    void set(Buffer *inBuffer) {
        mData = reinterpret_cast<const char *>(reinterpret_cast<uintptr_t>(inBuffer) + sizeof(Buffer));
    }

    const char *mData{nullptr};
};

template<>
struct std::formatter<String> {
    constexpr auto parse(std::format_parse_context& ctx) {
        return ctx.begin();
    }

    auto format(const String& string, std::format_context& ctx) const {
        return std::format_to(ctx.out(), "{}", string.c_str());
    }
};
