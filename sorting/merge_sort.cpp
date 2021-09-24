#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int l, int m, int r)
{
    int i, j, k;
    vector<int> left;
    vector<int> right;
    int n1 = m - l + 1;
    int n2 = r - m;

    for (i = 0; i < n1; ++i)
    {
        left.push_back(A[l + i]);
    }
    for (j = 0; j < n2; ++j)
    {
        right.push_back(A[m + 1 + j]);
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 || j < n2)
    {
        if (j >= n2 || (i < n1 && left[i] <= right[j]))
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
}

void merge(vector<int>& A, int l, int m, int r) {
    
}


void mergesort(vector<int> &A, int l, int r)
{
    if (l < r)
    {
        int m = floor((l + r) / 2);
        cout << "left:" << l << " m:" << m << " r: " << r << endl;
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
