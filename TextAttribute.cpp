#include "TextAttrSetter.h"
#include "TextAttribute.h"

namespace ColorfulConsole
{
	namespace TextAttribute
	{
		Color::Color(bool b, bool g, bool r, bool i) :blue(b), green(g), red(r), intense(i)
		{
		}
		const WarpedTextAttr WarpedTextAttr::LIGHTBLUE(0x9);
		const WarpedTextAttr WarpedTextAttr::LIGHTGreen(0xa);
		const WarpedTextAttr WarpedTextAttr::LIGHTRed(0xc);
		const WarpedTextAttr WarpedTextAttr::WHITE(0xf);
		WarpedTextAttr::operator WORD() const
		{
			return fore_Blue |
				fore_Green << 1 |
				fore_Red << 2 |
				fore_Intense << 3 |
				back_Blue << 4 |
				back_Green << 5 |
				back_Red << 6 |
				back_Intense;
		}
		WarpedTextAttr::WarpedTextAttr(bool fore_Blue,
			bool fore_Green,
			bool fore_Red,
			bool fore_Intense,
			bool back_Blue,
			bool back_Green,
			bool back_Red,
			bool back_Intense)
		{
			this->fore_Blue = fore_Blue;
			this->fore_Green = fore_Green;
			this->fore_Red = fore_Red;
			this->fore_Intense = fore_Intense;
			this->back_Blue = back_Blue;
			this->back_Green = back_Green;
			this->back_Red = back_Red;
			this->back_Intense = back_Intense;
		}
		WarpedTextAttr::WarpedTextAttr(WORD rawAttr) : WarpedTextAttr::WarpedTextAttr(
			rawAttr & 0x1, rawAttr & 0x2, rawAttr & 0x4, rawAttr & 0x8,
			rawAttr & 0x10, rawAttr & 0x20, rawAttr & 0x40, rawAttr & 0x80)
		{
		}
		WarpedTextAttr::WarpedTextAttr(Color fore, Color back = Color(false, false, false, false)) : WarpedTextAttr::WarpedTextAttr(
			fore.blue,fore.green,fore.red,fore.intense,
			back.blue,back.green,back.red,back.intense
		)
		{
		}
		void WarpedTextAttr::Apply() const
		{
			TextAttrSetter::SetAttr(*this);
		}

	}
}