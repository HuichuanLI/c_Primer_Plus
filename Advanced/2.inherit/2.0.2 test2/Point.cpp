#include "Point.h"

Point::Point(double x, double y) 
    : x(x)
    , y(y) 
{
    cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
}

Point::Point(const Point & p) 
{
    cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
    this->x = p.x; 
    this->y = p.y; 
}

Point::~Point() 
{
    cout << "~Point():(" << x << ", " << y << ")" << endl;
}

void Point::setPoint(const Point &p) 
{
    this->x = p.x; 
    this->y = p.y; 
}

void Point::setPoint(double x, double y) 
{
    this->x = x; 
    this->y = y; 
}

void Point::setX(double x) 
{ 
    this->x = x; 
}

double Point::getX() 
{ 
    return x; 
}

void Point::setY(double y) 
{ 
    this->y = y; 
}

double Point::getY() 
{ 
    return y; 
}