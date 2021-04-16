#include <bits/stdc++.h>
using namespace std;

void permutation(vector<char> &A, vector<int> &perm)
{
	int size = A.size();
	for (int i = 0; i < size; ++i)
	{
		int next = i;
		while (perm[next] >= 0)
		{
			swap(A[i], A[perm[next]]);
			int temp = perm[next];
			perm[next] -= perm.size();
			next = temp;
		}
	}
	for (auto i : A)
	{
		cout << i << " ";
	}
	cout << endl;
	for (auto i : perm)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	vector<char> v{'a', 'b', 'c', 'd'};
	vector<int> p{3, 1, 2, 0};
	permutation(v, p);

	return 0;
}
