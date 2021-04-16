#include <bits/stdc++.h>
using namespace std;

void even_odd(vector<int> &array)
{
	int next_even = 0, next_odd = array.size() - 1;
	while (next_even < next_odd)
	{
		if (array[next_even] % 2 == 0)
		{
			++next_even;
		}
		else
		{
			swap(array[next_even], array[next_odd--]);
		}
	}
}

int main()
{
	vector<int> v{1, 2, 3, 5, 4, 6, 8, 9, 7};
	even_odd(v);
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
