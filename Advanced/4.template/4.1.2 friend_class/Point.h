#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
using namespace std;

class Circle;
class Point
{
	friend Circle;
public:
	Point(double x, double y);
	~Point();
private:
	double x;
	double y;
	void printPoint();
};

#endif // POINT_H