#pragma once
class TexturePatcher
{
public:
	static TexturePatcher& Instance()
	{
		static TexturePatcher inst;
		return inst;
	}

	TexturePatcher();
	void InitHookRenderer();
};

