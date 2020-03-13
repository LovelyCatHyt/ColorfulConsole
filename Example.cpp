#include <iostream>
#include "TextAttribute.h"
using namespace ColorfulConsole::TextAttribute;

int main()
{
	WarpedTextAttr::LIGHTBLUE.Apply();
	std::cout << "Is it blue?" << std::endl;
	WarpedTextAttr::LIGHTGreen.Apply();
	std::cout << "Is it green?" << std::endl;
	WarpedTextAttr::LIGHTRed.Apply();
	std::cout << "Is it red?" << std::endl;
	WarpedTextAttr::WHITE.Apply();
	std::cout << "Is it white?" << std::endl;
	return 0;
}
