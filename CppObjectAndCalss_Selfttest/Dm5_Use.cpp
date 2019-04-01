// stacker.cpp
#include <iostream>
#include <cctype>  // or ctype.h
#include "Dm5.h"
int main5()
{
	using namespace std;
	Stack st; // create an empty stack
	char ch;
	customer po;
	double sum = 0;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': cout << "Enter a PO to add: \n";
			cout << "Enter the fullname of PO: ";
			cin.getline(po.fullname, 35);
			cout << "Enter the payment of PO: ";
			cin >> po.payment;
			cin.get();
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stack already empty\n";
				  else {
			st.pop(po);
			cout << "PO #" << po.fullname << " popped\n";
			sum += po.payment;
			cout << "Now, Sum is " << sum << endl;
		}
				  break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}