#include "BackColorProxy.h"
#include "TextAttribute.h"
#include "GlobalEnvironment.h"
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

namespace ColorfulConsole
{
	const BackColorProxy BackColorProxy::LIGHTBLUE = Color(true, false, false, true);
	const BackColorProxy BackColorProxy::LIGHTGREEN = Color(false, true, false, true);
	const BackColorProxy BackColorProxy::LIGHTRED = Color(false, false, true, true);
	const BackColorProxy BackColorProxy::WHITE = Color(true, true, true, true);
	ostream& ColorfulConsole::operator<<(ostream& out, BackColorProxy bColor)
	{
		WTA current(GlobalEnvironment::GetFore(),bColor);
		current.Apply();
		return out;
	}
	BackColorProxy::BackColorProxy() : Color()
	{
	}
	BackColorProxy::BackColorProxy(bool intense, bool red, bool green, bool blue)
	{
		this->blue = blue;
		this->green = green;
		this->red = red;
		this->intense = intense;
	}
	BackColorProxy::BackColorProxy(Color&& c)
	{
		blue = c.blue;
		green = c.green;
		red = c.red;
		intense = c.intense;
	}
}