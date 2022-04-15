//
// Created by 李汇川 on 2022/4/16.
//

#include<iostream>
#include<string>
using namespace std;
struct CandyBar {
  string name;
  double weight;
  int hot;
};
void set(CandyBar &cb, const char *ps, const double w, const int h);
void show(const CandyBar &cb);
int main() {
  using namespace std;
  CandyBar candy;
  char p[] = "Millennium Munch";
  double x = 2.85;
  int y = 350;
  set(candy, p, x, y);
  show(candy);
  return 0;
}
void set(CandyBar &cb, const char *ps, const double w, const int h) {
  cb.name = ps;
  cb.weight = w;
  cb.hot = h;
}
void show(const CandyBar &cb) {
  cout << "Name:" << cb.name << endl
       << "Weight:" << cb.weight << endl
       << "Hot:" << cb.hot << endl;
}