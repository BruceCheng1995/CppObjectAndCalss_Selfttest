//1. Ϊ��ϰ��5���������ṩ�������壬����дһ��С��������ʾ���е�����
//��ϰ��5���£�
//����һ��������ʾ�����˻������ݳ�Ա���������������˺ţ�ʹ���ַ������ʹ���Ա����ִ�����²�����
//����һ�����󲢽����ʼ��
//��ʾ�����������˺źʹ��
//�������ָ���Ĵ��
//ȡ������ָ���Ŀ���

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
