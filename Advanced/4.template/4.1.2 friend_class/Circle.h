#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
#include "Point.h"  // 需要添加 Point 头文件
using namespace std;

class Circle
{
public:
	Circle(double x, double y);
	~Circle();
	void visitPoint();
private:
	Point point;
};

#endif // CIRCLE_H