#pragma once
#include <ostream>
#include "Color.h"
using std::ostream;
using uint = unsigned int;

namespace ColorfulConsole
{
	//前景色代理, 可以借助GlobalEnvironment设置颜色而不需要直接获取背景色
	class ForeColorProxy : public Color
	{
	public:
		ForeColorProxy();
		ForeColorProxy(bool intense, bool red, bool green, bool blue);
		ForeColorProxy(Color&& c);
		static const ForeColorProxy LIGHTBLUE;
		static const ForeColorProxy LIGHTGREEN;
		static const ForeColorProxy LIGHTRED;
		static const ForeColorProxy WHITE;
	};
	ostream& operator<<(ostream& out, ForeColorProxy fColor);
}

