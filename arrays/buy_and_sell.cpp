#include <bits/stdc++.h>
using namespace std;

void buy_sell(vector<double> &A)
{
	double min_so_far = numeric_limits<double>::max(), max_profit = 0;
	for (auto price : A)
	{
		double max_profit_today = price - min_so_far;
		max_profit = max(max_profit, max_profit_today);
		min_so_far = min(min_so_far, price);
	}
	cout << max_profit << endl;
}

void buy_sell_twice(vector<double> &A)
{
	vector<double> prices(A.size(), 0);
	double min_so_far = numeric_limits<double>::max(), max_profit = 0;
	for (auto price : A)
	{
		min_so_far = min(min_so_far, price);
		max_profit = max(max_profit, price - min_so_far);
		prices.push_back(max_profit);
	}

	double max_so_far = numeric_limits<double>::min();
	for (int i = A.size() - 1; i > 0; --i)
	{
		max_so_far = max(max_so_far, A[i]);
		max_profit = max(max_profit, max_so_far - A[i] + prices[i - 1]);
	}

	cout << max_profit << endl;
}

int main()
{
	vector<double> v{12, 11, 13, 9, 12, 8, 14, 13, 15};
	buy_sell_twice(v);

	return 0;
}
