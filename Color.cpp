#include "Color.h"

namespace ColorfulConsole
{
	Color::Color() :blue(false), green(false), red(false), intense(false)
	{

	}
	Color::Color(bool b, bool g, bool r, bool i) :blue(b), green(g), red(r), intense(i)
	{

	}
}