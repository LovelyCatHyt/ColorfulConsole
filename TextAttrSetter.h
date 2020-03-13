#include <Windows.h>
#pragma once
namespace ColorfulConsole {
	static class TextAttrSetter
	{
		static HANDLE StdHandle;
	public:
		static void SetAttr(WORD rawAttr);
	};
}
