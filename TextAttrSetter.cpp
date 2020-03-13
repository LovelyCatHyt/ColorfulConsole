#include <Windows.h>
#include "TextAttrSetter.h"

namespace ColorfulConsole
{
	HANDLE TextAttrSetter::StdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	void TextAttrSetter::SetAttr(WORD rawAttr)
	{
		SetConsoleTextAttribute(StdHandle, rawAttr);
	}
}


