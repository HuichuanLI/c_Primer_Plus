#include "Circle.h"

Circle::Circle(float r) : radius(r)
{
    cout << "Circle()" << endl;
}

Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

float Circle::calcArea()
{
    cout << "Circle::calcArea() = ";
    return Pi * radius * radius;
}

float Circle::calcPerimeter()
{
    cout << "Circle::calcPerimeter() = ";
    return 2 * Pi * radius;
}
