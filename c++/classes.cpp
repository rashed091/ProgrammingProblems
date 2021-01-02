#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    /* data */
    int x_;
    int y_;

public:
    Point();
    ~Point() = default;
    Point(const Point &copy);
    Point(const int x, const int y);
    Point &operator=(const Point &rhs);
    int get_x() const { return x_; }
    int get_y() const { return y_; }
    double Distance(const Point &p) const;
    void SetLocation(const int x, const int y);
};

Point::Point()
{
    x_ = 0;
    y_ = 0;
}

Point::Point(const Point &copy)
{
    x_ = copy.x_;
    y_ = copy.y_;
}

Point &Point::operator=(const Point &rhs)
{
    if (this != &rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
    }
    return *this;
}

Point::Point(const int x, const int y) : x_(x), y_(y) {}

int main()
{
    Point p1(1, 3);
    Point p2(p1);
    Point p3;
    p3 = p2;

    return 0;
}
