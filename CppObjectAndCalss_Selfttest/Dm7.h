//7. Betelgeusean plorg有这些特征。
//数据：
//·plorg的名称不超过19个字符
//·plorg的满意指数（CI），这是一个整数
//操作：
//·新的plorg将有名称，其CI值为50
//·plorg的CI可以修改
//·plorg可以报告其名称和CI
//请编写一个Plorg类声明（包括数据成员和成员函数原型）来表示plorg，并编写成员函数的函数定义。
//然后编写一个小程序，以演示Plorg类的所有特性。

#pragma once

class Plorg
{
public:
	Plorg(const char* name = "None",int ci = 50);
	~Plorg();
	void setCI(int ci);
	void shwData();
private:
	static const int NAMELIMIT = 19;
	char m_name[NAMELIMIT];
	int m_CI;
};
