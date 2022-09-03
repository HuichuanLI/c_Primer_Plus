//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>
#include <string>

using namespace std;

class Teacher {
public:
    // 1. 无参构造函数
    Teacher() {}

    // 2. 有参构造函数
    Teacher(string name, int age) {
        this->name = name;
        this->age = age;
    }
    // 3. 有参构造函数--全部有默认参数-->默认构造函数
    /*Teacher(string name = "jake", int age = 15) {
        this->name = name;
        this->age = age;
    }*/
private:
    string name;
    int age;
};


#include <iostream>
#include <string>

using namespace std;

class A {
public:
    // 默认 implicit（隐式转换）
    A(int) {}      // 转换构造函数
    A(int, int) {} // 转换构造函数 (C++11)
    operator bool() const { return true; }
};

class B {
public:
    // 申明构造函数使用显示声明，不能隐式转换
    explicit B(int) {}

    explicit B(int, int) {}

    explicit operator bool() const { return true; }
};

int main() {
    A a1 = 1;      // OK赋值初始化选择 A::A(int)
    A a2(2);       // OK：直接初始化选择 A::A(int)
    A a3{4, 5};   // OK：直接列表初始化选择 A::A(int, int)
    A a4 = {4, 5}; // OK赋值列表初始化选择 A::A(int, int)
    A a5 = (A) 1;   // OK：显式转型进行 static_cast
    if (a1);      // OK：A::operator bool()
    bool na1 = a1; // OK赋值初始化选择 A::operator bool()
    bool na2 = static_cast<bool>(a1); // OK：static_cast 进行直接初始化

//  B b1 = 1;      // err赋值初始化不考虑 B::B(int)
    B b2(2);       // OK：直接初始化选择 B::B(int)
    B b3{4, 5};   // OK：直接列表初始化选择 B::B(int, int)
//  B b4 = {4, 5}; // err赋值列表初始化不考虑 B::B(int,int)
    B b5 = (B) 1;   // OK：显式转型进行 static_cast
    if (b2);      // OK：B::operator bool()
//  bool nb1 = b2; // err赋值初始化不考虑 B::operator bool()
    bool nb2 = static_cast<bool>(b2); // OK：static_cast 进行直接初始化
}