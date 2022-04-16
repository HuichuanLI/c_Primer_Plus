//
// Created by 李汇川 on 2022/4/16.
//

#include <iostream>
using namespace std;

class Array {
 public:
  // 构造函数
  Array(int count) {
    this->count = count;
    Arr = new int[count];
    cout << "Array()" << endl;
  }
  Array(const Array &arr) {
    // 浅拷贝
    this->count = arr.count;
    // 深拷贝正确用法
    this->Arr = new int[count];
    for (int i = 0; i < count; i++) {
      this->Arr[i] = arr.Arr[i];
    }
    cout << "Array(const Array & arr)" << endl;
  }

  // 析构函数
  ~Array() {
    delete[] Arr;
    Arr = nullptr;
    cout << "~Array(): " << count << endl;
  }
  void printAddress() {
    cout << "address: " << Arr << endl;
  }
  void setCount(int count) { this->count = count; }
  int getCount() { return count; }
 private:
  int count;
  int *Arr;
};

void stackInstantiation() {
  Array arr1(5);
  Array arr2 = arr1;
  arr1.printAddress();
  arr2.printAddress();
}

int main() {
  stackInstantiation();
  return 0;
}