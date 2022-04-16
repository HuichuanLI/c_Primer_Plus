//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include <string>
using namespace std;

// class 类关键字、Student 类名
class Student {
// 访问限制符 - 公有属性
 public:
  Student() {}    // 构造函数
  ~Student() {}    // 析构函数

  // 成员函数
  void setName(string name) { this->name = name; }
  string getName() const { return name; };
  void setAge(int age) { this->age = age; }
  int getAge() const { return age; }
// 访问限制符 - 私有属性
 private:
  // 数据成员
  string name;
  int age;
};

int main() {
  // 栈上实例化
  Student stu1;
  stu1.setName("jake");
  stu1.setAge(15);
  cout << "My name is " << stu1.getName() << ", I'm " << stu1.getAge() << " years old." << endl;

  // 堆上实例化
  Student *stu2 = new Student;
  // 访问
  stu2->setName("Siri");
  stu2->setAge(5);
  cout << "My name is " << stu2->getName() << ", I'm " << stu2->getAge() << " years old." << endl;
  // 释放内存
  delete stu2;
  stu2 = nullptr;

  return 0;
}