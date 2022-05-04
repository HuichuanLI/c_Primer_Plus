//
// Created by 李汇川 on 2022/4/30.
//

#include <iostream>
#include <vector>

std::vector<int> vec = {1, 2, 3, 4, 5};

int main() {
  // 1. 指针为非常量，内容为非常量
  std::vector<int>::iterator iter1 = vec.begin();
  *iter1 = 10;     // 正确
  ++iter1;         // 正确

  // 2. 指针为常量，内容为非常量
  const std::vector<int>::iterator iter2 = vec.begin();
  *iter2 = 10;     // 正确， 修改指针所指内容
  ++iter2;         // 错误，iter2 为常量指针，不能修改

  // 3. 指针为非常量，内容为常量
  std::vector<int>::const_iterator iter3 = vec.begin();
  *iter3 = 10;    // 错误， *iter3 表示指针所指内容为常量，不能修改
  ++iter3;        // 正确，指针非常量，可以改变

  // 4. 指针为常量，内容为常量
  const std::vector<int>::const_iterator iter4 = vec.begin();
  *iter4 = 10;    // 错误， *iter4 表示指针所指内容为常量，不能修改
  ++iter4;        // 错误，iter4 为常量指针，不能修改

  // 5. 等效于 std::vector<int>::const_iterator iter5 = vec.begin();
  auto iter5 = vec.cbegin();

  return 0;
}