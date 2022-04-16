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
    cout << "Array()" << endl;
  }
  // 拷贝构造函数
  Array(const Array &arr) {
    // 浅拷贝
    this->count = arr.count;
    cout << "Array(const Array & arr)" << endl;
  }
  // 析构函数
  ~Array() {
    cout << "~Array(): " << count << endl;
  }
  void setCount(int count) { this->count = count; }
  int getCount() { return count; }
 private:
  int count;
};

// 栈上实例化
void stackInstantiation() {
  Array arr1(5);
  // 调用拷贝构造函数
  Array arr2 = arr1;
  arr2.setCount(5);
  Array arr3(arr2);
}

int main() {
  stackInstantiation();
  return 0;
}