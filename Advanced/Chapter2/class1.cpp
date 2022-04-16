//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include <string>
using namespace std;

// 将学生的属性进行封装
class Student {
 public: // 公有属性
  Student() {}
  ~Student() {}

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
  Student *stu = new Student;

  // 正确访问
  stu->setName("Siri");
  stu->setAge(5);

  // 错误访问，编译报错
  // stu->name = "jake";
  // stu->age = 18;

  // 正确访问
  cout << "My name is " << stu->getName() << ", I'm " << stu->getAge() << " years old." << endl;

  // 释放内存
  delete stu;
  stu = nullptr;

  return 0;
}