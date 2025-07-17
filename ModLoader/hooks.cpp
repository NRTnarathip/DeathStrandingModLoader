typedef ulonglong(*ResourceReadBuffer_t)(
	ResourceReaderHandle* reader, byte* buffer,
	ulonglong readOffset, ulonglong readLength);

ResourceReadBuffer_t fpResourceReadBuffer = nullptr;

ulonglong Hook_ResourceReadBuffer(ResourceReaderHandle* reader, byte* buffer,
	ulonglong readOffset, ulonglong readLength)
{
	log("============================");
	log("[Hook Begin] ResourceReadBuffer");
	log("reader: %p, buffer: %p, readOffset: %llx, readLength: 0x%llx",
		reader, buffer, readOffset, readLength);
	MyString* fullPathString = (MyString*)reader->fullPath;
	log("path %s", fullPathString->str);
	// Call the original function
	//log("read offset: %llu", readOffset);
	//log("read len   : %d", readLength);
	auto result = fpResourceReadBuffer(reader, buffer, readOffset, readLength);
	log("[Postfix]");
	//log("read status 0x%x", (int)result);
	//log("bytes: %s", GetHexString(buffer, readLength));
	auto headerBufferPtr = buffer;

	//using MurmurHash3_x64_128_t = long long* (*)(void* hash, byte* data, ULONGLONG length);
	//auto MurmurHash3_x64_128 = (MurmurHash3_x64_128_t)GetFuncAddr(0x18fe890);

	int magic = *(int*)buffer;
	log("magic: %s", GetHexString(magic));

	if (magic == 0x21304050) {

		uint32_t headerKeyA = *((uint32_t*)headerBufferPtr + 1);
		uint32_t headerKeyB = headerKeyA + 1;
		log("header keyA: %s", GetHexString(headerKeyA));
		log("header keyB: %s", GetHexString(headerKeyB));

		uint8_t hashKeyA_128bit[16];
		uint8_t temp16byteArray[16];

		log("[Hash Step 1]");
		__m128i temp1__m128i = _mm_set1_epi32(headerKeyA);  // shuffle 0 หมายถึง duplicate ค่า
		__m128i temp16byte = _mm_blend_epi16(GlobalHashSaltM128I, temp1__m128i, 3);
		_mm_storeu_si128((__m128i*)temp16byteArray, temp16byte);
		auto resultHash128 = fpMurmurHash3(&hashKeyA_128bit, temp16byteArray, 16);
		ULONGLONG decodeData[4] = {};
		decodeData[0] ^= resultHash128[0];
		decodeData[1] ^= resultHash128[1];

		log("temp16byteArray: %s", GetHexString(temp16byteArray));
		log("hash128: %s", GetHexString(resultHash128));
		log("hash128_1 : 8byte: %s", GetHexString(resultHash128[0]));
		log("hash128_2 : 8byte: %s", GetHexString(resultHash128[1]));

		log("[Hash Step 2]");

		auto temp2__m128i = _mm_set1_epi32(headerKeyB);  // shuffle 0 หมายถึง duplicate ค่า
		auto temp16byte_2 = _mm_blend_epi16(GlobalHashSaltM128I, temp2__m128i, 3);
		_mm_storeu_si128((__m128i*)temp16byteArray, temp16byte_2);
		resultHash128 = fpMurmurHash3(&hashKeyA_128bit, temp16byteArray, 16);

		log("temp16byteArray: %s", GetHexString(temp16byteArray));
		log("hash128: %s", GetHexString(resultHash128));
		log("hash128_1 : 8byte: %s", GetHexString(resultHash128[0]));
		log("hash128_2 : 8byte: %s", GetHexString(resultHash128[1]));
		decodeData[2] ^= resultHash128[2];
		decodeData[3] ^= resultHash128[3];

		log("[Finally Decoded]");
		log("decodeData[0]: %s", GetHexString(decodeData[0]));
		log("decodeData[1]: %s", GetHexString(decodeData[1]));
		log("decodeData[2]: %s", GetHexString(decodeData[2]));
		log("decodeData[3]: %s", GetHexString(decodeData[3]));
	}
	else {
		log("no need to decode header");
	}

	//log("result: 0x%llX", result);

	//log("Dump..");
	//for (int i = 0; i < 0x28; i++) {
	//	log("inputMagicPtr[%d]: %02X", i, ((unsigned char*)inputMagicPtr)[i]);
	//}
	//log("end dump");

	log("[Hook End] ResourceReadBuffer");
	log("==========================");
	return result;
}


typedef MyString* (*BuildStringBuffer_t)(MyString* param_1, char* string2);
BuildStringBuffer_t fpBuildStringBuffer = nullptr;
MyString* BuildStringBuffer(MyString* myString, char* param_2) {
	//mute.lock();
	log("[Hook Begin] BuildStringBuffer");
	log("myString: %p", myString);
	log("param_2: %s", param_2);

	//myString->str should be null
	//print("my string val: %s", myString->str);

	log("[Prefix]");
	auto result = fpBuildStringBuffer(myString, param_2);
	log("[Postfix]");
	log("my string val: %s", myString->str);
	log("my string someNumber: %d", myString->refCount);
	log("my string someObjPtr: %p", myString->prevStringHeader);
	log("[Hook End] BuildStringBuffer");
	return result;
}

