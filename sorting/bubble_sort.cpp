#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> values{2, 7, 1, 4, 6, 5, 8, 3};

    for (size_t i = 0; i < values.size(); ++i)
    {
        for (size_t j = 0; j < values.size() - i - 1; ++j)
        {
            if (values[j] > values[j + 1])
            {
                swap(values[j], values[j + 1]);
            }
        }
    }
    for (const auto &e : values)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
