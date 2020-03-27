#include "ForeColorProxy.h"
#include "TextAttribute.h"
#include "GlobalEnvironment.h"
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

namespace ColorfulConsole
{
	const ForeColorProxy ForeColorProxy::LIGHTBLUE = Color(true, false, false, true);
	const ForeColorProxy ForeColorProxy::LIGHTGREEN = Color(false, true, false, true);
	const ForeColorProxy ForeColorProxy::LIGHTRED = Color(false, false, true, true);
	const ForeColorProxy ForeColorProxy::WHITE = Color(true, true, true, true);
	ostream& ColorfulConsole::operator<<(ostream& out, ForeColorProxy fColor)
	{
		WTA current(fColor, GlobalEnvironment::GetBack());
		current.Apply();
		return out;
	}
	ForeColorProxy::ForeColorProxy() : Color()
	{
	}
	ForeColorProxy::ForeColorProxy(Color&& c)
	{
		blue = c.blue;
		green = c.green;
		red = c.red;
		intense = c.intense;
	}
}