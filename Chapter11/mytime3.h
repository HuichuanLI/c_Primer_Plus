//
// Created by 李汇川 on 2022/4/16.
//

#ifndef POINTER_CHAPTER11_MYTIME3_H_
#define POINTER_CHAPTER11_MYTIME3_H_
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time {
 private:
  int hours;
  int minutes;
 public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  Time operator+(const Time &t) const;
  Time operator-(const Time &t) const;
  Time operator*(double n) const;
  friend Time operator*(double m, const Time &t) { return t * m; }   // inline definition
  friend std::ostream &operator<<(std::ostream &os, const Time &t);

};

#endif //POINTER_CHAPTER11_MYTIME3_H_
