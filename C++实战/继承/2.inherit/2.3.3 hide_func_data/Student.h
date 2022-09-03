#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
//
//基类数据成员与派生类成员函数同名时，隐藏基类中数据成员。
//基类成员函数与派生类数据成员同名时，隐藏基类中成员函数。
//只要基类中存在与派生类同名的成员，直接隐藏基类中成员。
class Student : public Person
{
public:
	Student();
	~Student();
	void code();
	string name;
};

#endif // STUDENT_H