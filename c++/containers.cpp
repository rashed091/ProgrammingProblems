#include <iostream>
#include <vector>
using namespace std;

void stl_vector()
{
    vector<char> vec{'a', 'b', 'c'};

    vec[0] = 'A';
    cout << vec[vec.size() - 1] << endl;

    for (auto &elem : vec)
    {
        elem--;
    }

    for (auto elem : vec)
        cout << elem << endl;
}

int main()
{
    stl_vector();
    return 0;
}
