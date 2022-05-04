//
// Created by 李汇川 on 2022/5/4.
//

#include <stdio.h>

#include <stdlib.h>

#include <iostream>
class Staff {
 public:
  std::string name;
  int age;

  virtual ~Staff() {

  }
};

class Coder : public Staff {
 public:
  std::string language;

  virtual ~Coder() {

  }
};

int main(int argc, char **argv) {
  Staff *s = new Coder();

  delete s;

  return 0;
}