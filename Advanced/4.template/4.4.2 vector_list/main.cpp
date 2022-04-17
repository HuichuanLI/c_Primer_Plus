#include <iostream>
#include <vector>
#include <list>
#include <ctime>

using namespace std;

void tail_insert(int count) {
  clock_t start = clock();
  vector<int> vec;
  for (int i = 0; i < count; i++) {
    vec.push_back(i);
  }
  cout << "vector 尾插方式：" << clock() - start << " ms" << endl;

  start = clock();
  list<int> l;
  for (int i = 0; i < count; i++) {
    l.push_back(i);
  }
  cout << "list 尾插方式：" << clock() - start << " ms" << endl;

  start = clock();
  for (int i = 0; i < count; i++) {
    int temp = vec.at(i);
  }
  cout << "vector 下标遍历：" << clock() - start << " ms" << endl;

  start = clock();
  for (auto d = vec.begin(); d != vec.end(); d++) {
    *d;
  }
  cout << "vector 迭代器遍历：" << clock() - start << " ms" << endl;

  start = clock();
  for (auto d = l.begin(); d != l.end(); d++) {
    *d;
  }
  cout << "list 迭代器遍历：" << clock() - start << " ms" << endl;
}

void head_insert(int count) {
  clock_t start = clock();
  vector<int> vec;
  for (int i = 0; i < count; i++) {
    vec.insert(vec.begin(), i);
  }
  cout << "vector 头插方式：" << clock() - start << " ms" << endl;

  start = clock();
  list<int> l;
  for (int i = 0; i < count; i++) {
    l.push_front(i);
  }
  cout << "list 头插方式：" << clock() - start << " ms" << endl;
}

int main() {
  const int count = 1000000;

  head_insert(count);

  tail_insert(count);

  return 0;
}
