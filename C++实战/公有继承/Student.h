//
// Created by lhc456 on 2022/9/3.
//

#ifndef POINTER_STUDENT_H
#define POINTER_STUDENT_H

#include "Person.h"

class Student : public Person // 公有继承
{
public:
    Student();

    ~Student();

    void setId(int id);

    int getId() const;

private: // 私有数据成员
    int id;
};


#endif //POINTER_STUDENT_H
