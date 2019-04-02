//
//8. ���Խ����б���������������
//���ɴ洢0����ĳ�����͵��б�
//���ɴ������б�
//�������б������������
//�������б������������
//�������б������������
//���ɷ����б��е�ÿһ�������������ִ��ĳ�ֲ���
//���Կ���������б�ȷʵ�ܼ򵥣����磬������������ɾ��������
//�����һ��List������ʾ���ֳ������͡���Ӧ�ṩͷ�ļ�list.h��ʵ���ļ�list.cpp��
//ǰ�߰����ඨ�壬���߰����෽����ʵ�֡�����Ӧ�ô���һ����̵ĳ�����ʹ�������
//���б�Ĺ淶�ܼ򵥣������Ҫּ�ڼ���������ϰ������ѡ��ʹ�������������ʵ�ָ��б�
//�����нӿڲ�Ӧ������������ѡ��Ҳ����˵�����нӿڲ�Ӧ�������������ڵ�ָ��ȡ�
//Ӧʹ��ͨ�ø�������ﴴ���б����б������������Ȳ��������ڷ����������Լ�ִ�в�����
//ͨ��Ӧʹ�ý�����ָ����Ϊ�����ĺ���������
//void visit(void (*pf)(Item&));
//���С�pfָ��һ����Item������Ϊ�����ĺ����������ǳ�Ա��������Item���б�������������͡�visit()
//�������ú��������б��е�ÿ�������

#pragma once
#ifndef LIST_H_
#define  LIST_H_

typedef struct
{
	const char* name;
	double price;
	double num;
}Item;

void showItem(Item& it);

class List 
{
public:
	List();
	//~List();
	void addData(const Item& it);
	bool isEmpty()const;
	bool isFull()const;
	void visit(void (*pf)(Item&));
	void Insert(const Item&,int index);
	void delet(int index);
private:
	static const int MAX = 20;
	Item m_payment[MAX];
	int m_top;
};

#endif