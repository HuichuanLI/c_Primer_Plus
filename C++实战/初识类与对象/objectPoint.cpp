//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    // 使用带参数默认构造函数，并使用初始化列表初始化 x，y
    Point(double x = 0, double y = 0) : x(x), y(y) {
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }

    // 拷贝构造函数
    Point(const Point &p) {
        cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
        this->x = p.x;
        this->y = p.y;
    }

    // 析构函数，由于没有申请内存，析构函数中不需要做什么
    ~Point() {
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }

    // x, y 绑定的成成员函数
    void setPoint(const Point &p) {
        this->x = p.x;
        this->y = p.y;
    }

    void setPoint(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void setX(double x) { this->x = x; }

    double getX() { return x; }

    void setY(double y) { this->y = y; }

    double getY() { return y; }

private:
    double x;
    double y;
};

class Line {
public:
    Line(const Point &pA, const Point &pB)
            : pointA(new Point(pA)), pointB(new Point(pB)) {
        cout << "Line(const Point & pA, const Point &pB)" << endl;
    }

    Line(double aX, double aY, double bX, double bY)
            : pointA(new Point(aX, aY)), pointB(new Point(bX, bY)) {
        cout << "Line(double aX, double aY, double bX, double bY)" << endl;
    }

    ~Line() {
        delete pointA;
        pointA = nullptr;
        delete pointB;
        pointB = nullptr;
        cout << "~Line()" << endl;
    }

    void setPointA(const Point &pA) {
        pointA->setPoint(pA);
    }

    void setPointB(const Point &pB) {
        pointB->setPoint(pB);
    }

    void setPoint(const Point &pA, const Point &pB) {
        pointA->setPoint(pA);
        pointB->setPoint(pB);
    }

    Point *getPointA() { return pointA; }

    Point *getPointB() { return pointB; }

private:
    Point *pointA;
    Point *pointB;
};

class Array {
public:
    Array(int Len = 0) : Len(Len) { cout << "Array()" << endl; }

    ~Array() { cout << "~Array()" << endl; }

    Array *setLen(int Len) {
        this->Len = Len;
        return this;
    }

    // Array &setLen(int Len) {
    //     this->Len = Len;
    //     return *this;
    // }
    int getLen() { return Len; }

    void print() { cout << "Len = " << Len << endl; }

private:
    int Len;
};

void stackInstantiation() {
//    在堆上操作对象数据会比在栈上操作对象数组复杂，但却比栈上操作更加的灵活，如果数据量会比较大建议在堆上操作。
//    使用对象数组时会调用每个对象的构造函数和析构函数。
//    new 与 delete，new [] 与 delete [] 一定要配套使用。
//    不要越界，不管是栈还是堆，访问数组时都不要越界。
//    对象数组指针变量本身就是一个指针。
//    堆上实例化的数组，要注意指针使用方法。
//    如果是做项目，要考虑使用在堆上实例化申请内存，栈空间比堆空间小很多。
//    当对象 A 中有常量时必须使用初始化列表。
//    当对象 A 有其他的对象 B 并且对象 B 没有默认构造参数时需要使用初始化列表。
//    除了以上两种情况，可以不使用初始化列表，但是推荐使用初始化列表。
//    对象数据成员和对象成员先于对象初始化。
//    在实例化对象时需要清楚初始化数据成员的顺序。


    /*
    Point point(5, 7);
    Point *p = &point;
    cout << "p:(" << p->getX() << ", " << p->getY() << ")" << endl;
    */
/*
	Line line(1, 2, 3, 4);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
	line.getPointA()->setPoint(7, 17);
	cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
	*/

    Array arr1(5);
    cout << "this addr: " << arr1.setLen(7) << endl;
    cout << "obj addr: " << &arr1 << endl;
    Array arr2(3);
    cout << "this addr: " << arr2.setLen(6) << endl;
    cout << "obj addr: " << &arr2 << endl;
}

int main() {
    /*
    Point *point1 = new Point(1, 2);
    Point *point2 = nullptr;
    point2 = new Point(3, 4);

    cout << "point1:(" << point1->getX() << ", " << point1->getY() << ")" << endl;
    cout << "point2:(" << (*point2).getX() << ", " << (*point2).getY() << ")" << endl;

    delete point1;
    point1 = nullptr;
    delete point2;
    point2 = nullptr;
    */

    stackInstantiation();

/*
	Line *p = new Line(1, 2, 3, 4);

	cout << "sizeof (p) = " << sizeof (p) << endl;
	cout << "sizeof (Line) = " << sizeof (Line) << endl;

	delete p;
	p = nullptr;
	*/

    return 0;
}
