//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
#include "Student.h"
using namespace std;

// main.cpp
#include <iostream>
#include "HighStudent.h"
using namespace std;

int main() {
  // Student stu1;
  // err: 无法访问保护数据成员
  // stu1.name = "siri";
  // stu1.age = 16;
  // err: 无法访问私有数据成员
  // stu1.height = 185;
  HighStudent stu2;
  // err: 无法访问保护数据成员
  // stu2.name = "siri";
  // stu2.age = 16;
  // err: 无法访问私有数据成员
  // stu2.height = 185;

  return 0;
}