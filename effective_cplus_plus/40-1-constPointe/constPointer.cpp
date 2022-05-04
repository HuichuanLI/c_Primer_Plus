//
// Created by 李汇川 on 2022/4/30.
//

// constPointer.cpp
#include "constPointer.h"

int main()
{
  char *p1 = greeting;                // 非常量指针, 非常量数据
  const char *p2 = greeting;          // 非常量指针, 常量数据
  char const *p3 = greeting;          // 非常量指针, 常量数据
  char * const p4 = greeting;         // 常量指针, 非常量数据
  const char * const p5 = greeting;   // 常量指针, 非常量数据

  std::cout << "p1 = " << p1 << std::endl;
  std::cout << "p2 = " << p2 << std::endl;
  std::cout << "p3 = " << p3 << std::endl;
  std::cout << "p4 = " << p4 << std::endl;
  std::cout << "p5 = " << p5 << std::endl;

  return 0;
}