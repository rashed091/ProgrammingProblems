#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    std::string ops = true ? "true" : "false";
    std::cout <<  ops << "\n";
    std::cout << sizeof(bool) << "\n";

    std::vector<int> num{1, 2, 45, 55, 67, 98};
    if(auto it = std::find_if(num.begin(), num.end(), [](int x) {return x % 11 == 0; }); it != num.end()) {
        std::cout << "Found it: " << *it << "\n";
    }

    return 0;
}