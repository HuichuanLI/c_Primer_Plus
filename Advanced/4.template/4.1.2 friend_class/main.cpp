#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
  Circle c(3, 4);
  c.visitPoint();

  return 0;
}
//一旦声明为友元类，则可以访问类中所有成员，包括私有成员。
//需要明确声明友元类的关系，例如示例代码 3 中是将 Circle 类声明为 Point 的友元类，那么 Circle 可以访问 Point 类中所有成员，而 Point 类是不可以访问 Circle 类的成员。
//注意声明方式，如示例代码 3 中 Circle 声明为 Point 类的友元类，需要在 Point 类中使用 class Circle 声明一下。而在 Circle 中需要包含 Point 类的头文件。