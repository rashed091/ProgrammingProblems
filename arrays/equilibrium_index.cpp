#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <random>
using namespace std;

void equilibriumIndex(vector<int> array)
{
	int total = accumulate(array.begin(), array.end(), 0);
	int right = 0;
	for (int i = array.size() - 1; i >= 0; i--)
	{
		if (right == total - (array[i] + right))
		{
			cout << "Equilibrium index: " << i << endl;
		}
		right += array[i];
	}
}

int main()
{
	vector<int> array{0, -3, 5, -4, -2, 3, 1, 0};

	equilibriumIndex(array);

	return 0;
}
