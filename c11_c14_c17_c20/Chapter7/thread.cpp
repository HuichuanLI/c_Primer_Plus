//
// Created by 李汇川 on 2022/4/20.
//

#include <iostream>
#include <thread>

int main() {
  std::thread t([]() {
    std::cout << "hello world." << std::endl;
  });
  t.join();
  return 0;
}