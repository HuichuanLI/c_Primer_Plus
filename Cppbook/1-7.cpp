//
// Created by lhc456 on 2022/12/26.
//
#include <iostream>

int i_arr[3] = {1, 2, 3};  //ÆÕÍ¨Êý×é

struct A {
    int x;
    struct B {
        int i;
        int j;
    } b;
} a = {1, {2, 3}};  //PODÀàÐÍ

int i = 0;

class Foo {
public:
    Foo(int) {}
} foo = 123;

int j(0);

Foo bar(123);

int main(void) {

    system("pause");
    return 0;
}