//3. ��ɵ�9�µı����ϰ1����Ҫ����ȷ��golf�������滻����Ĵ��롣
//�ô����ʲ����Ĺ��캯���滻setgolf(golf&, const char*, int)�����ṩ��ʼֵ��
//����setgolf()�Ľ����汾����Ҫ�ù��캯����ʵ���������磬setgolf()�Ĵ���Ӧ�û�����ݣ�
//�����ݴ��ݸ����캯��������һ����ʱ���󣬲����丳�����ö��󣬼�* this��

//ע�⵽showgolf()�����أ���������ʹ�����һ���汾��
//golf ann;
//setgolf(ann, "Ann Birdfree", 24);
//���������������ṩ�洢��ann�ṹ�е���Ϣ����������ʹ����������汾
//golf andy;
//setgolf(andy);
//������������ʾ�û����������͵ȼ����������Ǵ洢��andy�ṹ�У�����������ԣ����ǲ�һ�����룩���ڲ�ʹ�õ�һ���汾��
//
//�������ͷ�ļ�������һ�����ļ�����
//���е�һ���ļ���Ϊgolf.cpp�����ṩ�������ļ��е�ԭ��ƥ��ĺ������壻
//��һ���ļ�Ӧ����main()������ʾԭ�ͻ��������������ԡ�
//���磬����һ�����û������ѭ������ʹ����������������һ����golf�ṹ��ɵ����飬
//���鱻�������û����߶���ѡ�ֵ���������Ϊ���ַ���ʱ��ѭ����������main()����ֻʹ��ͷ�ļ�ԭ�ͻ��ĺ���������golf�ṹ


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
//// ����ʹ�ô��ݵ�name��hc������golf�ṹ�ĳ�Ա
//void setgolf(golf& g, const char* name, int hc);
//
//// interactive version
//// function solicits name and handicap from user
//// and sets the members of g to the values entered
//// return 1 if name is entered, 0 if name is empty string
//// �������û�����name��handicap������g�ĳ�Ա����Ϊ�����ֵ��
//// �������name�򷵻�1�����nameΪ���ַ����򷵻�0
//int setgolf(golf& g);
//
//// function resets handicap to new value
//// ����handicapΪ��ֵ�ĺ���
//void handicap(golf& g, int hc);
//
//// function displays contents of golf structure
//// ������ʾgolf�����ݵĺ���
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
