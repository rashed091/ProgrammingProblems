#include<iostream>
#include<string>
#include<tuple>
#include<iterator>
#include<cmath>
using namespace std;
struct Student
{
    string name;
    size_t age;
    string state;
    /* data */
};

void printStudentInfo(Student student) {
    cout << student.name << " from " << student.state << " (" << student.age << ")" << endl;
}


pair<bool, pair<double, double>> quadratic(int a, int b, int c) {
    double D = b*b - 4*a*c;
    pair<double, double> blank;
    if (D < 0) return make_pair(false, blank);

    pair<double, double> answer = make_pair((-b + sqrt(D)) / 2, (-b-sqrt(D)) / 2);
    return make_pair(true, answer);
}

int main() {
    Student s;
    s.name = "Rashed";
    s.age = 31;
    s.state = "Kushtia";

    cout << s.name << endl;

    // pair and tuple are structs with standardized names
    pair<bool, Student> query_result;
    query_result.first = true;
    query_result.second = s;
    Student result = query_result.second;

    cout << result.name << endl;

    // Quadratic function
    int a, b, c;
    cin >> a >> b >> c;
    auto [found, solution] = quadratic(a, b, c);
    if (found) {
        auto [x1, x2] = solution;
        cout << x1 << " "<< x2 << endl;
    } else {
        cout << "No Solution!\n";
    }

    return 0;
}
