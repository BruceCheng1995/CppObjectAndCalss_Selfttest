//7. Betelgeusean plorg����Щ������
//���ݣ�
//��plorg�����Ʋ�����19���ַ�
//��plorg������ָ����CI��������һ������
//������
//���µ�plorg�������ƣ���CIֵΪ50
//��plorg��CI�����޸�
//��plorg���Ա��������ƺ�CI
//���дһ��Plorg���������������ݳ�Ա�ͳ�Ա����ԭ�ͣ�����ʾplorg������д��Ա�����ĺ������塣
//Ȼ���дһ��С��������ʾPlorg����������ԡ�

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
