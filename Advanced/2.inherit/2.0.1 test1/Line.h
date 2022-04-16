#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class Line
{
public:
	Line(const Point & pA, const Point &pB);
	Line(double aX, double aY, double bX, double bY);
	~Line();
	void setPointA(const Point & pA);
	void setPointB(const Point & pB);
	void setPoint(const Point & pA, const Point & pB);
	Point *getPointA();
	Point *getPointB();
private:
	Point *pointA;
	Point *pointB;
};

#endif // LINE_H