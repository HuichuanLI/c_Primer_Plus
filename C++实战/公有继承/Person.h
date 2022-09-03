//
// Created by lhc456 on 2022/9/3.
//

#ifndef POINTER_PERSON_H
#define POINTER_PERSON_H
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person();

    ~Person();

public:     // 基类 public 属性数据成员
    float height;
protected:  // 基类 protected 属性数据成员
    string name;
private:    // 基类 private 属性数据成员
    int age;
};

#endif // PERSON_H

#endif //POINTER_PERSON_H
