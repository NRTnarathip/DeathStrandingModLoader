#pragma once

struct ResourceHeader {
	int index;
	int unknow1;
	char* name;
};

struct ResourceManager
{
	char padding1[0x30];
	int resourceTotal; // 0x30
	char padding2[0x4]; // 0x34
	ResourceHeader** resourceList; // 0x38
	int resourcePathTotal; // 0x40
};

