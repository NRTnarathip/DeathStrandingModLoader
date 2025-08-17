#include "types.h"
#include "utils.h"


typedef char* (*My_StringBuild4_t)(MyString* src, uint64_t allocateSize);
auto My_StringBuild4Addr = GetFuncAddr(0x190d6c0);
My_StringBuild4_t My_StringBuild4 = (My_StringBuild4_t)My_StringBuild4Addr;

char* MyStringEmptyPtr = (char*)GetAddressFromRva(0x4562cb0);
void SetNewMyString(MyString* p1_self, const char* p2_newString)
{
	std::string string(p2_newString);
	uint64_t len = string.size();
	p1_self->str = MyStringEmptyPtr;

	char* newStr = My_StringBuild4(p1_self, len);
	memcpy(newStr, string.c_str(), len);
	newStr[len] = '\0';
	*(int*)(newStr + -8) = (int)len;
}

