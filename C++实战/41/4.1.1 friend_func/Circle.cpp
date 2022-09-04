#include "Circle.h"
#include "Point.h"  // 需要添加 Point 头文件

Circle::Circle()
{
    cout << "Circle()" << endl;
}

Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

void Circle::printPoint(const Point &p)
{
    cout << "Point(" << p.x << ", " << p.y << ")\n";
}