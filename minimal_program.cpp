#include<iostream>
#include<string>

int main() {
    std::cout << "Enter you name: " << "\n";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "You entered: " << name << "\n";
    
    return 0;
}