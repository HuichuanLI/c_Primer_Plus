#include <iostream>
#include <cstring>

using namespace std;

// 宏定义
// #define	MAX(a, b)	((a) > (b) ? (a) : (b))

// 重载
/*
int Max(int a, int b)
{
	return a > b ? a : b;
}

float Max(float a, float b)
{
	return a > b ? a : b;
}
*/

// 模板
template<typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

template<>
char* Max(char* a, char* b)
{
	return (strcmp(a, b) > 0 ? (a) : (b));
}

int main()
{
	float a = 4.7, b = 5;
	cout << Max(a, b) << endl;
	cout << Max('a', 'b') << endl;

	const char* s1 = "hello";
	const char* s2 = "world";
	cout << Max(s1, s2) << endl;


    return 0;
}
