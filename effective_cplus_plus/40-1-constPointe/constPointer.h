//
// Created by 李汇川 on 2022/4/30.
//

#ifndef POINTER_EFFECTIVE_CPLUS_PLUS_40_1_CONSTPOINTE_CONSTPOINTER_H_
#define POINTER_EFFECTIVE_CPLUS_PLUS_40_1_CONSTPOINTE_CONSTPOINTER_H_

#include <iostream>

char greeting[] = "Hello";

class Widget {
};

void f1(const Widget *pw); // f1 获取一个指针指向常量的 Widget 对象
void f2(Widget const *pw); // f2 相同


#endif //POINTER_EFFECTIVE_CPLUS_PLUS_40_1_CONSTPOINTE_CONSTPOINTER_H_
