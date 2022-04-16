//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include <string>
using namespace std;

class Teacher {
 public: // 公有属性
  Teacher() {}
  ~Teacher() {}

  void setName(string name) { this->name = name; }
  string getName() const { return name; };
  void setAge(int age) { this->age = age; }
  int getAge() const { return age; }
 private: // 私有属性
  string name;
  int age;
};

int main() {
  // 堆上实例化
  Teacher *tea = new Teacher;

  // 正确访问
  tea->setName("Siri");
  tea->setAge(5);

  // 错误访问，编译报错
  //tea->name = "jake";
  //tea->age = 18;

  // 正确访问
  cout << "My name is " << tea->getName() << ", I'm " << tea->getAge() << " years old." << endl;

  // 释放内存
  delete tea;
  tea = nullptr;

  return 0;
}