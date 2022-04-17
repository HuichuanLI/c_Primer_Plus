#include <iostream>
#include <map>
#include <string>
#include <ctime>

using namespace std;

const int count = 100000;

int main()
{
	map<int, int> m;

	for(int i = 0; i < count; i++) {
		m.insert(pair<int, int>(i, i));
	}

	for(const auto& [key, value] : m)
		cout << key << " | " << value << endl;


    return 0;
}
