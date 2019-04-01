#include "iostream"
#include "Dm6.h"
using namespace std;

int main6()
{
	Move mo(3.1, 6.5);
	Move to(2.5, 1.1);
	mo.add(to);
	mo.showmove();
	mo.reset(9.9, 9.9);
	mo.showmove();

	cout << "\nHallo..." << endl;
	return 0;
}