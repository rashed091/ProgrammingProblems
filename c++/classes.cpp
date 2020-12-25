#include<bits/stdc++.h>
using namespace std;

class Point {
    int x, y;

    public:
    Point(int x = 0, int y = 0) : x{x}, y{y} {}

    int length2() {
        return x * x + y * y;
    }

};

struct Drived;
struct Base {
    Base() {
        cout << "Base::Base" << endl;
        cout << "I " << (typeid(this) == typeid(Drived *) ? "am" : "am not") << " of type drived" << endl;

        f();
    }

    virtual void f() {
        cout << "Base::f" << endl;
    }
};

struct Drived : Base {
    Drived() {
        cout << "Drived::Drived" << endl;
        cout << "I " << (typeid(this) == typeid(Drived *) ? "am" : "am not") << " of type drived" << endl;

        f();
    }

    virtual void f() {
        cout << "Drived::f" << endl;
    }
};



int main() {
    Drived d;
    return 0;
}