typedef void (*My_LoadAllArchive_t)(ResourceManager* resManager, char* loadResourcePathPtr);
My_LoadAllArchive_t fpMy_LoadAllArchive = nullptr;
void My_LoadAllArchive(ResourceManager* resManager, MyString* loadResourcePathPtr) {
	log("[Hook Begin] My_LoadAllArchive called");
	log("resManager: %ps", resManager);
	log("loadResourcePathPtr: %s", loadResourcePathPtr->str);
	log("loadResourcePathPtr: %p", loadResourcePathPtr->prevStringHeader);
	log("loadResourcePathPtr: %d", loadResourcePathPtr->refCount);
	log("[Prefix]");
	My_LoadAllArchive(resManager, loadResourcePathPtr);
	log("[Postfix]");
	log("[Hook End] My_LoadAllArchive");
}

typedef void (*My_StringBuildInitWithLength_t)(MyString* stringPtrPtr, int strLength);
My_StringBuildInitWithLength_t fpMy_StringBuildInitWithLength = nullptr;
void My_StringBuildInitWithLength(MyString* stringPtrPtr, int strLength) {
	log("[Hook Begin] My_StringBuildInitWithLength called");
	log("stringPtrPtr: %p, strLength: %d", stringPtrPtr, strLength);
	auto stringPtr = (MyString*)stringPtrPtr;
	log("stringPtr->str: %s", stringPtr->str);
	log("stringPtr->someObjPtr: %p", stringPtr->prevStringHeader);
	log("[Prefix]");
	fpMy_StringBuildInitWithLength(stringPtrPtr, strLength);
	log("[Postfix]");
	log("stringPtr->str: %s", stringPtr->str);
	log("stringPtr->someObjPtr: %p", stringPtr->prevStringHeader);
	if (stringPtr->prevStringHeader) {
		//auto header = (MyString*)(stringPtr->someObjectPtr);
		//print("header str : %s", header->str);
		//print("header total length: %d", header->totalLength);
	}
	else {
		log("some object ptr is null !!");
	}

	log("[Hook End] My_StringBuildInitWithLength");
}

typedef MyString* (*AssignRefCountedString_t)(MyString* leftStringPtr, MyString* rightStringPtr);
AssignRefCountedString_t fpAssignRefCountedString = nullptr;
MyString* AssignRefCountedString(MyString* leftString, MyString* rightString) {
	log("[Hook Begin] AssignRefCountedString called");
	log("leftStringPtr: %p, rightStringPtr: %p", leftString, rightString);
	log("left string: %s", leftString->str);
	log("right string: %s", rightString->str);
	// simulate code

	log("begin simulate code");
	if (leftString->str != rightString->str) {
		auto leftStringLength = (UINT*)(leftString->str + -0x10);
		log("left string length ptr: %p", leftStringLength);
		log("left string length: %d", *leftStringLength);
		auto someDat = (UINT*)GetDataSection(0x4562ca0);
		log("someDat ptr: %p", someDat);
		log("someDat val: %d", *someDat);
	}
	log("end   simulate code");

	log("[Prefix]");
	auto result = fpAssignRefCountedString(leftString, rightString);
	log("[Postfix]");
	log("result: %p", result);
	log("left string: %s", leftString->str);
	log("right string: %s", rightString->str);
	log("[Hook End] AssignRefCountedString");
	return result;
}

typedef  int (*My_AddResourcePatch_t)(int* resourceCounterPtr, ArchiveHeader* archiveHeader);
My_AddResourcePatch_t fpMy_AddResourcePatch = nullptr;

int My_AddResourcePatch(int* resourceCounterPtr, ArchiveHeader* header) {
	log("[Hook Begin] My_AddResourcePatch called");

	log("resourceCounterPtr: %p, archiveHeader: %p", resourceCounterPtr, header);
	log("resourceCounterPtr value: %d", *resourceCounterPtr);
	log("archiveHeader->index: %d", header->index);
	log("header key: %s", GetHexString(header->encryptKey));
	log("archiveHeader->isEncrypted: %s", header->isEncrypted ? "true" : "false");
	log("archiveHeader->name: %s", header->name);
	log("[Prefix]");


	auto dataPtr = (char*)(header->indexPtr);
	for (int i = 0; i < 4; i++) {
		dataPtr += i * 0x10;
		log("[%d] dump data: %s %s",
			i,
			GetHexString(*(long*)dataPtr),
			GetHexString(*((long*)dataPtr + 1)));
	}

	auto result = fpMy_AddResourcePatch(resourceCounterPtr, header);
	log("[Postfix]");
	log("result: %d", result);
	log("[Hook End] My_AddResourcePatch");
	return result;
}
