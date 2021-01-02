#include <bits/stdc++.h>
using namespace std;

namespace A
{
    void foo()
    {
        cout << "Hello" << endl;
    }

    void bar()
    {
        foo();
    }
} // namespace A

namespace B
{
    void foo()
    {
        cout << "Nothing" << endl;
    }
} // namespace B

int main()
{
    A::foo();
    B::foo();

    return 0;
}
