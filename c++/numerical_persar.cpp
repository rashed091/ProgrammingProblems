#include<iostream>
#include<string>

int main() {
    std::string value = "200";

    std:: cout << std::stoi(value) <<"\n";

    value = "0xFFAB";

    std:: cout << std::stoi(value, nullptr, 10) <<"\n";


    std::string key = "Value: ";
    double x = 200.067;
    
    std::cout << (key + std::to_string(x)) << "\n";

    return 0;
}