//
// Created by 李汇川 on 2022/4/16.
//

// Line.cpp
#include "Line.h"

Line::Line(const Point &pA, const Point &pB) : pointA(pA), pointB(pB) {
  cout << "Line(const Point & pA, const Point &pB)" << endl;
}

Line::Line(double aX, double aY, double bX, double bY) : pointA(aX, aY), pointB(bX, bY) {
  cout << "Line(double aX, double aY, double bX, double bY)" << endl;
}

Line::~Line() {
  cout << "~Line()" << endl;
}

void Line::setLine(const Point &pA, const Point &pB) {
  pointA.setPoint(pA);
  pointB.setPoint(pB);
}

Point Line::getPointA() const {
  return pointA;
}

Point Line::getPointB() const {
  return pointB;
}