//
// Created by 李汇川 on 2022/4/16.
//

// Point.cpp
#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {
  cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
}

Point::Point(const Point &p) {
  // 打印点的值
  cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
  this->x = p.x;
  this->y = p.y;
}

Point::~Point() {
  cout << "~Point():(" << x << ", " << y << ")" << endl;
}

void Point::setPoint(const Point &p) {
  this->x = p.x;
  this->y = p.y;
}

void Point::setPoint(double x, double y) {
  this->x = x;
  this->y = y;
}