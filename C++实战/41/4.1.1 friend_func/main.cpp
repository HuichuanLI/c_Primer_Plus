#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

/*
//  全局全局函数
void printPoint(const Point &p)
{
    cout << "Point(" << p.x << ", " << p.y << ")\n";
}
*/
int main()
{
    // 友元全局函数
    // Point p(3, 4);
    // printPoint(p);

    // 友元成员函数
    Point p(3, 4);
    Circle c;
    c.printPoint(p);

    return 0;
}