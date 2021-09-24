#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
#include <queue>
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

void merge_sorted_list(vector<vector<int>> const &lists)
{
	int M = lists.size();
	priority_queue<node, vector<node>, comp> pq;

	for (int i = 0; i < M; i++)
	{
		if (lists[i].size() >= 1)
		{
			pq.push({lists[i][0], i, 0});
		}
	}
	while (!pq.empty())
	{
		node min = pq.top();
		pq.pop();

		cout << min.value << " ";

		if (min.index + 1 < lists[min.list_num].size())
		{
			min.index += 1;
			min.value = lists[min.list_num][min.index];
			pq.push(min);
		}
	}
}

int main()
{
	// `M` lists of variable size
	vector<vector<int>> lists{
		{10, 20, 30, 40},
		{15, 25, 35},
		{27, 29, 37, 48, 93},
		{32, 33}};

	merge_sorted_list(lists);

	return 0;
}
