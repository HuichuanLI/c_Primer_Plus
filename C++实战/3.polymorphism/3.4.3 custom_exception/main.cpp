#include <iostream>
#include <exception>

using namespace std;

class custom_exception : public exception
{	// base of all out-of-range exceptions
public:
    typedef exception _Mybase;

    explicit custom_exception(const string& _Message)
        : _Mybase(_Message.c_str())
        {	// construct from message string
        }

    explicit custom_exception(const char *_Message)
        : _Mybase(_Message)
        {	// construct from message char*
        }
};


int main()
{
    // 程序抛出异常并捕获
    try
    {
        throw custom_exception("custom exception.");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }    

    return 0;
}