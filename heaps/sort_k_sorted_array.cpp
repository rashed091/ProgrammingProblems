#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
#include <queue>
using namespace std;

void k_sorted(vector<int> &array, int k)
{
	priority_queue<int, vector<int>, greater<int>> pq(array.begin(), array.begin() + k + 1);

	int index = 0;

	for (int i = k + 1; i < array.size(); i++)
	{
		array[index++] = pq.top();
		pq.pop();
		pq.push(array[i]);
	}

	while (!pq.empty())
	{
		array[index++] = pq.top();
		pq.pop();
	}
}

int main()
{
	vector<int> nums{1, 4, 5, 2, 3, 7, 8, 6, 10, 9};
	int k = 2;

	k_sorted(nums, k);

	// print the sorted array
	for (int i : nums)
	{
		cout << i << " ";
	}

	return 0;
}
