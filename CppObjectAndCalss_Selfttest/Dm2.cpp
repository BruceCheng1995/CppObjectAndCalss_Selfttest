#include "Dm2.h"
#include "iostream"
using namespace std;



Person::Person(const string& ln, const char* fn)
{
	lname = ln;
	for (int i = 0; i < LIMIT; i++)
	{
		fname[i] = fn[i];
	}
}

Person::~Person()
{
}

void Person::Show() const
{
	cout << fname << lname << endl;
}

void Person::FormalShow() const
{
	cout << lname << fname << endl;
}



int main()
{
	Person one;							// use default constructor
	Person two("Smythecraft");			// use #2 with one default argument
	Person three("Dimwiddy", "Sam");	// use #2, no defaults one.Show();
	cout << endl;
	one.FormalShow();
	two.FormalShow();
	three.FormalShow();
	one.Show();
	two.Show();
	three.Show();
	
	// etc. for two and three


	cout << "\nHallo..." << endl;
	return 0;
}
