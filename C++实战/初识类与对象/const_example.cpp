//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>

//使用 const int *p 表示 *p 的值不能改变，但是可以改变 p 的地址。
//
//const 允许指定一个语义约束，编译器会强制实施这个约束，允许程序员告诉编译器某值是保持不变的。如果在编程中确实有某个值保持不变，就应该明确使用 const。
//
//const 对象只能调用 const 成员函数，不能调用普通成员函数。
//const 指针和 const 引用对象都只能调用对象的常成员函数。
//普通成员函数与 const 成员函数可以互为重载。
//普通对象能调用 const 成员函数，也能调用普通成员函数。
//常对象只能调用 const 成员函数，不能调用普通成员函数。
//普通对象和 const 对象都可以访问公有数据成员。
//自定义类型参数建议使用引用方式传递，可加 const 防止修改参数值。


#include <iostream>

using namespace std;

int main() {
    const int a = 5;
    int b = 10;
    const int *p = &a;
    // *p = 7; // error
    p = &b;
    cout << "*p = " << *p << endl;
    return 0;
}




// int * const p 表示地址不能改变。
using namespace std;

int main() {
    const int a = 5;
    int b = 10;
    const int *p = &a;
    // *p = 7; // error
    p = &b;
    cout << "*p = " << *p << endl;
    return 0;
}

//const int * const p 修饰表示地址与值都不能改变。


#include <iostream>

using namespace std;

int main() {
    const int a = 5;
    int b = 10;
    const int *const p = &a;
    // *p = 11; // error
    // p = &a; // error
    cout << "*p = " << *p << endl;
    return 0;
}