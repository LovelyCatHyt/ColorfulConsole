#include "GlobalEnvironment.h"
#include "TextAttribute.h"
#include "Color.h"
using WTA = ColorfulConsole::TextAttribute::WarpedTextAttr;

namespace ColorfulConsole
{
	GlobalEnvironment& GlobalEnvironment::instance()
	{
		static GlobalEnvironment _instance;
		return _instance;
	}
	void GlobalEnvironment::ApplyCurrent()
	{
		WTA current(fore, back);
		current.Apply();
	}
	GlobalEnvironment::GlobalEnvironment(Color fr, Color bg) : fore(fr),back(bg)
	{
	}
	void GlobalEnvironment::Init(Color fg, Color bg)
	{
		instance().fore = fg;
		instance().back = bg;
		instance().ApplyCurrent();
	}
	void GlobalEnvironment::ChangeForeground(Color newForeground)
	{
		instance().fore = newForeground;
		instance().ApplyCurrent();
	}
	Color GlobalEnvironment::GetFore()
	{
		return instance().fore;
	}
	void GlobalEnvironment::SetFore(Color fore)
	{
		instance().fore = fore;
		instance().ApplyCurrent();
	}
	Color GlobalEnvironment::GetBack()
	{
		return instance().back;
	}
	void GlobalEnvironment::SetBack(Color back)
	{
		instance().back = back;
		instance().ApplyCurrent();
	}
}
