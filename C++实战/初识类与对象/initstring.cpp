//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2 = "hello";
    string s3("world");
    string s4 = s1 + s2;
    string s5 = "hello " + s2;
    string s6 = "hello " + s2 + "world";
    string s7(5, 'c');
    string s8 = "hello" + " world" // Error

    return 0;
}

