//
// Created by lhc456 on 2022/9/3.
//
#include <iostream>

using namespace std;
//
//如果不实现拷贝构造函数，系统将自动生成，并且只能做浅拷贝。
//如果类中存在申请内存操作时一定要重载拷贝构造函数。
//类中存在指针数据成员时需要使用深拷贝。
//实验操作总结
//        在实验操作中使用对象初始化构造另一个对象。
//打印出两个对象的指针数据成员的地址，并查看是否相同。
//打印出两个对象的指针数据成员的内容，并查看与赋值的值是否相同。
class Array {
public:
    // 构造函数
    Array(int count) {
        this->count = count;
        Arr = new int[count];
        cout << "Array()" << endl;
    }

//    // 拷贝构造函数
//    Array(const Array &arr) {
//        // 浅拷贝
//        this->count = arr.count;
//        this->Arr = arr.Arr;
//        cout << "Array(const Array & arr)" << endl;
//    }

    Array(const Array &arr) {
        // 浅拷贝
        this->count = arr.count;
        // 深拷贝正确用法
        this->Arr = new int[count];
        for (int i = 0; i < count; i++) {
            this->Arr[i] = arr.Arr[i];
        }
        cout << "Array(const Array & arr)" << endl;
    }

    // 析构函数
    ~Array() {
        delete[] Arr;
        Arr = nullptr;
        cout << "~Array(): " << count << endl;
    }

    void printAddress() {
        cout << "address: " << Arr << endl;
    }

    void setCount(int count) { this->count = count; }

    int getCount() { return count; }

private:
    int count;
    int *Arr;
};

void stackInstantiation() {
    Array arr1(5);
    Array arr2 = arr1;
    arr1.printAddress();
    arr2.printAddress();
}

int main() {
    stackInstantiation();
    return 0;
}