#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	m_top = 0;
}

void List::addData(const Item& it)
{
	if (!isFull())
	{
		m_payment[m_top++] = it;
	}
	else
	{
		cout << "Out of limit." << endl;
	}
}

bool List::isEmpty() const
{
	return m_top == 0;
}

bool List::isFull() const
{
	return m_top == MAX;
}

void List::visit(void(*pf)(Item&))
{
	for (int i = 0; i < m_top; i++)
	{
		cout << "\nCurrent Index:" << i << endl;
		(*pf)(m_payment[i]);
	}
}

void List::Insert(const Item& it, int index)
{
	if (!isFull() && (index < m_top))
	{
		for (int i = m_top; i > index; i--)
		{
			m_payment[i] = m_payment[i - 1];
		}
		m_payment[index] = it;
		m_top++;
	}
	else
	{
		cout << "\nInsert Fall ! index out of top." << endl;
	}
}

void List::delet(int index)
{
	if (!isEmpty() && index <= m_top - 1)
	{
		for (int i = index; i < m_top - 2; i++)
		{
			m_payment[i] = m_payment[i + 1];
		}
		--m_top;
	}
	else
	{
		cout << "\nInsert Fall ! index out of top." << endl;
	}
}

void showItem(Item& it)
{
	cout << "name :" << it.name << endl;
	cout << "price :" << it.price << endl;
	cout << "num :" << it.num << endl;
}

