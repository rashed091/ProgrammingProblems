#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int, vector<int>> stack_v;

    stack_v.push(3);
    stack_v.push(1);

    int value = stack_v.top();
    cout << value << endl;

    return 0;
}
