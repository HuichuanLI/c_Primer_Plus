//
// Created by 李汇川 on 2022/4/15.
//

#include<iostream>
#include<string>
using namespace std;
struct CandyBar {
  string brand;
  double weight;
  int calory;
};
int main() {
  CandyBar snack = {"Mocha Munch", 2.3, 350}; // 省略关键字 struct
  cout << "Here's the information of snack:\n";
  cout << "brand:" << snack.brand << endl;
  cout << "weight:" << snack.weight << endl;
  cout << "calory:" << snack.calory << endl;
  return 0;
}