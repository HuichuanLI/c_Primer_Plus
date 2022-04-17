#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
//静态数据成员必须单独初始化，如果不初始化，编译出程序将报错。
//静态数据成员只初始化一次，并且需要单独初始化，之后再实例化对象时将不再初始化静态数据成员。
//静态数据成员只有一份，且不依赖对象而存在。
//静态数据成员有两种方式访问，一种是使用 类名::数据成员 格式，另一种是使用 对象.数据成员 的格式。访问的前提是公有成员。
//静态成员函数不能使用 const 修饰，否则编译器将报错。
//在一个类中，静态成员函数不能调用非静态成员函数和非静态数据成员。而非静态成员函数可以调用静态成员函数。
class Student
{
public:
	Student();
	~Student();
	static int getCount();
private:
	static int count;
};

#endif // STUDENT_H