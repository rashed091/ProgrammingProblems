#include <bits/stdc++.h>
using namespace std;

void plus_one(vector<int> &A)
{
	++A.back();
	for (int i = A.size() - 1; i > 0 && A[i] == 10; --i)
	{
		A[i] = 0, ++A[i - 1];
	}
	if (A[0] == 10)
	{
		A[0] = 0;
		A.insert(A.begin(), 1);
	}
}

int main()
{
	vector<int> v{1, 2, 9};
	plus_one(v);
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
