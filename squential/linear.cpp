#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int item;
    shared_ptr<Node> next;
    Node() : next(nullptr) {}
    Node(int item) : item(item), next(nullptr) {}
};

class Linear
{
public:
    Linear() : head(nullptr) {}
    bool empty() const;
    void insert(int item);
    void remove(size_t index);
    size_t size() const;

private:
    shared_ptr<Node> head;
    size_t count = 0;
};

int main()
{

    return 0;
}
