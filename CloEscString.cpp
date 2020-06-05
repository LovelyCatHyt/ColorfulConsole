#include "CloEscString.h"
#include "ForeColorProxy.h"		//ForeColorProxy
#include <iostream>				//cout
#include "GlobalEnvironment.h"	//GloEnv

namespace ColorfulConsole
{
	CloEscString ces;
	CloEscString::CloEscString(string content) : content(content), tempOstream(NULL)
	{

	}
	void CloEscString::PrintUnEscStr(string origin)
	{
		const char* c_str = origin.c_str();
		int i = 0;
		while (c_str[i])
		{
			if (c_str[i] == '&')
			{
				i++;
				char temp = toupper(c_str[i]);
				if (temp <= 'F' && temp >= 'A')std::cout << ForeColorProxy(Color(temp - 'A' + 10));
				else if (temp <= '9' && temp >= '0')std::cout << ForeColorProxy(Color(temp - '0'));
				else if (temp == 'R') std::cout << GlobalEnvironment::GetFore();
				else if (temp == '&') std::cout << '&';
				else if (temp == 0) { std::cout << '&'; break; }
				else std::cout << '&' << c_str[i];
			}
			else
			{
				std::cout << c_str[i];
			}
			i++;
		}
	}
	const ForeColorProxy& CloEscString::operator()(const char& colorCode)
	{
		char code = toupper(colorCode);
		if (code <= 'F' && code >= 'A') return ForeColorProxy(Color(code - 'A' + 10));
		else if (code <= '9' && code >= '0') return ForeColorProxy(Color(code - '0'));
		else return GlobalEnvironment::GetFore();	
	}
	ostream& CloEscString::operator<<(const string& origin) const
	{
		PrintUnEscStr(origin);
		return *tempOstream;
	}
	ostream& CloEscString::operator<<(const char* origin) const
	{
		PrintUnEscStr(origin);
		return *tempOstream;
	}
	CloEscString& operator<<(ostream& o, CloEscString& cesStr)
	{
		cesStr.tempOstream = &o;
		return cesStr;
	}
}