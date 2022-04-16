#include <iostream>
using namespace std;

class Student 
{
public:
	Student() {}
	~Student() {}
	void setName(string name) { this->name = name; }
	string getName() const { return name; };
	void setAge(int age) { this->age = age; }
	int getAge() const { return age; }
private:
	string name;
	int age;
};

int main()
{
	return 0;
}
