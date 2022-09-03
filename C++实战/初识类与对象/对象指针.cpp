//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>
using namespace std;

class Point
{
public:
    // 使用带参数默认构造函数，并使用初始化列表初始化 x，y
    Point(double x = 0, double y = 0) : x(x), y(y) {
        //cout << "Point(double x = 0, double y = 0)" << endl;
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }
    // 拷贝构造函数
    Point(const Point & p) {
        //cout << "Point(const Point &p)" << endl;
        // 打印点的值
        cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
        this->x = p.x;
        this->y = p.y;
    }
    // 析构函数，由于没有申请内存，析构函数中不需要做什么
    ~Point() {
        //cout << "~Point()" << endl;
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }
    // x, y 绑定的成员函数
    void setPoint(const Point &p) {
        this->x = p.x;
        this->y = p.y;
    }
    void setPoint(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    double getX() { return x; }
    double getY() { return y; }
private:
    double x;
    double y;
};

int main()
{
    Point *point1 = new Point(1, 2);
    Point *point2 = nullptr;
    point2 = new Point(3, 4);

    cout << "point1:(" << point1->getX() << ", " << point1->getY() << ")" << endl;
    cout << "point2:(" << (*point2).getX() << ", " << (*point2).getY() << ")" << endl;

    delete point1;
    point1 = nullptr;
    delete point2;
    point2 = nullptr;
    return 0;
}