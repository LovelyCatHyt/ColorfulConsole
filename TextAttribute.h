#pragma once
#include <ostream>
#include <windows.h>
#include <xstring>
#include "Color.h"

namespace ColorfulConsole
{
	namespace TextAttribute
	{
		//文本属性代理, 可以通过直接设置bool的值来修改属性
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
			explicit operator WORD() const;
			void Apply() const;
			static const WarpedTextAttr LIGHTBLUE;
			static const WarpedTextAttr LIGHTGREEN;
			static const WarpedTextAttr LIGHTRED;
			static const WarpedTextAttr WHITE;
		};
		std::ostream& operator<<(std::ostream& out, const WarpedTextAttr wat);
	}
}