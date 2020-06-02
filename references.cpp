#include<iostream>
#include<string>
#include<vector>

struct Time
{
    int hour, minute;
};

struct Course
{
    std::string code;
    std::pair<Time, Time> time;
    std::vector<std::string> instructors;
};


std::pair<Course, bool> find(std::vector<Course>& courses, std::string& target) {
    for (size_t i = 0; i < courses.size(); ++i) {
        const auto& [code, time, instructors] = courses[i];
        if (code == target) {
            return {courses[i], true};
        }
    }
    return {{}, true};
}

void shift(std::vector<Course>& courses) {
    for (auto& [code, time, instructors] : courses) {
        time.first.hour++;
        time.second.hour++;
    }
}

void printVec(std::vector<int> v) {
    for (auto i : v) {
        std::cout << i << "\n";
    }
}

void findPriceRange(int dist, int& min, int& max) {
    min = static_cast<int> (dist * 0.08 + 100);
    max = static_cast<int> (dist * 0.36 + 750);
}

std::pair<int, int> findPriceRange(int dist) {
    int min = static_cast<int> (dist * 0.08 + 100);
    int max = static_cast<int> (dist * 0.36 + 750);
    return std::make_pair(min, max);
}

int main() {
    // Course now{"CS106L", { {13, 30}, {14, 30} }, {"Md", "Rashed"} };

    std::vector<int> original{1, 2};
    std::vector<int> copy = original;
    std::vector<int>& lref = original;

    original.push_back(3);
    copy.push_back(4);
    lref.push_back(5);

    lref = copy;
    copy.push_back(6);
    lref.push_back(7);

    printVec(lref);
    int dist = 6452;
    int min, max;
    findPriceRange(dist, min, max);
    std::cout << min << " " << max << std::endl;
    auto p = findPriceRange(dist);
    std::cout << p.first << " " << p.second << std::endl;
}