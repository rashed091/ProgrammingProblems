#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;


bool comparator(char x, char y){
    if (tolower(x) == tolower(y))
        return x < y;
    return tolower(x) < tolower(y);
}

int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        sort(str.begin(), str.end(), comparator);
        do {
            cout << str << endl;
        } while(next_permutation(str.begin(), str.end(), comparator));
    }
    return 0;
}
