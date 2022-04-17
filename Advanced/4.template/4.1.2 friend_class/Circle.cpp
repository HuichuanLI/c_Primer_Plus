#include "Circle.h"

Circle::Circle(double x, double y) : point(x, y)
{
    cout << "Circle()" << endl;
}

Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

void Circle::visitPoint()
{
    point.printPoint();
    cout << "Point(" << point.x << ", " << point.y << ")\n";
}