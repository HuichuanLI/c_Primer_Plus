//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include <string>
using namespace std;

struct Cat {
  // 公有属性
  string name;
  Cat() {}
  ~Cat() {}

  void setName(string name) { this->name = name; }
  string getName() const { return name; };
};

int main() {
  // 堆上实例化
  Cat *cat = new Cat;

  // 正确访问
  cat->setName("kitty");

  // 正确访问，name 属于公有数据成员
  cat->name = "siri";

  cout << "My name is " << cat->name << " ." << endl;

  // 释放内存
  delete cat;
  cat = nullptr;

  return 0;
}