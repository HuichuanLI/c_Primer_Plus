//
// Created by 李汇川 on 2022/4/16.
//
// Line.h
#ifndef LINE_H
#define LINE_H
#include "Point.h"

class Line {
 public:
  Line(const Point &pA, const Point &pB);
  Line(double aX, double aY, double bX, double bY);
  ~Line();

  void setLine(const Point &pA, const Point &pB);
  Point getPointA() const;
  Point getPointB() const;
 private:
  Point pointA;
  Point pointB;
};
#endif