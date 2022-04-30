//
// Created by 李汇川 on 2022/4/30.
//

#ifndef __EXAM_H__
#define __EXAM_H__

#include <iostream>
#include <vector>

const std::vector<std::string> Names = {"Jack", "Merry"};

template<typename T>
inline T Min(const T &a, const T &b) {
  return a < b ? a : b;
}

class Teacher {
 public:
  enum { Row = 2, Column = 3 };

  Teacher();
  ~Teacher();
  void VisitScores();
  double LowGrade(int column);

  static const int SchoolCode;
 private:
  double scores[Row][Column] = {{99.9, 98.9, 97.9}, {99.5, 98.5, 97.5}};
};

#endif // __EXAM_H__