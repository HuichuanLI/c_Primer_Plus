//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include <string>
using namespace std;

class Teacher {
 public:
  // 1. 无参构造函数
  Teacher() {}
  // 2. 有参构造函数
  Teacher(string name, int age) {
    this->name = name;
    this->age = age;
  }
  // 3. 拷贝构造函数
  Teacher(const Teacher &tea) {
    this->name = tea.name;
    this->age = tea.age;
  }
 private:
  string name;
  int age;
};

int main() {
  // 执行默认构造函数
  Teacher tea1;
  // 执行拷贝构造函数
  Teacher tea2 = tea1;
  Teacher tea3 = Teacher(tea1);

  return 0;
}