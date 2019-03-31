#include "Dm4.h"
//4. 完成第九章编程练习4，但将Sales结构及相关的函数转换为一个类及其方法。
//用构造函数替换setSales（sales&, double[], int )函数
//用构造函数实现setSales(Sales&)方法的交互版本。将类保留在名称空间SALES中。

//4. 请基于下面的名称空间编一个由3个文件组成的程序
//
//namespace SALES 
//{
//	const int QUARTERS = 4;
//	struct Sales
//	{
//		double sales[QUARTERS];
//		double average;
//		double max;
//		double min;
//	};
//
//	// copies the lesser of 4 or n items from the array are
//	// to the sales member of s and computes and stores the
//	// average, maximum, and minimum values of the entered items; 
//	// remaining elements of sales, if any, set to 0
//	// 将含有最多4个元素的数组ar复制到s结构的sales成员中，计算并存储输入项的平均值，最大值和最小值，如果有剩余的sales元素，设置为0
//	void setSales(Sales& s, const double ar[], int n);
//	// gathers sales for 4 quarters interactively, stores them
//	// in the sales member of s and computes and stores the
//	// average, maximum, and minimum values
//	// 以交互方式收集4个季度的销售额，将它们存储在s的sales成员中并计算并存储平均值，最大值和最小值
//	void setSales(Sales& s);
//	// display all information in structure s
//	// 显示s结构中的所有信息
//	void showSales(const Sales& s);
//}

#include <iostream>
#include "string.h"
using namespace std;
using namespace SALES;

int main4()
{
	double ini[5] = { 23.4,34.5,23.1 ,234.3,3.4 };
	Sales sl(ini, 5);
	sl.showSales();
	sl.setSales();
	sl.showSales();

	cout << "\nHello..." << endl;
	return 0;
}

SALES::Sales::Sales(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		m_sales[i] = ar[i];
	}
	if (n < QUARTERS)
	{
		for (int i = n; i < QUARTERS; i++)
		{
			m_sales[i] = 0;
		}
	}
	double average = 0;
	double sum = 0;
	double min = m_sales[0];
	double max = m_sales[0];
	for (int i = 0; i < QUARTERS; i++)
	{
		if (max < m_sales[i])
		{
			max = m_sales[i];
		}
		if (min > m_sales[i])
		{
			min = m_sales[i];
		}
		sum += m_sales[i];
	}
	m_average = sum / QUARTERS;
	m_max = max;
	m_min = min;
}

void SALES::Sales::setSales()						//这里使用*this指针很重要，在*this指针中调用构造函数时，会使用构造函数中最大、最小、平均值计算方法
{
	double tmp[QUARTERS];
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << "Input No." << i + 1 << "\'s sales :";
		cin >> tmp[i];
	}

	*this = Sales(tmp, QUARTERS);
}

void SALES::Sales::showSales()
{
	cout << "四个季度的销售额为：\n";
	for (int i = 0; i < QUARTERS; i++)
		cout << "第" << i + 1 << "季度的销售额：\t" << m_sales[i] << endl;
	cout << endl;
	cout << "平均值为：\t" << m_average << endl;
	cout << "最大值为：\t" << m_max << endl;
	cout << "最小值为：\t" << m_min << endl;
}



