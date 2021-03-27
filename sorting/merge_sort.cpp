#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int l, int m, int r)
{
    vector<int> result;
    int j = r;
    for (size_t i = l; i < m; ++i)
    {
        if (j == m || (l < r && A[l] <= A[r]))
        {
            result.push_back(A[l++]);
        }
        else
        {
            result.push_back(A[r++]);
        }
    }
    for (size_t i = l; i < result.size(); ++i)
    {
        A[i] = result[i];
    }
}

void mergesort(vector<int> &A, int l, int r)
{
    if (l < r)
    {
        int m = floor((l + r) / 2);
        mergesort(A, l, m);
        mergesort(A, m + 1, r);
        merge(A, l, m, r);
    }
}

int main()
{
    vector<int> values{2, 7, 1, 4, 6, 5, 8, 3};

    mergesort(values, 0, values.size());

    for (const auto &e : values)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
