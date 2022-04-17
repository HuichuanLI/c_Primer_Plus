#include <iostream>
using namespace std;

void throwInt()
{
    throw 1;
}

void throwDouble()
{
    throw 0.1;
}

int main()
{
    try
    {
        // 语句块
        throwInt();
    }
    catch(int i)
    {
        cerr << i << endl;
    }
    catch(double d)
    {
        cerr << d << endl;
    }    

    return 0;
}