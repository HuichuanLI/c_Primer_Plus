//
// Created by 李汇川 on 2022/4/15.
//

#include<iostream>
#include<cstring>

using namespace std;
const int MaxSize = 20;
int main() {
  char first_name[MaxSize];
  char last_name[MaxSize];
  char full_name[2 * MaxSize];
  cout << "Enter your first name:";
  cin.getline(first_name, MaxSize);

  cout << "Enter your last name:";
  cin.getline(last_name, MaxSize);

  strncpy(full_name, last_name, MaxSize);
  strcat(full_name, ","); // 加 `,`
  strncat(full_name, first_name, MaxSize);
  cout << "Here's the information in a single string:" << full_name << endl;
  return 0;
}