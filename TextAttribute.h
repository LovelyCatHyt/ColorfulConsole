#pragma once
#include <stdio.h>
#include <windows.h>
#include <xstring>

namespace ColorfulConsole
{
	namespace TextAttribute
	{
		//4λ��ɫ
		class Color
		{
		public:
			bool blue;
			bool green;
			bool red;
			bool intense;
			Color(bool blue, bool green, bool red, bool intense)
			{

			}
		};
		//�ı����Դ���, ����ͨ��ֱ������bool��ֵ���޸�����
		class WarpedTextAttr
		{
		public:
			bool fore_Blue;
			bool fore_Green;
			bool fore_Red;
			bool fore_Intense;
			bool back_Blue;
			bool back_Green;
			bool back_Red;
			bool back_Intense;
			WarpedTextAttr(bool fore_Blue,
				bool fore_Green,
				bool fore_Red,
				bool fore_Intense,
				bool back_Blue = false,
				bool back_Green = false,
				bool back_Red = false,
				bool back_Intense = false);
			WarpedTextAttr(WORD rawAttr);
			WarpedTextAttr(Color fore, Color back = Color(false, false, false, false));
			operator WORD() const;
			void Apply() const;
			static const WarpedTextAttr LIGHTBLUE;
			static const WarpedTextAttr LIGHTGreen;
			static const WarpedTextAttr LIGHTRed;
			static const WarpedTextAttr WHITE;
		};
	}
}