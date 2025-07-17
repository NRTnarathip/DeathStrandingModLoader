#pragma once


//#include "helper.hpp"

//#ifndef _MY_LOAD_ARCHIVE_HPP
//#define _MY_LOAD_ARCHIVE_HPP
//#define _DWORD unsigned int
//#define _QWORD unsigned long long
//#define _BYTE unsigned char
//#define _WORD unsigned short
//#define HIDWORD(x) (*(((unsigned int*)&(x)) + 1))
//#define LOWORD(x) (*((unsigned int*)&(x)))
//#define SLODWORD(x) (*((unsigned int*)&(x)))
//#define SHIDWORD(x) (*(((unsigned int*)&(x)) + 1))
//#define LODWORD(x) (*((unsigned int*)&(x)))
//#define int32_t int
//#define uint64_t unsigned long long
//#endif

//#pragma pack(push, 1)
//struct ArchiveBinHeader
//{
//	int32_t index;                 // 0x00
//	char _pad0[4];                 // 0x04–0x07
//	char* name;                    // 0x08
//	long long gap10;                 // 0x10–0x17
//	bool isEncrypted;             // 0x18
//	char _pad2[7];                 // 0x19–0x1F
//	int32_t* someIndex1ptr;        // 0x20
//	uint64_t* indexPtr;            // 0x28
//	uint64_t qword30;              // 0x30
//	uint64_t qword38;              // 0x38
//};
//#pragma pack(pop)
//
//struct struct_resManager_ptr {
//	_QWORD* pqword38; // rbx
//	int int30; // r15d
//	int int31; // rdi
//	_QWORD* qword40; // rax
//	_QWORD* qword48; // rax
//	_QWORD* qword50; // rax
//	_QWORD* qword58; // rax
//	_QWORD* qword60; // rax
//	_QWORD* qword68; // rax
//	_QWORD* qword70; // rax
//};
//
//char __fastcall Replace_LoadArchiveBin(
//	struct_resManager_ptr* resManager_ptr,
//	void* loadResourceName_MyStringPtr,
//	unsigned int loadIndex)
//{
//	print("[Hook] Replace_LoadArchiveBin called");
//	print("resManager_ptr: %p, loadResourceName_MyStringPtr: %p, loadIndex: %u",
//		resManager_ptr, loadResourceName_MyStringPtr, loadIndex);
//
//
//	_QWORD* pqword38; // rbx
//	int* v4; // r15
//	_QWORD* v6; // rdi
//	ArchiveBinHeader* m_archiveHeaderPtr; // rax
//	unsigned int v8; // r12d
//	ArchiveBinHeader* archiveHeader2ptr; // rbx
//	__int64 v11; // r8
//	int magicInt; // ecx
//	unsigned __int64* _RAX; // rax
//	unsigned __int64* _RAX; // rax
//	int v27; // edi
//	unsigned __int64 indexPtr; // rcx
//	__int64 v29; // rax
//	__int64 v30; // r9
//	__int64 v31; // r8
//	unsigned int v32; // r14d
//	__int64 _RSI; // rsi
//	int _EDI; // edi
//	unsigned __int64* _RAX; // rax
//	unsigned __int64* _RAX; // rax
//	int v49; // edi
//	unsigned __int64 qword38; // rcx
//	int v51; // eax
//	__int64 v52; // r9
//	__int64 v53; // r8
//	__int64 v55; // r15
//	__int64 _RSI; // rsi
//	int _R14D; // r14d
//	int _EDI; // edi
//	unsigned __int64* _RAX; // rax
//	unsigned __int64* _RAX; // rax
//	char v72; // bl
//	int* v74; // [rsp+38h] [rbp-C8h]
//	unsigned __int64 v75[2]; // [rsp+40h] [rbp-C0h] BYREF
//	unsigned __int64 v76[2]; // [rsp+50h] [rbp-B0h] BYREF
//	int magicHeader_intValue; // [rsp+60h] [rbp-A0h] BYREF
//	int v78; // [rsp+64h] [rbp-9Ch]
//	__int64 v80[2]; // [rsp+78h] [rbp-88h]
//	__int64 v81[2]; // [rsp+90h] [rbp-70h] BYREF
//	__int64* resReader; // [rsp+A0h] [rbp-60h] BYREF
//	int v83; // [rsp+B0h] [rbp-50h]
//	__int64(__fastcall * *v84)(); // [rsp+B8h] [rbp-48h]
//	void* v85; // [rsp+C0h] [rbp-40h] BYREF
//	__int64 v86; // [rsp+C8h] [rbp-38h]
//	int v87; // [rsp+D0h] [rbp-30h]
//	__int64 v88; // [rsp+D8h] [rbp-28h]
//	int v89; // [rsp+E0h] [rbp-20h]
//	__int64 v90; // [rsp+E8h] [rbp-18h]
//	void* v91; // [rsp+F0h] [rbp-10h] BYREF
//	char v92; // [rsp+F8h] [rbp-8h]
//
//	pqword38 = resManager_ptr->pqword38;
//	v4 = &resManager_ptr->int30;
//	v74 = &resManager_ptr->int30;
//	v6 = &pqword38[resManager_ptr->int30];
//	using My_AllocateMemory_t = INT64(*)(unsigned __int64 size);
//	auto My_AllocateMemory = (My_AllocateMemory_t)GetFuncAddr(0x1a0d9d0);
//
//	using My_StringSetRightToLeft_t = void(*)(char** strPtr, void* myStringPtr);
//	auto My_StringSetRightToLeft = (My_StringSetRightToLeft_t)GetFuncAddr(0x1a0d9e0);
//
//	void* unk_7FF7A28F2CB0 = GetFuncAddr(0x4562cb0);
//
//	void* off_7FF7A1F1E1F0 = GetFuncAddr(0x3b8e1f0);
//
//	auto off_7FF7A1F1E250_addr = reinterpret_cast<__int64(__fastcall*)()>(GetFuncAddr(0x1921740));
//	auto off_7FF7A1F1E250 = &off_7FF7A1F1E250_addr;
//
//	using  My_StringReleaseOrReset_t = void(*)(void* strPtr);
//	auto sub_7FF79FC9C200 = (My_StringReleaseOrReset_t)GetFuncAddr(0x190c200);
//
//	using My_OpenResourceReader_t = int(*)(__int64* resReader, void* loadResourceName_MyStringPtr, unsigned int flags, int param3, int param4, int param5);
//	My_OpenResourceReader_t My_OpenResourceReader = (My_OpenResourceReader_t)GetFuncAddr(0x19280b0);
//
//	using My_ReadFileMagic_t = int(*)(__int64** a1, void* a2, unsigned __int64 a3, unsigned __int64 a4);
//	My_ReadFileMagic_t My_ReadFileMagic = (My_ReadFileMagic_t)GetFuncAddr(0x1929a50);
//
//	using MurmurHash_x64_128_t = unsigned __int64* (*)(unsigned __int64* hash, unsigned __int8* data, unsigned __int64 length);
//	MurmurHash_x64_128_t MurmurHash_x64_128 = (MurmurHash_x64_128_t)GetFuncAddr(0x18fe890);
//
//	using sub_7FF79FD65870_t = void(*)(unsigned __int64 indexPtr);
//	sub_7FF79FD65870_t sub_7FF79FD65870 = (sub_7FF79FD65870_t)GetFuncAddr(0x19d5770);
//
//	using sub_7FF79FD65770_t = unsigned __int64 (*)(unsigned __int64 indexPtr, __int64 size);
//	auto sub_7FF79FD65770 = (sub_7FF79FD65770_t)GetFuncAddr(0x19d5870);
//
//	using My_ValidArchiveBin_t = int(*)(void* a1, unsigned int a2, unsigned __int64 a3, long long a4);
//	auto My_ValidArchiveBin = (My_ValidArchiveBin_t)GetFuncAddr(0x1928450);
//
//	using sub_7FF79FCB1F00_t = int(*)(long long** archiveHeaderPtr);
//	auto sub_7FF79FCB1F00 = (sub_7FF79FCB1F00_t)GetFuncAddr(0x1921f00);
//
//	using My_AddResourceHeader_t = int(*)(int* resourceCounterPtr, ArchiveBinHeader* archiveHeader);
//	auto My_AddResourceHeader = (My_AddResourceHeader_t)GetFuncAddr(0x1904030);
//
//	using My_AddResourceHeaderIndex_t = int(*)(int* resourceCounterPtr, unsigned int resourceIndex, ArchiveBinHeader* archiveHeader);
//	auto My_AddResourceHeaderIndex = (My_AddResourceHeaderIndex_t)GetFuncAddr(0x19042b0);
//
//	using sub_7FF79FC9AD20_t = int(*)(void** archiveHeaderPtr);
//	auto sub_7FF79FC9AD20 = (sub_7FF79FC9AD20_t)GetFuncAddr(0x190ad20);
//
//	using sub_7FF79FC9B0A0_t = int(*)(UINT64 a, void* b);
//	sub_7FF79FC9B0A0_t sub_7FF79FC9B0A0 = (sub_7FF79FC9B0A0_t)GetFuncAddr(0x190b0a0);
//
//	if (pqword38 == v6)
//	{
//	LABEL_4:
//		m_archiveHeaderPtr = (ArchiveBinHeader*)My_AllocateMemory(0x40LL);
//		v8 = 0;
//		archiveHeader2ptr = m_archiveHeaderPtr;
//		if (m_archiveHeaderPtr)
//		{
//			m_archiveHeaderPtr->name = (char*)&unk_7FF7A28F2CB0;
//			m_archiveHeaderPtr->someIndex1ptr = 0LL;
//			m_archiveHeaderPtr->indexPtr = 0LL;
//			m_archiveHeaderPtr->qword30 = 0LL;
//			m_archiveHeaderPtr->qword38 = 0LL;
//		}
//		else
//		{
//			archiveHeader2ptr = 0LL;
//		}
//		My_StringSetRightToLeft(&archiveHeader2ptr->name, loadResourceName_MyStringPtr);
//		memset(&resReader, 0, 0x60uLL);
//		v83 = 2;
//		resReader = (__int64*)off_7FF7A1F1E1F0;
//		v85 = &unk_7FF7A28F2CB0;
//		v84 = off_7FF7A1F1E250;
//		v86 = 0LL;
//		v90 = 0LL;
//		v91 = &unk_7FF7A28F2CB0;
//		sub_7FF79FC9C200(&v85);
//		v86 = 0LL;
//		v87 = 0;
//		v88 = 0LL;
//		v89 = 0;
//		v90 = 0LL;
//		v92 = 1;
//		if (!My_OpenResourceReader(resReader, loadResourceName_MyStringPtr, 1u, 0, 0, -1))
//			goto LABEL_49;
//		v11 = v88;
//		v88 += 40LL;
//		if (!(unsigned __int8)My_ReadFileMagic(&resReader, &magicHeader_intValue, v11, 40LL))
//			goto LABEL_49;
//		magicInt = magicHeader_intValue;
//		if (((magicHeader_intValue - 0x20304050) & 0xFEFFFFFF) != 0)
//			goto LABEL_49;
//		archiveHeader2ptr->isEncrypted = magicHeader_intValue == 0x21304050;
//		if (magicInt == 0x21304050)
//		{
//			//__asm
//			//{
//			//	vmovd   xmm1, [rsp + 140h + var_DC]
//			//	vmovdqu xmm0, cs:xmmword_7FF7A32FD010
//			//	vpshufd xmm1, xmm1, 0
//			//	vpblendw xmm1, xmm0, xmm1, 3
//			//	vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//			//}
//			//_RAX = MurmurHash_x64_128(v75, (unsigned __int8*)v81, 16LL);
//			//__asm
//			//{
//			//	vmovdqu xmm0, cs:xmmword_7FF7A32FD010
//			//	vmovups xmm1, xmmword ptr[rax]
//			//	vpxor   xmm1, xmm1, [rsp + 140h + var_D8]
//			//	vmovdqu[rsp + 140h + var_D8], xmm1
//			//}
//			//LODWORD(_RAX) = v78 + 1;
//			//__asm
//			//{
//			//	vmovd   xmm1, eax
//			//	vpshufd xmm1, xmm1, 0
//			//	vpblendw xmm1, xmm0, xmm1, 3
//			//	vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//			//}
//			//_RAX = MurmurHash_x64_128(v75, (unsigned __int8*)v81, 16LL);
//			//__asm
//			//{
//			//	vmovups xmm1, xmmword ptr[rax]
//			//	vpxor   xmm1, xmm1, xmmword ptr[rsp + 140h + var_C8]
//			//	vmovdqu xmmword ptr[rsp + 140h + var_C8], xmm1
//			//}
//
//			// Load 32-bit integer from memory (var_DC)
//			//__m128i xmm1 = _mm_cvtsi32_si128(*(int32_t*)&var_DC); // vmovd
//			//__m128i xmm0 = _mm_loadu_si128((__m128i*)xmmword_7FF7A32FD010); // vmovdqu
//
//			//xmm1 = _mm_shuffle_epi32(xmm1, _MM_SHUFFLE(0, 0, 0, 0)); // vpshufd
//			//xmm1 = _mm_blend_epi16(xmm0, xmm1, 0x03); // vpblendw(mask=3)
//
//			//_mm_storeu_si128((__m128i*) & var_B0, xmm1); // vmovdqu
//
//
//			//__m128i xmm1 = _mm_loadu_si128((__m128i*)_RAX); // vmovups
//			//__m128i tmp = _mm_loadu_si128((__m128i*) & var_D8); // load original
//
//			//xmm1 = _mm_xor_si128(xmm1, tmp); // vpxor
//			//_mm_storeu_si128((__m128i*) & var_D8, xmm1); // vmovdqu
//		}
//		v27 = v80[0];
//		indexPtr = (unsigned __int64)archiveHeader2ptr->indexPtr;
//		if (SLODWORD(v80[0]) <= SLODWORD(archiveHeader2ptr->someIndex1ptr))
//		{
//			LODWORD(archiveHeader2ptr->someIndex1ptr) = v80[0];
//			if (!v27)
//			{
//				sub_7FF79FD65870(indexPtr);
//				indexPtr = 0LL;
//				archiveHeader2ptr->someIndex1ptr = 0LL;
//			}
//		}
//		else
//		{
//			if (SLODWORD(v80[0]) > SHIDWORD(archiveHeader2ptr->someIndex1ptr))
//			{
//				indexPtr = sub_7FF79FD65770(indexPtr, 32LL * SLODWORD(v80[0]));
//				if (!indexPtr && v27 > 0)
//				{
//					indexPtr = 0LL;
//					LODWORD(archiveHeader2ptr->someIndex1ptr) = v27;
//					goto LABEL_22;
//				}
//				HIDWORD(archiveHeader2ptr->someIndex1ptr) = v27;
//			}
//			LODWORD(archiveHeader2ptr->someIndex1ptr) = v27;
//		}
//	LABEL_22:
//		archiveHeader2ptr->indexPtr = (_QWORD*)indexPtr;
//		v29 = v80[0];
//		v30 = 32 * v80[0];
//		if (32LL * v80[0])
//		{
//			v31 = v88;
//			v88 += v30;
//			if (!(unsigned __int8)My_ReadFileMagic(&resReader, &indexPtr, v31, v30))
//				goto LABEL_49;
//			v29 = v80[0];
//		}
//		if (archiveHeader2ptr->isEncrypted)
//		{
//			v32 = 0;
//			if (v29)
//			{
//				do
//				{
//					/*__asm { vmovdqu xmm0, cs:xmmword_7FF7A32FD010 }
//					_RSI = (__int64)&archiveHeader2ptr->indexPtr[4 * (int)v32];
//					__asm { vmovd   xmm1, dword ptr[rsi + 4] }
//					_EDI = *(_DWORD*)(_RSI + 28);
//					__asm
//					{
//						vpshufd xmm1, xmm1, 0
//						vpblendw xmm1, xmm0, xmm1, 3
//						vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//					}
//					_RAX = MurmurHash_x64_128(v75, (unsigned __int8*)v81, 16LL);
//					__asm
//					{
//						vmovd   xmm1, edi
//						vpshufd xmm1, xmm1, 0
//						vmovups xmm0, xmmword ptr[rax]
//						vpxor   xmm0, xmm0, xmmword ptr[rsi]
//						vmovdqu xmmword ptr[rsi], xmm0
//						vmovdqu xmm0, cs:xmmword_7FF7A32FD010
//						vpblendw xmm1, xmm0, xmm1, 3
//						vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//					}
//					_RAX = MurmurHash_x64_128(v76, (unsigned __int8*)v81, 16LL);
//					++v32;
//					__asm
//					{
//						vmovups xmm0, xmmword ptr[rax]
//						vpxor   xmm0, xmm0, xmmword ptr[rsi + 10h]
//						vmovdqu xmmword ptr[rsi + 10h], xmm0
//					}*/
//				} while ((unsigned __int64)v32 < v80[0]);
//			}
//		}
//		v49 = v80[1];
//		qword38 = archiveHeader2ptr->qword38;
//		if (SLODWORD(v80[1]) <= SLODWORD(archiveHeader2ptr->qword30))
//		{
//			LODWORD(archiveHeader2ptr->qword30) = v80[1];
//			if (!v49)
//			{
//				sub_7FF79FD65870(qword38);
//				qword38 = 0LL;
//				archiveHeader2ptr->qword30 = 0LL;
//			}
//			goto LABEL_37;
//		}
//		if (SLODWORD(v80[1]) > SHIDWORD(archiveHeader2ptr->qword30))
//		{
//			qword38 = sub_7FF79FD65770(qword38, 32LL * SLODWORD(v80[1]));
//			if (!qword38 && v49 > 0)
//			{
//				qword38 = 0LL;
//				LODWORD(archiveHeader2ptr->qword30) = v49;
//			LABEL_37:
//				archiveHeader2ptr->qword38 = qword38;
//				v51 = v80[1];
//				v52 = 32LL * LODWORD(v80[1]);
//				if (v52)
//				{
//					v53 = v88;
//					v88 += v52;
//					if (!(unsigned __int8)My_ReadFileMagic(&resReader, &qword38, v53, v52))
//						goto LABEL_49;
//					v51 = v80[1];
//				}
//				if (archiveHeader2ptr->isEncrypted && v51)
//				{
//					do
//					{
//						/*	__asm { vmovdqu xmm0, cs:xmmword_7FF7A32FD010 }
//							v55 = 32LL * (int)v8;
//							_RSI = v55 + archiveHeader2ptr->qword38;
//							_R14D = *(_DWORD*)(_RSI + 12);
//							_EDI = *(_DWORD*)(_RSI + 28);
//							__asm
//							{
//								vmovd   xmm1, r14d
//								vpshufd xmm1, xmm1, 0
//								vpblendw xmm1, xmm0, xmm1, 3
//								vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//							}
//							_RAX = MurmurHash_x64_128(v76, (unsigned __int8*)v81, 16LL);
//							__asm
//							{
//								vmovd   xmm1, edi
//								vpshufd xmm1, xmm1, 0
//								vmovups xmm0, xmmword ptr[rax]
//								vpxor   xmm0, xmm0, xmmword ptr[rsi]
//								vmovdqu xmmword ptr[rsi], xmm0
//								vmovdqu xmm0, cs:xmmword_7FF7A32FD010
//								vpblendw xmm1, xmm0, xmm1, 3
//								vmovdqu xmmword ptr[rbp + 40h + var_B0], xmm1
//							}
//							_RAX = MurmurHash_x64_128(v75, (unsigned __int8*)v81, 16LL);
//							++v8;
//							__asm
//							{
//								vmovups xmm0, xmmword ptr[rax]
//								vpxor   xmm0, xmm0, xmmword ptr[rsi + 10h]
//								vmovdqu xmmword ptr[rsi + 10h], xmm0
//							}
//							*(_DWORD*)(v55 + archiveHeader2ptr->qword38 + 12) = _R14D;*/
//					} while (v8 < LODWORD(v80[1]));
//					v4 = v74;
//				}
//				sub_7FF79FCB1F00(&resReader);
//				if ((unsigned __int8)My_ValidArchiveBin(loadResourceName_MyStringPtr,
//					1u, 0, (__int64)archiveHeader2ptr->gap10) == 2)
//				{
//					archiveHeader2ptr->index = *v4;
//					if (loadIndex == -1)
//						My_AddResourceHeader(v4, archiveHeader2ptr);
//					else
//						My_AddResourceHeaderIndex(v4, loadIndex, archiveHeader2ptr);
//					v72 = 1;
//					goto LABEL_50;
//				}
//			LABEL_49:
//				v72 = 0;
//			LABEL_50:
//				resReader = (__int64*)off_7FF7A1F1E1F0;
//				v84 = off_7FF7A1F1E250;
//				sub_7FF79FCB1F00(&resReader);
//				sub_7FF79FC9AD20(&v91);
//				sub_7FF79FC9AD20(&v85);
//				return v72;
//			}
//			HIDWORD(archiveHeader2ptr->qword30) = v49;
//		}
//		LODWORD(archiveHeader2ptr->qword30) = v49;
//		goto LABEL_37;
//	}
//	while (!(unsigned __int8)sub_7FF79FC9B0A0(*pqword38 + 8LL, loadResourceName_MyStringPtr))
//	{
//		if (++pqword38 == v6)
//			goto LABEL_4;
//	}
//	return 1;
//}
