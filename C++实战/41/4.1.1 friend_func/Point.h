#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
#include "Circle.h"		// 需要添加 Circle 头文件
using namespace std;

class Point
{
	friend void Circle::printPoint(const Point &p);
	// friend void printPoint(const Point &p);
public:
	Point(double x, double y);
	~Point();
private:
	double x;
	double y;
};

#endif // POINT_H