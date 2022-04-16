#include "Line.h"

Line::Line(const Point & pA, const Point &pB) 
    : pointA(new Point(pA))
    , pointB(new Point(pB)) 
{
    cout << "Line(const Point & pA, const Point &pB)" << endl;
}

Line::Line(double aX, double aY, double bX, double bY) 
    : pointA(new Point(aX, aY))
    , pointB(new Point(bX, bY)) 
{
    cout << "Line(double aX, double aY, double bX, double bY)" << endl;
}

Line::~Line() 
{
    delete pointA;
    pointA = nullptr;
    delete pointB;
    pointB = nullptr;
    cout << "~Line()" << endl;
}

void Line::setPointA(const Point & pA) 
{
    pointA->setPoint(pA);
}

void Line::setPointB(const Point & pB) 
{
    pointB->setPoint(pB);
}

void Line::setPoint(const Point & pA, const Point & pB) 
{
    pointA->setPoint(pA);
    pointB->setPoint(pB);
}

Point *Line::getPointA() 
{ 
    return pointA; 
}

Point *Line::getPointB() 
{ 
    return pointB; 
}