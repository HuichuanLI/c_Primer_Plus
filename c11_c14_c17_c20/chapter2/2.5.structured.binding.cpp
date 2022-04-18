//
// Created by 李汇川 on 2022/4/18.
//

#include <iostream>
#include <tuple>
#include <string>

std::tuple<int, double, std::string> f() {
  return std::make_tuple(1, 2.3, "456");
}

int main() {
  auto[x, y, z] = f();
  std::cout << x << ", " << y << ", " << z << std::endl;
  return 0;
}