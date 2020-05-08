#include<iostream>
#include<string>
#include<algorithm>

int main() {
    std::string sx = "I am a c++ std:string";

    char *str = "I am also a string, specificly pointer string, but it is more usefull using c++ string";

    std::cout << sx << "\n";
    std::cout << str << "\n";

    std::cout << sx.size() << "\n";

    std::string s;
    s = s + "string " + "c++ " + "move";

    std::cout << s << "\n";
    
    s += " C" ;
    s.append(" Random");

    std::cout << s << "\n";

    std::string temp =  sx.substr(7, sx.length());

    std::cout << temp << "\n";

    std::cout << std::boolalpha;

    std::cout << (typeid(temp) == typeid(std::string)) << std::endl;

    std::string raw=  R"(C:\Windows\system32\temp)";
    std::cout << raw << "\n";

    return 0;
}