#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Golf
{
public:
	Golf(const char* name, int hc);
	// 函数从用户请求name和handicap，并将g的成员设置为输入的值，
	// 如果输入name则返回1，如果name为空字符串则返回0
	int setgolf(const char* name, int hc);
	// 重置handicap为新值的函数
	void handicap(int hc);
	// 用来显示golf的内容的函数
	void showgolf()const;
private:
	static const int Len = 40;
	char m_fullname[Len];
	int m_handicap;
};