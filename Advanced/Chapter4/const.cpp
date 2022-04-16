//
// Created by 李汇川 on 2022/4/16.
//

//const 变量：const int a 表示 a 的值不能改变。
//const 指针变量：const int *p 表示值 *p 不能改变，int * const p 表示地址p 不能改变，const int * const p 表示地址和值都不能改变。
//const 参数传递。
//将 int 换为自定义类（如 Point 类）仍然成立。
#include <iostream>
using namespace std;

//int main() {
//  const int a = 5;
//  int *p = (int *) &a;
//  *p = 7;
//  cout << "a = " << a << endl;
//  return 0;
//}
//#include <iostream>
//using namespace std;

//int main() {
//  const int a = 5;
//  int b = 10;
//  const int *p = &a;
//  // *p = 7; // error
//  p = &b;
//  cout << "*p = " << *p << endl;
//  return 0;
//}
//#include <iostream>
//using namespace std;

int main()
{
  const int a = 5;
  int b = 10;
  int * const p = &b;
  *p = 11;
  // p = &a; // error
  cout << "*p = " << *p << endl;
  return 0;
}