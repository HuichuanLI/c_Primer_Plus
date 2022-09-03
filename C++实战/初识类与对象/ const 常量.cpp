//
// Created by lhc456 on 2022/9/3.
//
//const 允许指定一个语义约束，编译器会强制实施这个约束，允许程序员告诉编译器某值是保持不变的。如果在编程中确实有某个值保持不变，就应该明确使用 const。
//
//const 对象只能调用 const 成员函数，不能调用普通成员函数。
//const 指针和 const 引用对象都只能调用对象的常成员函数。
//普通成员函数与 const 成员函数可以互为重载。
//普通对象能调用 const 成员函数，也能调用普通成员函数。
//常对象只能调用 const 成员函数，不能调用普通成员函数。
//普通对象和 const 对象都可以访问公有数据成员。
//自定义类型参数建议使用引用方式传递，可加 const 防止修改参数值。
#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    // 使用带参数默认构造函数，并使用初始化列表初始化 x，y
    Point(double x = 0, double y = 0) : x(x), y(y) {
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }

    // 析构函数，由于没有申请内存，析构函数中不需要做什么
    ~Point() {
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }

    // x, y 绑定的成成员函数
    void setX(double x) { this->x = x; }

    double getX() const {
        cout << "getX() const" << endl;
        return x;
    }

    void setY(double y) { this->y = y; }

    double getY() const { return y; }

private:
    double x;
    double y;
};

class Line {
public:
    Line(double aX, double aY, double bX, double bY)
            : pointA(aX, aY), pointB(bX, bY) {
        // error
        // pointA.setX(aX);
        // pointA.setY(aY);
        // pointB.setX(bX);
        // pointB.setY(bY);
        cout << "Line(double aX, double aY, double bX, double bY)" << endl;
    }

    ~Line() {
        cout << "~Line()" << endl;
    }

    Point getPointA() { return pointA; }

    Point getPointB() { return pointB; }

private:
    const Point pointA;
    const Point pointB;
};

void doSomething(const Point &p) {
    cout << p.getX() << ", " << p.getY() << endl;
}

int main() {
    /*
    const int a = 5;
    int b = 10;
    const int * const p = &a;
    // *p = 11; // error
    // p = &a; // error
    cout << "*p = " << *p << endl;
    */
    // const Point point1(1, 2);
/*
	Point *point1 = new Point(1, 2);
	const Point *point2 = new Point(3, 4);
	point1->getX();
	point2->getX();
	delete point1;
	point1 = nullptr;
	delete point2;
	point2 = nullptr;
	*/
/*
	Point point(1, 2);
	// 常引用
	const Point &point2 = point;
	// 常指针
	const Point *p = &point;
	point2.getX();
	p->getX();
	// error：常引用与常指针只能访问常成员函数
	// point2.setX(4);
	// p->setY(9);
	*/

    Point point(1, 2);
    doSomething(point);
    return 0;
}
