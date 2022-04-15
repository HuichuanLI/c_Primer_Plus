//
// Created by 李汇川 on 2022/4/15.
//

#include<iostream>
#include<cstring>
int main() {
  using namespace std;
  char word[20];
  int sum = 0;
  cout << "Enter words(to stop,type the word done):\n";
  cin >> word;
  while (strcmp(word, "done")) {
    sum++;
    cin >> word;
  }
  cout << "You entered a total of " << sum << " words.\n";
  return 0;
}