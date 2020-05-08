#include<iostream>
#include<iomanip>
#include<sstream>

int main() {
    std::stringstream ss;
    ss << "Hello, world" << "\n";
    ss << "Pi = " << 3.1416 << "\n";
    ss << std::fixed << std::setprecision(3) <<  "g = " << 9.1523461 << "\n";

    std::cout << ss.str() ;
    ss.str("");
    std::cout << ss.str() ;

    return 0;
}