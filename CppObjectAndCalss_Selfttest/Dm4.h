#pragma once
#include <iostream>
using namespace std;

namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	public:
		Sales(const double ar[] , int n);
		void setSales();
		void showSales();
	private:
		static const int QUARTERS = 4;
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
	};
}