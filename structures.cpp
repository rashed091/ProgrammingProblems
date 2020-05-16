#include<iostream>
#include<string>
#include <tuple>
#include <iterator>
#include<cmath>

struct Reprot
{
    std::string date;
    size_t cases;
    size_t deaths;
    /* data */
};


std::pair<bool, std::pair<double, double>> quadratic(int a, int b, int c) {
    double D = b*b - 4*a*c;
    std::pair<double, double> blank;
    if (D < 0) return std::make_pair(false, blank);

    std::pair<double, double> answer = std::make_pair((-b + sqrt(D)) / 2, (-b-sqrt(D)) / 2);
    return std::make_pair(true, answer);
}

int main() {
    Reprot current;
    current.date = "2020-05-15";
    current.cases = 11000;
    current.deaths = 298;

    std::cout << current.date << std::endl;

    // pair and tuple are structs with standardized names
    std::pair<bool, Reprot> query_result;
    query_result.first = true;
    query_result.second = current;
    Reprot result = query_result.second;

    std::cout << result.cases << std::endl;

    std::tuple<std::string, size_t, size_t> report;
    report = std::make_tuple("Rashed", 31, 2020);
    size_t cases = std::get<1>(report);

    auto [name, age, year] = report;
    
    std::cout << cases  << " " << name << std::endl;
    
    // Quadratic function
    int a, b, c;
    std::cin >> a >> b >> c;
    auto [found, solution] = quadratic(a, b, c);
    if (found) {
        auto [x1, x2] = solution;
        std::cout << x1 << " "<< x2 << std::endl;
    } else {
        std::cout << "No Solution!\n";
    }

    return 0;
}
