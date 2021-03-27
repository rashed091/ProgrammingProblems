#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> values{2, 7, 1, 4, 6, 5, 8, 3};

    for (size_t i = 1; i < values.size(); ++i)
    {
        int key = values[i];
        int j = i - 1;
        while (j >= 0 && values[j] > key)
        {
            values[j + 1] = values[j];
            j = j - 1;
        }
        values[j + 1] = key;
    }
    for (const auto &e : values)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
