#pragma once
#include <ostream>
#include "Color.h"
using std::ostream;
using uint = unsigned int;

namespace ColorfulConsole
{
	//ǰ��ɫ����, ���Խ���GlobalEnvironment������ɫ������Ҫֱ�ӻ�ȡ����ɫ
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

