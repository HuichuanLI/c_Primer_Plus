//
// Created by 李汇川 on 2022/4/19.
//

#include <iostream>

template<typename T>
auto print_type_info(const T &t) {
  if constexpr (std::is_integral<T>::value) {
    return t + 1;
  } else {
    return t + 0.001;
  }
}
int main() {
  std::cout << print_type_info(5) << std::endl;
  std::cout << print_type_info(3.14) << std::endl;
}