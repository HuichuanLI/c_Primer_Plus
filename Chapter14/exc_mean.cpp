//
// Created by 李汇川 on 2022/4/16.
//

// 15-2.cpp
#include"exc_mean.h"
double hmean(double a, double b);
double gmean(double a, double b);
int main() {
  double x, y, z;
  cout << "Enter two numbers:";
  while (cin >> x >> y) {
    try {
      z = hmean(x, y);
      cout << "Harmonic mean of " << x << " and " << y
           << " is " << z << endl;
      cout << "Geomettric mean of" << x << "and" << y
           << "is" << gmean(x, y) << endl;
      cout << "Enter next set of numbers<q to quit>:";
    }
    catch (bad_hmean &bg) {
      cout << bg.what();
      cout << "Error message:\n" << bg.mesg() << endl;
      cout << "Try again.\n";
      continue;
    }
    catch (bad_gmean &hg) {
      cout << hg.what();
      cout << "Error message:\n" << hg.mesg() << endl;
      cout << "Sorry,you don't get to play and more.\n";
      break;
    }
  }
  cout << "Bye!\n";
  return 0;
}
double hmean(double a, double b) {
  if (a == -b)
    throw bad_hmean();
  return 2.0 * a * b / (a + b);
}
double gmean(double a, double b) {
  if (a < 0 || b < 0)
    throw bad_gmean();
  return sqrt(a * b);
}