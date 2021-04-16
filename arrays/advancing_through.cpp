#include <bits/stdc++.h>
using namespace std;

bool advancing_through(vector<int> &A)
{
	int furthest_reach_so_far = 0, last_index = A.size() - 1;
	for (int i = 0; i <= furthest_reach_so_far && furthest_reach_so_far < last_index; ++i)
	{
		furthest_reach_so_far = max(furthest_reach_so_far, A[i] + i);
	}
	return furthest_reach_so_far >= last_index;
}

int main()
{
	vector<int> v{3, 3, 1, 0, 2, 0, 1};
	cout << advancing_through(v) << endl;

	return 0;
}
