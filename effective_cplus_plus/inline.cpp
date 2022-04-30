//
// Created by 李汇川 on 2022/4/30.
//

#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

template<typename T>
// 由于我们不知道模板中 T 的类型时说明，所以使用 常量引用传递的方式定义
inline T Max(const T &a, const T &b) {
  // 按值传递
  return a > b ? a : b;
}
int main() {
  int a = 5, b = 0;
  std::cout << "MAX(a, b) = " << MAX(a, b) << ", a = " << a << std::endl;
  // a 累加了两次
  std::cout << "MAX(++a, b) = " << MAX(++a, b) << ", a = " << a << std::endl;
  // a 累加了一次
  std::cout << "MAX(++a, b+10) = " << MAX(++a, b + 10) << ", a = " << a << std::endl;

  std::cout << std::endl;

  a = 5, b = 0;
  std::cout << "Max(a, b) = " << Max(a, b) << ", a = " << a << std::endl;
  std::cout << "Max(++a, b) = " << Max(++a, b) << ", a = " << a << std::endl;
  std::cout << "Max(++a, b + 10) = " << Max(++a, b + 10) << ", a = " << a << std::endl;

  return 0;
}