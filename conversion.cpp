#include<iostream>

int main() {
    int v1 = static_cast<int> (3.4);
    double v2 = 6;

    const int v3 = 3;
    int v4 = const_cast<int> (v3);

    return 0;
}