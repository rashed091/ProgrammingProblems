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
	vector<int> v{1, 2, 3, 4, 5, 6, 7};
	int size = v.size();

	for (int i = 1; i < size; i += 2)
	{
		if (v[i - 1] > v[i])
		{
			swap(v[i - 1], v[i]);
		}

		if (v[i + 1] > v[i])
		{
			swap(v[i + 1], v[i]);
		}
	}
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
