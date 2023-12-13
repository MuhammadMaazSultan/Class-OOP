#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point();
    void set(int x1, int y1);
    void get();
    ~Point();
};

Point::Point()
{
    x = 0;
    y = 0;
    cout << "constructor for point" << x << "," << y << endl;
}

Point::~Point()
{
    cout << "Destructor for point" << x << "," << y << endl;
}

void Point::set(int x1, int y1)
{
    x = x1;
    y = y1;
}

void Point::get()
{
    cout << "(" << x << "," << y << ")" << endl;
}
class Circle
{
private:
    Point center;
    int radius;

public:
    Circle();
    ~Circle();
};

Circle::Circle()
{
    radius = 0;
    cout << "Constructor for circle";
    center.get();
    cout << " " << radius << endl;
}

Circle::~Circle()
{
    cout << "Destructor for circle ";
    center.get();
    cout << " " << radius << endl;
}

int main()
{
    Circle c;
    return 0;
}