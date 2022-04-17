#include <iostream>
using namespace std;

class Person {
public:
    Person(int age = 15):age(age) {}
    virtual ~Person() {}
    virtual void speek() {
        cout << "Person:" << age << endl;
    };
protected:
    int age;
};

class Student : public Person {
public:
    Student(int id = 17):id(id) {}
    virtual ~Student(){}
    virtual void speek(){
        cout << "Student:" << age << endl;
        cout << "Student:" << id << endl;
    }
    void eat(){
        cout << "Student::eat()" << endl;
    }
private:
    int id;
};

int main()
{    
    // 使用派生类实例化基类
    Person *per2 = new Student;
    Student *stu2 = dynamic_cast<Student*>(per2);
    if(stu2 == NULL) {
        cout << "per2 --> stu2: dynamic_cast failed." << endl;
        return -1;
    }
    stu2->speek();
    stu2->eat();

    delete per2;
    per2 = nullptr;


    Person per;
    Student stu;
    Person *p;
    Student *s;

    // 派生类 --> 基类
    p = dynamic_cast<Person*>(&stu);
    if(p == NULL) {
        cout << "stu --> p: dynamic_cast failed." << endl;
    }
    p->speek();

    // 基类 --> 派生类
    s = dynamic_cast<Student*>(&per);
    if(s == NULL) {
        cout << "per --> s: dynamic_cast failed." << endl;
        return -1;
    }
    s->speek();
    s->eat();

    return 0;
}