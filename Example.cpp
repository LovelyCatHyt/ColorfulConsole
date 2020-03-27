#include <iostream>
#include "TextAttribute.h"
#include "GlobalEnvironment.h"
#include "ForeColorProxy.h"
using namespace ColorfulConsole;
using namespace ColorfulConsole::TextAttribute;
using WTA = WarpedTextAttr;

int main()
{
	//使用常量调用
	WTA::LIGHTBLUE.Apply();
	std::cout << "Is it blue?" << std::endl;
	WTA::LIGHTGREEN.Apply();
	std::cout << "Is it green?" << std::endl;
	WTA::LIGHTRED.Apply();
	std::cout << "Is it red?" << std::endl;
	WTA::WHITE.Apply();
	std::cout << "Is it white?" << std::endl;
	//使用ostream输出
	std::cout << WTA::LIGHTBLUE << "来" << WTA::LIGHTGREEN << "整" << WTA::LIGHTRED << "活" << WTA::WHITE << std::endl;
	//用GlobalEnvironment, 使得背景色可以作为动态的缺省值存在
	GlobalEnvironment::Init(Color(true, true, true, false), Color(true, false, false, true));
	std::cout<<ForeColorProxy::LIGHTRED<<"只设置红色\n";
	std::cout << ForeColorProxy::LIGHTGREEN << "只设置绿色\n";
	std::cout << ForeColorProxy::WHITE << "只设置白色\n";
	return 0;
}
