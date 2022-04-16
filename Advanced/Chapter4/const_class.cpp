//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
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
  double getX() const { return x; }
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
  Point const pointB;
};

int main() {
  Line *line = new Line(1, 2, 3, 4);
  delete line;
  line = nullptr;
  return 0;
}
//const 允许指定一个语义约束，编译器会强制实施这个约束，允许程序员告诉编译器某值是保持不变的。如果在编程中确实有某个值保持不变，就应该明确使用 const。
//
//const 对象只能调用 const 成员函数，不能调用普通成员函数。
//const 指针和 const 引用对象都只能调用对象的常成员函数。
//普通成员函数与 const 成员函数可以互为重载。
//普通对象能调用 const 成员函数，也能调用普通成员函数。
//常对象只能调用 const 成员函数，不能调用普通成员函数。
//普通对象和 const 对象都可以访问公有数据成员。
//自定义类型参数建议使用引用方式传递，可加 const 防止修改参数值。
