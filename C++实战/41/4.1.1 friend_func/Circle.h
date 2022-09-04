#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
using namespace std;

// Point 声明
class Point;
class Circle
{
public:
	Circle();
	~Circle();
	void printPoint(const Point &p);
};

#endif // CIRCLE_H