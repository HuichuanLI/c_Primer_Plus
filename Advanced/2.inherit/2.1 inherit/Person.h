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
	void setName(const string &name); 
	string getName() const;
	void setAge(int age);
	int getAge() const;
protected:  // 保护数据成员
	string name;
	int age;
};

#endif // PERSON_H