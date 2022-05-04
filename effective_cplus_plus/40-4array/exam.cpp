//
// Created by 李汇川 on 2022/5/1.
//

#include <iostream>
#include <cstring>

class IntArray {
 public:
  IntArray(int len = 5);
  ~IntArray();

  void append(int value);

  int length() const;
  int capacity() const;

  int &at(int pos) const;
  int &operator[](int pos);
  const int &operator[](int pos) const;

  void travel();

 private:
  void release();
 private:
  int m_pos;          // 当前位置，即实际数据长度
  int m_length;       // 数组总长度，即数组总容量，非数据总长度
  int *data;          // 数组
};

IntArray::IntArray(int len) : m_pos(0), m_length(len), data(NULL) {
  release();
  data = new int[m_length];
  memset(data, 0, m_length * sizeof(int));
}

IntArray::~IntArray() {
  release();
}

void IntArray::release() {
  if (data != NULL) {
    delete[] data;
    data = NULL;
  }
}

void IntArray::append(int value) {
  // 检查容量是否溢出
  if (m_pos >= m_length) {
    int *temp = new int[m_length + 5];
    memcpy(temp, data, m_length * sizeof(int));
    release();
    data = temp;
    m_length += 5;
  }
  data[m_pos] = value;
  ++m_pos;
}

int IntArray::length() const {
  return m_pos;
}
int IntArray::capacity() const {
  return m_length;
}

int &IntArray::at(int pos) const {
  // 边界检查
  if (pos >= m_length) {
    throw std::string("File: exam.cpp, line: 37, err msg: pos out of range.");
  }
  return data[pos];
}

int &IntArray::operator[](int pos) {
  return at(pos);
}

const int &IntArray::operator[](int pos) const {
  return static_cast<const int &>(at(pos));
}

void IntArray::travel() {
  for (int i = 0; i < m_pos; i++)
    std::cout << at(i) << " ";
  std::cout << std::endl;
}

int main() {
  IntArray arr(5);
  arr.append(1);
  arr.append(2);
  arr.append(3);
  arr.append(4);
  arr.append(5);
  arr.append(6);
  arr.append(7);
  arr.travel();
  int *a = &arr.at(0);
  *a = 15;
  arr.travel();
  try {
    std::cout << arr.at(0) << std::endl;
  }
  catch (const std::string &s) {
    std::cout << s << std::endl;
  }
  return 0;
}