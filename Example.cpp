#include <iostream>
#include "TextAttribute.h"
using namespace ColorfulConsole::TextAttribute;
using WTA = WarpedTextAttr;

int main()
{
	WTA::LIGHTBLUE.Apply();
	std::cout << "Is it blue?" << std::endl;
	WTA::LIGHTGreen.Apply();
	std::cout << "Is it green?" << std::endl;
	WTA::LIGHTRed.Apply();
	std::cout << "Is it red?" << std::endl;
	WTA::WHITE.Apply();
	std::cout << "Is it white?" << std::endl;
	return 0;
}
