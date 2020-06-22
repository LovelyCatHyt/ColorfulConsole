#pragma once
#include <ostream>
#include "Color.h"
using std::ostream;
using uint = unsigned int;

namespace ColorfulConsole
{
	//前景色代理, 可以借助GlobalEnvironment设置背景色而不需要获取先前景色
	class BackColorProxy : public Color
	{
	public:
		BackColorProxy();
		BackColorProxy(bool intense, bool red, bool green, bool blue);
		BackColorProxy(Color&& c);
		static const BackColorProxy LIGHTBLUE;
		static const BackColorProxy LIGHTGREEN;
		static const BackColorProxy LIGHTRED;
		static const BackColorProxy WHITE;
	};
	ostream& operator<<(ostream& out, BackColorProxy bColor);
}

