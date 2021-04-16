#include <bits/stdc++.h>
using namespace std;

void dutch_flag(vector<int> &array, int pivot_index)
{
	int pivot = array[pivot_index];
	int smaller = 0;
	int length = array.size();
	for (int i = 0; i < length; ++i)
	{
		if (array[i] < pivot)
		{
			swap(array[i], array[smaller++]);
		}
	}

	int larger = length - 1;
	for (int i = larger; i >= 0 && array[i] >= pivot; --i)
	{
		if (array[i] > pivot)
		{
			swap(array[i], array[larger--]);
		}
	}
}

void dutch_flag2(vector<int> &array, int pivot_index)
{
	int pivot = array[pivot_index];
	int smaller = 0, equal = 0, larger = array.size();

	while (equal < larger)
	{
		if (array[equal] < pivot)
		{
			swap(array[smaller++], array[equal++]);
		}
		else if (array[equal] == pivot)
		{
			++equal;
		}
		else
		{
			swap(array[equal], array[--larger]);
		}
	}
}

int main()
{
	vector<int> v{-3, 0, -1, 1, 1, 1, 5, 3, 4, 2};
	dutch_flag2(v, 5);
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
