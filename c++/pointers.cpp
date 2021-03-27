#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 10;
    int &j = i, k = i;

    vector<unsigned short> a{1, 2, 4, 66, 7, 9};

    for (const unsigned short &e : a)
        cout << e << endl;

    int b = 10;
    const int c = 42;
    int *d = &b;
    const int *e = &c;
    int *f = &b;

    return 0;
}
