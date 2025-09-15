#pragma once

#include <cstdint>

#include "Core/Filename.h"
#include "Core/FileSystem.h"
#include "PCore/Array.h"

class FileDevice {
public:
    FileDevice() = delete;

    virtual ~FileDevice() = 0;

    virtual const Filename &Path() = 0;

    virtual void FileDevice_2() = 0;

    virtual void FileDevice_3() = 0;

    virtual void FileDevice_4() = 0;

    virtual void FileDevice_5() = 0;

    virtual void FileDevice_6() = 0;

    virtual void FileDevice_7() = 0;

    virtual void FileDevice_8() = 0;

    virtual void FileDevice_9() = 0;

    virtual void FileDevice_10() = 0;

    virtual void FileDevice_11() = 0;

    virtual void FileDevice_12() = 0;

    virtual void FileDevice_13() = 0;

    virtual void FileDevice_14() = 0;

    virtual void FileDevice_15() = 0;

    virtual void FileDevice_16() = 0;

    virtual void FileDevice_17() = 0;

    virtual void FileDevice_18() = 0;

    virtual void FileDevice_19() = 0;

    virtual void FileDevice_20() = 0;

    virtual void FileDevice_21() = 0;

    virtual void FileDevice_22() = 0;

    virtual void FileDevice_23() = 0;

    virtual void FileDevice_24() = 0;

    virtual void FileDevice_25() = 0;

    virtual void FileDevice_26() = 0;

    virtual void FileDevice_27() = 0;

    virtual void FileDevice_28() = 0;

    virtual void FileDevice_29() = 0;

    virtual void FileDevice_30() = 0;

    virtual void FileDevice_31() = 0;

    virtual void FileDevice_32() = 0;

    virtual void FileDevice_33() = 0;

    virtual void FileDevice_34() = 0;

    virtual void FileDevice_35() = 0;

    virtual void FileDevice_36() = 0;

    virtual void FileDevice_37() = 0;

    virtual void FileDevice_38() = 0;

    virtual void FileDevice_39() = 0;

    virtual void FileDevice_40() = 0;

    virtual void FileDevice_41() = 0;

    virtual void FileDevice_42() = 0;

    virtual void FileDevice_43() = 0;

    virtual void FileDevice_44() = 0;

    virtual void Find(const Filename &inPathSpec, Array<FileSystem::FileEntry> *outFileList, Array<FileSystem::FileEntry> *outDirectoryList) = 0;

    virtual void FileDevice_46() = 0;

    virtual void FileDevice_47() = 0;

private:
    uint32_t mUnk08;
    uint32_t mUnk0C;
    Filename mPath;
};
