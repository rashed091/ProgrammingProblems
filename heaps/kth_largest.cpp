#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
#include <queue>
using namespace std;

int kth_largest_min_heap(vector<int> const &ints, int k)
{
	if (ints.size() < k)
	{
		exit(-1);
	}

	priority_queue<int, vector<int>, greater<int>> pq(ints.begin(), ints.begin() + k);

	for (int i = k; i < ints.size(); i++)
	{
		if (ints[i] > pq.top())
		{
			pq.pop();
			pq.push(ints[i]);
		}
	}
	return pq.top();
}

int kth_largest_max_heap(vector<int> const &ints, int k)
{
	if (ints.size() < k)
	{
		exit(-1);
	}

	priority_queue<int, vector<int>> pq(ints.begin(), ints.end());

	while (--k)
	{
		pq.pop();
	}

	return pq.top();
}

int main()
{
	vector<int> ints{7, 4, 6, 3, 9, 1};
	int k = 2;
	cout << "K'th largest element: " << kth_largest_min_heap(ints, k) << endl;

	cout << "K'th largest element: " << kth_largest_max_heap(ints, k) << endl;

	nth_element(ints.begin(), ints.begin() + k, ints.end(), greater<int>());
	cout << "K'th largest element: " << ints[k - 1] << endl;

	return 0;
}
