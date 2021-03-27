#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> values{2, 7, 1, 4, 6, 5, 8, 3};

    for (size_t i = 0; i < values.size(); ++i)
    {
        int min = i;
        for (size_t j = i + 1; j < values.size(); ++j)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        swap(values[min], values[i]);
    }
    for (const auto &e : values)
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}
