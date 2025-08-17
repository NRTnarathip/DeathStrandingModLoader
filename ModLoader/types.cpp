#include "types.h"
#include "utils.h"


typedef char* (*My_StringBuild4_t)(MyString* src, uint64_t allocateSize);
auto My_StringBuild4Addr = GetFuncAddr(0x190d6c0);
My_StringBuild4_t My_StringBuild4 = (My_StringBuild4_t)My_StringBuild4Addr;

void SetNewMyString(MyString* p1_self, const char* p2_newString)
{
	uint64_t len = strlen(p2_newString);
	char* str = My_StringBuild4(p1_self, len);
	strcpy(str, p2_newString);
	*(int*)(str + -8) = (int)len;
}

