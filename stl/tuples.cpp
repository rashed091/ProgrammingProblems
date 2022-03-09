#include <iostream>
#include <algorithm>
#include <utility>
#include <tuple>

int main()
{
	std::pair<int, double> p1(123, 4.56);
	auto p2 = std::make_pair(456, 1.23);

	std::cout << p2.first << p2.second << std::endl;

	std::tuple<int, double, char> t1(123, 4.23, 'x');

	std::cout << std::get<1>(t1) << std::endl;

	auto t = std::make_tuple(123, 4.12);
	int x;
	double y;
	std::tie(x, y) = t;

	std::cout << x << std::endl;

	auto &[a, b, c] = t1;
	std::cout << c << std::endl;
	c = 'a';
	std::cout << c << std::endl;
	return 0;
}
