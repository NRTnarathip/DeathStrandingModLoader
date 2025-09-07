#include "ObjectScanner.h"
#include "utils.h"
#include "GameTypes.h"

void* (*backupMyEntityNewObject)(void* p1);
void* HK_MyEntityNewObject(void* p1) {
	//log("MyEntityNewObject called, p1: %p", p1);
	auto result = backupMyEntityNewObject(p1);

	auto list = &ObjectScanner::Instance()->entityList;
	list->add(result);

	return result;
}

void (*MyEntityFreeObject)(void* p1);
void HK_MyEntityFreeObject(void* p1) {
	//log("MyEntityFreeObject called, p1: %p", p1);

	auto list = &ObjectScanner::Instance()->entityList;
	list->remove(p1);

	MyEntityFreeObject(p1);
}

ObjectScanner::ObjectScanner()
{
	log("ObjectScanner init...");

	HookFuncRva(0x2345a10, &HK_MyEntityNewObject, &backupMyEntityNewObject);
	HookFuncRva(0x23466b0, &HK_MyEntityFreeObject, &MyEntityFreeObject);

	log("ObjectScanner init successfully");
}

void ObjectScanner::ScanAllObject()
{
}
