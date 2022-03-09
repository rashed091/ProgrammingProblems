#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

void find_majority(std::vector<int> const &v)
{
	std::unordered_map<int, int> map;
	int n = v.size();

	for (int i = 0; i < n; i++)
	{
		map[v[i]]++;
	}

	for (auto pair : map)
	{
		if (pair.second > n / 2)
		{
			std::cout << pair.first << std::endl;
		}
	}
}

int main()
{
	std::vector<int> input{2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};

	find_majority(input);

	return 0;
}
