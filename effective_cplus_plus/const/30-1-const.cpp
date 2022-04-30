//
// Created by 李汇川 on 2022/4/30.
//

// const.cpp
#include "const.h"

int main() {
  std::cout << "ASPECT_RATIO = " << ASPECT_RATIO << std::endl;
  std::cout << "AspectRatio = " << ASPECT_RATIO << std::endl;

  int a[ArrayCount] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < ArrayCount; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;

  return 0;
}