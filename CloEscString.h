#pragma once
#include "ForeColorProxy.h"
#include <string>				//string
#include <iostream>				//ostream

using std::ostream;
using std::string;

namespace ColorfulConsole
{
	//using CES = CloEscString;		��д
	/*
	��ɫת���ַ���
	�ַ�������&��ͷ�������ַ���Ϊת���
	"&1"~"&f"����Ϊ��Ч��ǰ��ɫת��
	"&&"�ᱻת��Ϊ"&"
	"&r"����ָ���ǰĬ��ǰ��ɫ
	*/
	class CloEscString
	{
		string content;
		ostream* tempOstream;
	public:
		CloEscString(string content = "");
		static void PrintUnEscStr(string origin);
		const ForeColorProxy& operator()(const char& colorCode);
		ostream& operator<<(const string& origin) const;
		ostream& operator<<(const char *origin) const;
		friend CloEscString& operator<<(ostream& o, CloEscString& cesStr);
	};
	extern CloEscString ces;
}

