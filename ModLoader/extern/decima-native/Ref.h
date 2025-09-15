#pragma once

#include "Core/RTTIRefObject.h"

template<typename T>
    requires (std::is_base_of_v<RTTIRefObject, T>)
class Ref {
public:
    Ref() = default;

    Ref(const Ref &inRef) {
        Assign(inRef.m_Ptr);
    }

    explicit Ref(T *inPtr) {
        Assign(inPtr);
    }

    Ref<T> &operator=(const Ref<T> &inRef) {
        if (this == &inRef)
            return *this;
        Assign(inRef.m_Ptr);
        return *this;
    }

    explicit operator bool() const {
        return m_Ptr != nullptr;
    }

    T *operator->() {
        return m_Ptr;
    }

    const T *operator->() const {
        return m_Ptr;
    }

    T &operator*() {
        return *m_Ptr;
    }

    const T &operator*() const {
        return *m_Ptr;
    }

    const T *Get() const {
        return m_Ptr;
    }

    T *Get() {
        return m_Ptr;
    }

private:
    void Assign(T *inPtr) {
        auto tmp = m_Ptr;
        if (inPtr)
            inPtr->IncrementRef();
        m_Ptr = inPtr;
        if (tmp)
            tmp->DecrementRef();
    }

    T *m_Ptr{nullptr};
};
