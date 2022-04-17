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
//使用友元成员函数时，需要注意想清楚包含关系，如示例代码
// 2，是 Circle 类中成员函数需要直接访问 Point 类成员，需要在 Point 类中声明 Circle 的成员函数，并且需要添加 Circle 的头文件。而 Circle 类的 Circle.h 文件中需要声明 Point 类，
// 在 Circle.cpp 中包含 Point 类头文件。