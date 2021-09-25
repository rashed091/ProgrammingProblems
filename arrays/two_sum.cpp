#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
#include <unordered_map>
using namespace std;

void findPair(vector<int> array, int target)
{
	unordered_map<int, int> map;

	for (int i = 0; i < array.size(); i++)
	{
		if (map.find(target - array[i]) != map.end())
		{
			cout << "Pair: " << array[map[target - array[i]]] << " - " << array[i] << endl;
		}
		map[array[i]] = i;
	}
}

int main()
{
	vector<int> array{8, 7, 2, 5, 3, 1};
	int target = 10;

	findPair(array, target);

	return 0;
}
