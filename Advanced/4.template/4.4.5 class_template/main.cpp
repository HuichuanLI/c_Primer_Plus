#include <iostream>
#include <string>
#include <cassert>

using namespace std;

template<typename T1, typename T2>
class Pair
{
public:
	Pair(const T1& key, const T2& value) : m_key(key), m_value(value) {}
	T1 key() const { return m_key; }
	T2 value() const { return m_value; }

	T2& operator[](const T1& key) {
		assert(key == m_key);
		return m_value;
	}
private:
	T1 m_key;
	T2 m_value;
};

int main()
{

	Pair<int, string> p(1, "hello");
	cout << p.key() << ", " << p.value() << endl;

	cout << p[1] << endl;

    return 0;
}
