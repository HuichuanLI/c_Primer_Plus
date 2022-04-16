//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
using namespace std;

class Student {
 public:
  Student() : buffer(new char[16]) {}
  ~Student() {
    // 析构函数释放内存
    delete[] buffer;
    buffer = nullptr;
  }
 private:
  char *buffer;
};