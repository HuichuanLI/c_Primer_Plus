//
// Created by 李汇川 on 2022/4/30.
//

#include <iostream>

class Rational {
 public:
  Rational(int a = 0) : d(a) {}
  ~Rational() {}

  // friend const Rational operator*(const Rational& lhs, const Rational& rhs);
  friend Rational operator*(const Rational &lhs, const Rational &rhs);

 private:
  int d;
};

Rational operator*(const Rational &lhs, const Rational &rhs) {
  return Rational(lhs.d * rhs.d);
}

int main() {
  Rational a, b, c;

  (a * b) = c;
  if (a * b = c)   // 本意想判断是否相等 a * b == c
    std::cout << "a * b = c" << std::endl;

  return 0;
}