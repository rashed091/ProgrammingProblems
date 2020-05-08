#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
#include<cstring>


int main() {
    std::string data = "200 100 300 400 600 500";
    auto ss = std::stringstream(data);
    double x;

    size_t t = 0;
    while (!ss.eof() && !ss.fail())
    {
        ss >> x;
        std::cout << "x["  << t << "] = " << x << "\n";
        t++;
    }

    std::string mesg = "My name is Rashed";
    std::transform(mesg.begin(), mesg.end(), mesg.begin(), [](char ch) { return std::toupper(ch);});

    std::cout << mesg << std::endl;

    return 0;
}