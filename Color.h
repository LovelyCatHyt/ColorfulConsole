#pragma once
namespace ColorfulConsole
{
	//4λ��ɫ
	class Color
	{
	public:
		bool blue;
		bool green;
		bool red;
		bool intense;
		Color();
		Color(unsigned short colorCode);
		Color(bool blue, bool green, bool red, bool intense);
	};
}
