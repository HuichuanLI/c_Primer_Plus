//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>

using namespace std;

class Line {
public:
    // 构造函数
    Line(const Point &pA, const Point &pB)
            : pointA(new Point(pA)), pointB(new Point(pB)) {
        cout << "Line(const Point & pA, const Point &pB)" << endl;
    }

    Line(double aX, double aY, double bX, double bY)
            : pointA(new Point(aX, aY)), pointB(new Point(bX, bY)) {
        cout << "Line(double aX, double aY, double bX, double bY)" << endl;
    }

    // 析构函数
    ~Line() {
        delete pointA;
        pointA = nullptr;
        delete pointB;
        pointB = nullptr;
        cout << "~Line()" << endl;
    }

    // 数据成员操作函数
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

void stackInstantiation() {
    Line line(1, 2, 3, 4);
}

int main() {
    stackInstantiation();
    return 0;
}