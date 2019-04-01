//5. 考虑下面的结构声明：
//struct customer {
//	char fullname[35];
//	double payment;
//};
//编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声明表示）
//。每次customer结构被删除时，其payment的值都将被加入到总数中，并报告总数。
//注意：应该可以直接使用Stack类而不作修改；只需修改typedef声明，
//使Item的类型为customer，而不是unsigned long 即可

#pragma once

struct customer {
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };				// constant specific to class
	Item items[MAX];				// holds stack items
	int top;						// index for top stack item
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack already is full, true otherwise
	bool push(const Item& item);	// add item to stack
	// pop() returns false if stack already is empty, true otherwise
	bool pop(Item& item);			// pop top into item
};
