#include <iostream>
#include "HighStudent.h"

using namespace std;

//菱形继承
//菱形继承看似并没有什么问题，但是仔细想，类 B 和类 C 继承类 A 的时候都会将类 A 的成员继承下去，而类 D 同时继承类 B 和类 C 的时候，那就继承多份数据，这个时候就会产生一个问题，程序开销将会很大。
//如果类 A 中数据成员很多，那么经过菱形继承后就会产生双倍的空间消耗。

int main() {
    HighStudent stu("jake", 15);
    stu.Student::print();
    stu.Child::print();
    return 0;
}