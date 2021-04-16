#include <bits/stdc++.h>
using namespace std;

void generate_primes(int n)
{
	vector<int> primes;
	deque<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < n; ++i)
	{
		if (is_prime[i])
		{
			primes.emplace_back(i);
			for (int j = i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}
	for (auto &p : primes)
	{
		cout << p << " ";
	}
	cout << endl;
}

int main()
{
	generate_primes(10);

	return 0;
}
