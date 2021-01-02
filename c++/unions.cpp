#include <bits/stdc++.h>
using namespace std;

union Foo
{
    int a;
    double b;
};

int main()
{
    cout << (sizeof(Foo) == 8) << endl;
    Foo f;
    f.a = 1;
    cout << f.a << endl;

    return 0;
}
