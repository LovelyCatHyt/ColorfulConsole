#pragma once
#include "TextAttribute.h"
#include "Color.h"

namespace ColorfulConsole 
{
	class GlobalEnvironment
	{
		static GlobalEnvironment& instance();
		Color fore,back;
		//Ӧ�õ�ǰ��ɫ
		void ApplyCurrent();
		GlobalEnvironment(Color fr = Color(true, true, true, false), Color bg = Color(false, false, false, false));
	public:
		//��ʼ��
		static void Init(Color fg = Color(true,true,true,false), Color bg = Color(false, false, false, false));
		//��ȡǰ��ɫ
		static Color GetFore();
		//����ǰ��ɫ
		static void SetFore(Color newFore);
		//��ȡ����ɫ
		static Color GetBack();
		//���ñ���ɫ
		static void SetBack(Color newBack);
	};
}