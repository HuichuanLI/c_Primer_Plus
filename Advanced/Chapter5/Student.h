//
// Created by 李汇川 on 2022/4/16.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Student : protected Person {
 public:
  Student();
  ~Student();
};

#endif // STUDENT_H