//
// Created by 李汇川 on 2022/4/16.
//

#ifndef POINTER_ADVANCED_CHAPTER5_PERSON_H_
#define POINTER_ADVANCED_CHAPTER5_PERSON_H_

#include <iostream>
#include <string>
using namespace std;

// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
 public:
  Person();
  ~Person();
 public:     // 基类 public 属性数据成员
  string name;
 protected:  // 基类 protected 属性数据成员
  int age;
 private:    // 基类 private 属性数据成员
  float height;
};
#endif //POINTER_ADVANCED_CHAPTER5_PERSON_H_
