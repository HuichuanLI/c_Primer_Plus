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
  CandyBar snack[3] = {
      {"brand 1", 11, 111},
      {"brand 2", 22, 222},
      {"brand 3", 33, 333}
  };
  for (int i = 0; i < 3; ++i) {
    cout << "brand:" << snack[i].brand << endl;
    cout << "weight:" << snack[i].weight << endl;
    cout << "calory:" << snack[i].calory << endl;
  }

  return 0;
}