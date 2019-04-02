#include "iostream"
#include "List.h"
using namespace std;

int main()
{
	List ls;
	Item it_cake = { "cake",24.5,3 };
	Item it_Ins = { "Insert",32.5,1 };
	cout << "Empty? :" << ls.isEmpty() << endl;
	cout << "Full? :" << ls.isFull() << endl;
	ls.addData(it_cake);
	ls.addData(it_cake);
	cout << "Empty? :" << ls.isEmpty() << endl;
	cout << "Full? :" << ls.isFull() << endl;
	ls.addData(it_cake);
	ls.addData(it_cake);
	ls.addData(it_cake);
	ls.addData(it_cake);
	ls.addData(it_cake);
	cout << "Empty? ?" << ls.isEmpty() << endl;
	cout << "Full? ?" << ls.isFull() << endl;
	//初始化函数指针pff，并赋值指向shoeItem的地址
	void(*pff)(Item&) = NULL;
	pff = &showItem;
	//遍历列表，使用函数
	//ls.visit(pff);

	ls.Insert(it_Ins, 4);
	ls.Insert(it_Ins, 9);
	ls.delet(4);

	ls.visit(pff);

	cout << "\nHallo..." << endl;
	return 0;
}