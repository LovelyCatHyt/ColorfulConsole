#pragma once
#include "TextAttribute.h"
#include "Color.h"

namespace ColorfulConsole 
{
	class GlobalEnvironment
	{
		static GlobalEnvironment& instance();
		Color fore,back;
		//应用当前颜色设置
		void ApplyCurrent();
		GlobalEnvironment(Color fr = Color(true, true, true, false), Color bg = Color(false, false, false, false));
	public:
		//初始化
		static void Init(Color fg = Color(true,true,true,false), Color bg = Color(false, false, false, false));
		//获取前景色
		static Color GetFore();
		//设置前景色
		static void SetFore(const Color& newFore);
		//获取背景色
		static Color GetBack();
		//设置背景色
		static void SetBack(const Color& newBack);
		//获取当前属性
		static TextAttribute::WarpedTextAttr GetAttr();
	};
}