#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Golf
{
public:
	Golf(const char* name, int hc);
	// �������û�����name��handicap������g�ĳ�Ա����Ϊ�����ֵ��
	// �������name�򷵻�1�����nameΪ���ַ����򷵻�0
	int setgolf(const char* name, int hc);
	// ����handicapΪ��ֵ�ĺ���
	void handicap(int hc);
	// ������ʾgolf�����ݵĺ���
	void showgolf()const;
private:
	static const int Len = 40;
	char m_fullname[Len];
	int m_handicap;
};