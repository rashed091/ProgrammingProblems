#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> in{1, 2, 4, 3};
	auto result = min_element(in.begin(), in.begin() + 4);
	cout << distance(in.begin(), result) << endl;

	return 0;
}
