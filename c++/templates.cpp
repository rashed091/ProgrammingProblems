#include <bits/stdc++.h>
using namespace std;

template <typename T>
int compare(const T &lhs, const T &rhs)
{
    if (lhs < rhs)
    {
        return -1;
    }
    else if (lhs > rhs)
    {
        return 1;
    }
    return 0;
}

int main()
{
    cout << compare<int>(10, 5) << endl;
    cout << compare<string>("hello", "world") << endl;

    return 0;
}
