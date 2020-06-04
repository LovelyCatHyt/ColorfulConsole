#include "Color.h"

namespace ColorfulConsole
{
	Color::Color() :blue(false), green(false), red(false), intense(false)
	{

	}
	Color::Color(unsigned short colorCode) : Color::Color(colorCode & 0x1, colorCode & 0x2, colorCode & 0x4, colorCode & 0x8)
	{
		
	}
	Color::Color(bool b, bool g, bool r, bool i) :blue(b), green(g), red(r), intense(i)
	{

	}
}