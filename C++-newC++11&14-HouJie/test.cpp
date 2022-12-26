//
// Created by lhc456 on 2022/12/25.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <tuple>

int main() {
    std::vector<int> myvector;
    for (int i = 1; i < 10; i++) {
        myvector.push_back(i * 10);
    }

    std::ostream_iterator<int> out_it(std::cout, ",");
    std::copy(myvector.begin(), myvector.end(), out_it);

    std::tuple<std::string, int, int> t;
    std::cout << sizeof(t) << std::endl;

    auto t2 = std::make_tuple(22, 4, 4, "123");

    std::cout << get<0>(t2) << std::endl;
    std::cout << get<1>(t2) << std::endl;
    std::cout << get<2>(t2) << std::endl;
    std::cout << get<3>(t2) << std::endl;
    int a, b, c;
    std::string abc;
    tie(a, b, c,abc) = t2;

    return 0;
}