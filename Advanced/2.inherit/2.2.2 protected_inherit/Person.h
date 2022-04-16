#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
	Person();
	~Person();
public:     // 基类 public 属性数据成员
	string name;
protected:  // 基类 protected 属性数据成员
	int age;
};

#endif // PERSON_H