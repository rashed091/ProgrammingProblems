#include <bits/stdc++.h>
using namespace std;

int main()
{
    weak_ptr<int> w;
    {
        shared_ptr<int> x;
        {
            shared_ptr<int> y(new int(10));
            w = y;
            x = w.lock();
            cout << *x << endl;
        }
        cout << *x << endl;
    }
    shared_ptr<int> a = w.lock();
    cout << a << endl;

    return 0;
}
