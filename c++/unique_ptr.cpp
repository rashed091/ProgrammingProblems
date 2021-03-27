#include <bits/stdc++.h>
using namespace std;

void leaky()
{
    int *x = new int(5);
    (*x)++;
    cout << *x << endl;
}

void not_leaky()
{
    unique_ptr<int> x(new int(5));
    (*x)++;

    int *ptr = x.get();

    x.reset(new int(1));
    ptr = x.release();
    delete ptr;
}

bool sortFunction(const unique_ptr<int> &x, const unique_ptr<int> &y) { return *x < *y; }
void printFunction(unique_ptr<int> &x) { cout << *x << endl; }

struct MapComp
{
    bool operator()(const unique_ptr<int> &lhs,
                    const unique_ptr<int> &rhs) const { return *lhs < *rhs; }
};

void unique_map()
{
    map<unique_ptr<int>, int, MapComp> a_map;
    unique_ptr<int> a(new int(5));
    unique_ptr<int> b(new int(9));
    unique_ptr<int> c(new int(7));
    a_map[std::move(a)] = 25;
    a_map[std::move(b)] = 81;
    a_map[std::move(c)] = 49;
    // Create the map
    // unique_ptr for key
    // move semantics to get ownership
    // of unique_ptrs into the map.
    // a, b, c hold NULL after this.
    map<unique_ptr<int>, int>::iterator it;
    for (it = a_map.begin(); it != a_map.end(); it++)
    {
        std::cout << "key: " << *(it->first);
        std::cout << " value: " << it->second << std::endl;
    }
}
int main()
{
    leaky();
    not_leaky();
    unique_map();

    vector<unique_ptr<int>> vec;
    vec.push_back(unique_ptr<int>(new int(9)));
    vec.push_back(unique_ptr<int>(new int(5)));
    vec.push_back(unique_ptr<int>(new int(7)));
    vec.push_back(unique_ptr<int>(new int(1)));

    int z = *vec[1];
    cout << z << endl;

    // unique_ptr<int> moved = move(vec[1]);
    // cout << *moved << endl;

    sort(vec.begin(), vec.end(), sortFunction);
    for_each(vec.begin(), vec.end(), &printFunction);

    unique_ptr<int[]> x(new int[5]);

    x[0] = 1;
    x[1] = 2;

    return 0;
}
