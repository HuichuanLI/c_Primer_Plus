//
// Created by 李汇川 on 2022/4/19.
//

#include <iostream>
template<typename ... T>
auto sum(T ... t) {
  return (t + ...);
}
int main() {
  std::cout << sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;
}