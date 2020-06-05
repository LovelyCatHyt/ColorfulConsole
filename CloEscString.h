#pragma once
#include "ForeColorProxy.h"
#include <string>				//string
#include <iostream>				//ostream

using std::ostream;
using std::string;

namespace ColorfulConsole
{
	//using CES = CloEscString;		缩写
	/*
	颜色转义字符串
	字符串中用&开头的两个字符视为转义符
	"&1"~"&f"都视为有效的前景色转义
	"&&"会被转换为"&"
	"&r"代表恢复当前默认前景色
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

