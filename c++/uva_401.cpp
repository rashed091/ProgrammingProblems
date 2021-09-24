#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;


bool palindrome(const string& in){
    if (equal(in.begin(), in.begin() +  in.size() / 2, in.rbegin()))
        return true;
    else
        return false;
}

bool mirrored(const map<char, char>& mp, const string& str){
    int size = str.size();
    string mirror_str = "";

    while(size--){
        char key = str[size];
        auto found = mp.find(key);
        if (found != mp.end()){
            mirror_str += found->second;
        }
        else{
            mirror_str += key;
        }
    }
    if (str == mirror_str)
        return true;
    else
        return false;
}


int main(){
    string str;
    string charecter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string reverse   = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char, char> mp;
    
    for(int i = 0; i < charecter.size(); i++)
        mp[charecter[i]] = reverse[i];
    
    while(cin >> str){
        if (!palindrome(str) && !mirrored(mp, str))
            cout << str << " -- is not a palindrome.\n\n";
        else if (palindrome(str) && !mirrored(mp, str))
            cout << str << " -- is a regular palindrome.\n\n";
        else if (!palindrome(str) && mirrored(mp, str))
            cout << str << " -- is a mirrored string.\n\n";
        else  
            cout << str << " -- is a mirrored palindrome.\n\n";
    }

    return 0;
}
