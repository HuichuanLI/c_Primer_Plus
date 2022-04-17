#include <iostream>
#include <typeinfo>
using namespace std;

class Person {
public:
    virtual ~Person(){}
    virtual void sleep() = 0;
};

class Student : public Person {
public:
    Student(){}
    virtual ~Student(){}
    virtual void sleep(){}
};

int main()
{
    int i = 100;
    const type_info &ti1 = typeid(i);
    cout << ti1.name() << endl;
    float f;
    cout << typeid(f).name() << endl;
    double d;
    cout << typeid(d).name() << endl;
    
    Person *p = new Student;
    cout << typeid(p).name() << endl;
    cout << typeid(*p).name() << endl;

    return 0;
}