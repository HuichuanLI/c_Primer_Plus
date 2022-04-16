//
// Created by 李汇川 on 2022/4/16.
//

// HighStudent.cpp
#include "HighStudent.h"

HighStudent::HighStudent() {
  cout << "HighStudent()" << endl;
  name = "siri";
  age = 16;
  cout << "HighStudent: name: " << name << ", age: " << age << endl;
}

HighStudent::~HighStudent() {
  cout << "~HighStudent()" << endl;
}