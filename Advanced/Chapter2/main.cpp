//
// Created by 李汇川 on 2022/4/16.
//

// main.cpp
#include "Line.h"

int main() {
  Line *p = new Line(1, 2, 3, 4);

  cout << "sizeof (p) = " << sizeof(p) << endl;
  cout << "sizeof (Line) = " << sizeof(Line) << endl;

  delete p;
  p = nullptr;
  return 0;
}