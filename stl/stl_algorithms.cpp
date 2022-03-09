#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

template <class T>
T tripple(T x)
{
	return x + x + x;
}

void sorting_function()
{
	std::vector<int> v{3, 4, 2, 1, 5, 6, 7};
	std::sort(v.begin(), v.end(), [](int lhs, int rhs)
			  { return lhs > rhs; });

	for (int i : v)
	{
		std::cout << i << " ";
	}
	std::cout << "" << std::endl;

	std::vector<int> s{3, 2, 1, 2, 0, 5, 5, 4};
	std::stable_sort(s.begin(), s.end());

	for (int i : s)
	{
		std::cout << i << " ";
	}
	std::cout << "" << std::endl;
	std::vector<int> p{2, 1, 3, 6, 5, 4};
	std::partial_sort(p.begin(), p.begin() + 4, p.end());

	for (int i : p)
	{
		std::cout << i << " ";
	}
	std::cout << "" << std::endl;
	std::cout << std::is_sorted(p.begin(), p.end()) << std::endl;
}

void common_algorithm()
{
	std::string name = "Hello, world!";
	std::reverse(name.begin(), name.end());
	std::cout << name << std::endl;
	auto last = std::unique(name.begin(), name.end());
	name.erase(last, name.end());
	std::cout << name << std::endl;
}

void search_algorithm()
{
	std::vector<int> v{2, 6, 1, 7, 3, 7};
	auto res1 = std::find(v.begin(), v.end(), 7);
	int dist = std::distance(v.begin(), res1);
	// std::cout << res1 << std::endl;
	std::cout << dist << std::endl;
}

int main()
{
	std::cout << tripple(1) << std::endl;
	std::cout << tripple(2.3) << std::endl;

	sorting_function();
	common_algorithm();
	search_algorithm();

	return 0;
}
