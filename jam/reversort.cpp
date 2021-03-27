#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, N, index = 1;
	cin >> T;
	while (T)
	{
		string token, input;
		vector<int> tokens;

		cin.clear();
		cin >> N;
		cin.ignore();
		cin.clear();
		getline(cin, input);

		istringstream iss(input);
		while (getline(iss, token, ' '))
		{
			tokens.push_back(stoi(token));
		}

		int vsize = tokens.size();
		int j = vsize, cost = 0;
		for (int i = 0; i < vsize - 1; ++i)
		{

			auto result = min_element(tokens.begin() + i, tokens.end());
			j = distance(tokens.begin() + i, result) + 1;
			reverse(tokens.begin() + i, tokens.begin() + j);
			cost += j;
		}
		cout << "Case #" << index << ": " << cost << endl;
		index += 1;
		T -= 1;
	}

	return 0;
}
