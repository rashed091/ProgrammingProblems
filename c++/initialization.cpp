#include<iostream>
#include<string>
#include<iterator>
#include<vector>
using namespace std;


int main() {
    // pair<bool, int> some_pair = make_pair(false, 6);
    pair<bool, int> some_pair{false, 6};
    cout << some_pair.first << " - "<< some_pair.second << endl;

    vector<int> vec{3, 5, 6};

    return 0;
}
