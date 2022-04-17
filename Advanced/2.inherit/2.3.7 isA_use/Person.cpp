#include "Person.h"

Person::Person()
{
    cout << "Person()" << endl;
}

Person::Person(const Person &p)
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
    cout << "Person::eat()" << endl;
}
//
//使用基类作为参数传递时，直接传递产生临时变量，会耗费时间空间，而引用和指针传递不产生临时变量，所以推荐使用引用的方式作为参数传递，相对来说指针比较复杂所以不在推荐之列。
//临时变量调用拷贝构造函数，使用时需要注意。
//可以从截图中发现传递不管是基类还是派生类，其调用的都是 Person 类的 eat 函数，这也是为什么叫做 isA。
//当派生类对象传递给基类参数时，其本质是构造一个基类对象或者使用派生类对象中基类部分。