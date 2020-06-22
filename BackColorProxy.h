#pragma once
#include <ostream>
#include "Color.h"
using std::ostream;
using uint = unsigned int;

namespace ColorfulConsole
{
	//ǰ��ɫ����, ���Խ���GlobalEnvironment���ñ���ɫ������Ҫ��ȡ��ǰ��ɫ
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

