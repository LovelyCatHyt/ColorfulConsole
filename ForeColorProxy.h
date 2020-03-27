#pragma once
#include <ostream>
#include "Color.h"
using std::ostream;
namespace ColorfulConsole
{
	//ǰ��ɫ����, ���Խ���GlobalEnvironment������ɫ������Ҫֱ�ӻ�ȡ����ɫ
	class ForeColorProxy : public Color
	{
	public:
		ForeColorProxy();
		ForeColorProxy(Color&& c);
		static const ForeColorProxy LIGHTBLUE;
		static const ForeColorProxy LIGHTGREEN;
		static const ForeColorProxy LIGHTRED;
		static const ForeColorProxy WHITE;
	};
	ostream& operator<<(ostream& out, ForeColorProxy fColor);
}

