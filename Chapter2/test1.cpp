//
// Created by 李汇川 on 2022/4/15.
//

#include<iostream>
const int inch_per_feet = 12;//const 常量-- 1 feet = 12 inches --1 英尺=12 英寸
int main() {
  using namespace std;
  cout << "please enter your height in inches:___\b\b\b";// \b 表示为退格字符
  int ht_inch;
  cin >> ht_inch;
  int ht_feet = ht_inch / inch_per_feet;//取商
  int rm_inch = ht_inch % inch_per_feet;//取余
  cout << "your height is " << ht_feet << " feet,and " << rm_inch << " inches\n";
  return 0;
}