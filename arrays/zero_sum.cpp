#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <unordered_map>
#include <limits>
#include <random>
using namespace std;

int main()
{
	vector<int> v{3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
	unordered_multimap<int, int> map;
	map.insert(pair<int, int>(0, -1));
	int sum = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];

		if (map.find(sum) != map.end())
		{
			auto it = map.find(sum);
			while (it != map.end() && it->first == sum)
			{
				cout << "Subarray [" << it->second + 1 << "…" << i << "]\n";
				it++;
			}
		}
		map.insert(pair<int, int>(sum, i));
	}

	return 0;
}
