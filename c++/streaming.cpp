#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<ios>
#include<vector>

void stream_manipulator() {
    int width = 10;
    std::cout << "[" << std::setw(width) << "HelloHow" << "]" << std::endl;
    std::cout << "[" << std::left << std::setw(10) << "HelloHow" << "]" << std::endl;
    std::cout << "[" << std::left << std::setfill('-') << std::setw(10) << "HelloHow" << "]" << std::endl;

    std::cout << std::hex << 10 << std::endl;
    std::cout << std::oct << 10 << std::endl;
    std::cout << std::dec << 10 << std::endl;

    bool flag = false;
    std::cout << flag << std::endl;
    std::cout << std::boolalpha << flag << std::endl;

    double pi = 3.1416187689123;
    std::cout << pi << std::endl;
    std::cout << std::setprecision(4) << pi << std::endl;
}


void input_output_string_stream() {
    std::ostringstream oss("Ito en Green "); //std::stringstream::ate
    oss << 16.9;
    std::cout << oss.str() << std::endl;

    // std::fpos<size_t> pos = oss.tellp() + std::streamoff(3);
    oss.seekp(7);
    oss << "Black";
    oss.seekp(std::streamoff(1), std::stringstream::cur);
    oss << "Boba";
    std::cout << oss.str() << std::endl;

    std::istringstream iss(oss.str());
    double amount; 
    std::string unit;
    iss >> amount >> unit;

}

void output_stream() {
    std::cout << "CS";
    std::cout << 106;
    std::cout << std::flush;
    std::cout << 'L';
    std::cout << std::endl;

    std::cerr << "CS";
    std::cerr << 106;
    std::cerr << std::flush;
    std::cerr << 'L';
    std::cerr << std::endl;
}

void input_stream() {
    std::string name, response;
    int age;
    getline(std::cin, name, '\n');
    std::cin >> age;
    std::cout << name << age;
    std::cin.ignore();
    getline(std::cin, response, '\n');
}

void tokenizer_stream(std::string str, char delimiter){
    std::string token;
    std::vector<std::string> tokens;

    std::istringstream iss(str);
    while(std::getline(iss, token, delimiter)){
        tokens.push_back(token);
    }
    for(auto it = tokens.begin(); it != tokens.end();)
        std::cout << *it++ << std::endl;
}


int main() {
    // stream_manipulator();
    // input_output_string_stream();
    output_stream();
    input_stream();
    return 0;
}