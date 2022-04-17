#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 程序抛出异常并捕获
    try
    {
        throw out_of_range("out of range.");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }

    // 异常并捕获
    try
    {
        vector<int> arr = {1, 2, 3};

        cout << "arr: " << arr.at(3) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }   

    return 0;
}