#pragma once
//6. 下面是一个类声明：
//class Move
//{
//private:
//	double x;
//	double y;
//public:
//	Move(double a = 0, double b = 0);       // sets x, y to a, b
//	showmove() const;                       // shows current x,y values
//	Move add(const Move& m) const;
//	// this function adds x of m to x of invoking object to get new x,
//	// adds y of m to y of invoking object to get new y, creates a new
//	// move object initialized to new x, y values and returns it
//	//此函数将m的x加到调用对象的x以获取新的x，将m的y添加到调用对象的y中以获得新的y，
//	//创建一个新的对象，并将对象初始化为新的x，y值并返回它
//	reset(double a = 0, double b = 0);      // resets x,y to a, b
//};
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);			// sets x, y to a, b
	void showmove() const;							// shows current x,y values
	Move add(const Move& m) const;
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y, creates a new
	// move object initialized to new x, y values and returns it
	//此函数将m的x加到调用对象的x以获取新的x，将m的y添加到调用对象的y中以获得新的y，
	//创建一个新的对象，并将对象初始化为新的x，y值并返回它
	void reset(double a = 0, double b = 0);				// resets x,y to a, b
};
