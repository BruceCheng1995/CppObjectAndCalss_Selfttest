//3. 完成第9章的编程练习1，但要用正确的golf类声明替换那里的代码。
//用带合适参数的构造函数替换setgolf(golf&, const char*, int)，以提供初始值。
//保留setgolf()的交互版本，但要用构造函数来实现它（例如，setgolf()的代码应该获得数据，
//将数据传递给构造函数来创建一个临时对象，并将其赋给调用对象，即* this）

//注意到showgolf()被重载，可以这样使用其第一个版本：
//golf ann;
//setgolf(ann, "Ann Birdfree", 24);
//上述函数调用了提供存储在ann结构中的信息，可以这样使用其第三个版本
//golf andy;
//setgolf(andy);
//上述函数将提示用户输入姓名和等级，并将它们存储在andy结构中，这个函数可以（但是不一定必须）在内部使用第一个版本。
//
//根据这个头文件，创建一个多文件程序。
//其中的一个文件名为golf.cpp，它提供了与有文件中的原型匹配的函数定义；
//另一个文件应包含main()，并演示原型化函数的所有特性。
//例如，包含一个让用户输入的循环，并使用输入的数据来填充一个由golf结构组成的数组，
//数组被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。main()函数只使用头文件原型化的函数来访问golf结构


////golf.h -- for pr9-1.cpp
//
//const int len = 40;
//struct golf
//{
//	char fullname[len];
//	int handicap;
//};
//
//// non-interactive version:
//// function sets golf structure to provided name, handicap
//// using values passed as arguement to the function
//// 函数使用传递的name、hc，设置golf结构的成员
//void setgolf(golf& g, const char* name, int hc);
//
//// interactive version
//// function solicits name and handicap from user
//// and sets the members of g to the values entered
//// return 1 if name is entered, 0 if name is empty string
//// 函数从用户请求name和handicap，并将g的成员设置为输入的值，
//// 如果输入name则返回1，如果name为空字符串则返回0
//int setgolf(golf& g);
//
//// function resets handicap to new value
//// 重置handicap为新值的函数
//void handicap(golf& g, int hc);
//
//// function displays contents of golf structure
//// 用来显示golf的内容的函数
//void showgolf(const golf& g);




#include "iostream"
#include "Dm3.h"
using namespace std;

int main()
{
	
	
	cout<<"\nHallo..."<<endl;
	return 0;
}

Golf::Golf(const char* name, int hc)
{
	if (strlen(name)<Len)
	{
		strcpy(m_fullname, name);
	}
	else
	{
		cout << "The length of name out of limit ." << endl;
	}
}

int Golf::setgolf(const char* name, int hc)
{
	if (strlen(name) < Len)
	{
		strcpy(m_fullname, name);
		return 0;
	}
	else
	{
		cout << "The length of name out of limit ." << endl;
		return -1;
	}
}

void Golf::handicap(int hc)
{
	m_handicap = hc;
}

void Golf::showgolf()const
{
	cout << "m_fullname" << m_fullname << "m_handicap" << m_handicap << endl;
}
