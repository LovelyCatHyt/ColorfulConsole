#include <iostream>
#include "TextAttribute.h"
using namespace ColorfulConsole::TextAttribute;
using WTA = WarpedTextAttr;

int main()
{
	//使用常量调用
	WTA::LIGHTBLUE.Apply();
	std::cout << "Is it blue?" << std::endl;
	WTA::LIGHTGREEN.Apply();
	std::cout << "Is it green?" << std::endl;
	WTA::LIGHTRED.Apply();
	std::cout << "Is it red?" << std::endl;
	WTA::WHITE.Apply();
	std::cout << "Is it white?" << std::endl;
	//使用ostream输出
	std::cout << WTA::LIGHTBLUE << "来" << WTA::LIGHTGREEN << "整" << WTA::LIGHTRED << "活" << WTA::WHITE << std::endl;
	return 0;
}
