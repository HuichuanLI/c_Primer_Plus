#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
using namespace std;
class Point 
{
public:
	// 使用带参数默认构造函数，并使用初始化列表初始化 x，y
	Point(double x = 0, double y = 0);
	// 拷贝构造函数
	Point(const Point & p);
	// 析构函数，由于没有申请内存，析构函数中不需要做什么
	~Point();
	// x, y 绑定的成成员函数
	void setPoint(const Point &p);
	void setPoint(double x, double y);
	void setX(double x);
	double getX();
	void setY(double y);
	double getY();
private:
	double x;
	double y;
};

#endif // POINT_H