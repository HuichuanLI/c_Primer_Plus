//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
using namespace std;

class Circle {
 public:
  Circle() : Pi(3.14) {}
  // 错误：Circle() { Pi = 3.14; }
 private:
  const double Pi;
};