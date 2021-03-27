#include <bits/stdc++.h>
using namespace std;

struct Node
{
    shared_ptr<Node> next;
    weak_ptr<Node> prev;
};

int main()
{
    shared_ptr<int> x(new int(6));

    {
        shared_ptr<int> y = x;
        cout << *y << endl;
    }
    cout << *x << endl;

    vector<shared_ptr<int>> vec;
    vec.push_back(shared_ptr<int>(new int(9)));
    vec.push_back(shared_ptr<int>(new int(5)));
    vec.push_back(shared_ptr<int>(new int(7)));
    vec.push_back(shared_ptr<int>(new int(1)));

    int &z = *vec[1];
    cout << z << endl;

    shared_ptr<int> copied = vec[1];
    cout << *copied << endl;

    shared_ptr<int> moved = move(vec[1]);
    cout << *moved << endl;
    cout << vec[1].get() << endl;

    shared_ptr<Node> head(new Node());
    head->next = shared_ptr<Node>(new Node());
    head->next->prev = head;

    return 0;
}
