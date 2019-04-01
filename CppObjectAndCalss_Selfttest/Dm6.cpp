#include "Dm6.h"
#include <iostream>
using namespace std;

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "Current x :" << x << "Current y :" << y << endl;
}


Move Move::add(const Move& m) const
{
	/*Move tmp;
	tmp.x = x + m.x;
	tmp.y = y + m.y;
	return tmp;*/
	//ÕâÀïÅ£±ÆÁË
	Move tmp(x + m.x, y + m.y);
	return tmp;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
