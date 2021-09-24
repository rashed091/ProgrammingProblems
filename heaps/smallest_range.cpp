#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
#include <queue>
#include <climits>
using namespace std;

struct node
{
	int value, list_num, index;
};

struct comp
{
	bool operator()(const node &lhs, const node &rhs) const
	{
		return lhs.value > rhs.value;
	}
};

pair<int, int> findMinimumRange(vector<vector<int>> lists)
{
	if (lists.size() == 0)
	{
		return {-1, -1};
	}
	int M = lists.size();
	int high = INT_MIN;
	pair<int, int> p = {0, INT_MAX};

	priority_queue<node, vector<node>, comp> pq;

	for (int i = 0; i < M; i++)
	{
		if (lists[i].size() == 0)
		{
			return {-1, -1};
		}
		pq.push({lists[i][0], i, 0});
		high = max(high, lists[i][0]);
	}

	while (true)
	{
		int low = pq.top().value;
		int i = pq.top().list_num;
		int j = pq.top().index;

		pq.pop();

		if (high - low < p.second - p.first)
		{
			p = {low, high};
		}
		if (j == lists[i].size() - 1)
		{
			return p;
		}
		pq.push({lists[i][j + 1], i, j + 1});
		high = max(high, lists[i][j + 1]);
	}
}

int main()
{
	vector<vector<int>> lists{
		{3, 6, 8, 10, 15},
		{1, 5, 12},
		{4, 8, 15, 16},
		{2, 6}};

	pair<int, int> p = findMinimumRange(lists);
	cout << "The minimum range is (" << p.first << ", " << p.second << ")";

	return 0;
}
