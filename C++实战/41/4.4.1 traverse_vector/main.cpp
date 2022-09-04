#include <iostream>
#include <vector>
#include <ctime>

using namespace std;


int main()
{
	const int count = 100000000;
	vector<int> vec(count);

	auto start = clock();

	// 1. 下标方式访问
	for(int i = 0; i < count; i++) {
		// vec[i];
		// 如果只是遍历而不修改值时建议使用 at(i) 函数方式访问
		vec.at(i);
	}
	cout << endl;
	auto end = clock();
	auto duration = end - start;
	cout << "下标方式访问：" << duration << " ms" << endl;

	start = clock();
	// 2. 迭代器方式访问
	for(auto d = vec.begin(); d != vec.end(); d++) {
		*d;
	}
	cout << endl;
	cout << "迭代器访问方式：" << clock() - start << " ms" << endl;

	start = clock();
	// 3. 迭代器方式访问
	for(vector<int>::const_iterator d = vec.begin(); d != vec.end(); d++) {
		*d;
	}
	cout << endl;
	cout << "迭代器访问方式：" << clock() - start << " ms" << endl;

	start = clock();
	// 4. 迭代器方式访问
	for(auto const &d: vec) {
		d;
	}
	cout << endl;
	cout << "迭代器访问方式：" << clock() - start << " ms" << endl;


    return 0;
}
