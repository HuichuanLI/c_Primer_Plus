#include <iostream>
#include "Point.h"
using namespace std;


int main()
{
    /*
    Point p1(3, 4);
    cout << p1;

    Point p2;
    // 调用赋值运算符
    p2 = p1;

    cout << p2[0] << ", " << p2[1] << endl;

    try
    {
        cout << p2[2] << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

        Point p1(3, 4);
    cout << p1;
*/

/*
    Point p1(3, 4);
    cout << p1 << endl;
    // 前置 ++
    cout << "前置 ++: " << ++p1;

    // 后置 ++
    cout << "后置 ++: " << p1++;
    cout << "后置 ++: " << p1 << endl;
    

    // 前置 --
    cout << "前置 --: " << --p1;

    // 后置 --
    cout << "后置 --: " << p1--;
    cout << "后置 --: " << p1 << endl;
    

    // 负号
    cout << "负号: " << -p1;
*/

/*
    Point p1(3, 4);
    Point p2(4, 5);

    cout << "p1: " << p1;
    cout << "p2: " << p2 << endl;

    // Point p3;
    // p3 = p1 + p2;
    cout << "+:" << endl;
    Point p3 = p1 + p2;
    cout << "p3: " << p3 << endl;
    
    cout << "+=:" << endl;
    p3 += p1;
    cout << "p3: " << p3 << endl;
    
    cout << "-=:" << endl;
    p3 -= p1;
    cout << "p3: " << p3 << endl;
    
    cout << "-:" << endl;
    p2 = p3 - p1;
    cout << "p2: " << p2 << endl;
*/

    Point p1(3, 4);
    Point p2(4, 5);
    cout << "p1: " << p1;
    cout << "p2: " << p2 << endl;

    cout << "-:" << endl;
    Point p3 = p1 - p2;
    cout << "p3: " << p3 << endl;
    
    cout << "-=:" << endl;
    p3 -= p1;
    cout << "p3: " << p3 << endl;

    return 0;
}