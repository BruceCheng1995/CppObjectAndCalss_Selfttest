//1. 为复习题5描述的类提供方法定义，并编写一个小程序来演示所有的特性
//复习题5如下：
//定义一个类来表示银行账户。数据成员包括储户姓名、账号（使用字符串）和存款。成员函数执行如下操作：
//创建一个对象并将其初始化
//显示储户姓名、账号和存款
//存入参数指定的存款
//取出参数指定的款项

#include "iostream"
using namespace std;

class Bank
{
public:
	Bank(const string name, const string account, double money);
	~Bank();
	void save(double money);
	void expend(double money);
	void show();
private:
	string m_name;
	string m_Account;
	double m_Money;
};

int main1()
{
	Bank cz("chengzhi", "20190331", 409.54);
	cz.save(456);
	cz.show();
	cz.expend(199);
	cz.show();
	cout << "\nHallo..." << endl;
	return 0;
}

Bank::Bank(const string name, const string account, double money)
{
	m_name = name;
	m_Account = account;
	m_Money = money;
}

Bank::~Bank()
{
}

void Bank::save(double money)
{
	m_Money += money;
}

void Bank::expend(double money)
{
	if (money < m_Money)
	{
		m_Money -= money;
	}
	else
	{
		cout << "Go to the civil servant" << endl;
	}
}

void Bank::show()
{
	cout << "name :" << m_name << endl;
	cout << "account :" << m_Account << endl;
	cout << "money :" << m_Money << endl;
}
