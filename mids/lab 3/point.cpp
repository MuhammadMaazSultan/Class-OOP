#include <iostream>
#include <math.h>
using namespace std;
class Point
{
private:
    double p1;
    double p2;

public:
    Point()
    {
        p1 = 0;
        p2 = 0;
    }
    Point(double x, double y)
    {
        p1 = x;
        p2 = y;
    }
    void setpoint()
    {
        cout << "Enter Points x-coordinates " << endl;
        cin >> p1;
        cout << "Enter Points y-coordinates " << endl;
        cin >> p2;
    }
    double getpoint()
    {
        return p1, p2;
    }
    double Distance(Point otherpoint)
    {
        double temp;
        temp = sqrt(pow(p1 - otherpoint.p1, 2) + pow(p2 - otherpoint.p2, 2));
        return temp;
    }
    bool isZero()
    {
        return (p1 == 0 && p2 == 0);
    }
    Point MidPoint(Point otherpoint)
    {
        Point temp;
        temp.p1 = (p1 + otherpoint.p1) / 2;
        temp.p2 = (p2 + otherpoint.p2) / 2;
        cout<<"("<<temp.p1<<","<<temp.p2<<")";
        return temp;
    }
    bool Equalto(Point otherpoint)
    {
        return (p1 == otherpoint.p1 && p2 == otherpoint.p2);
    }
    bool isGreaterthan(Point otherpoint)
    {
        return (Distance(Point()) > otherpoint.Distance(Point()));
    }
};
int main()
{
    Point a(2, 3);
    Point b;
    b.setpoint();
    cout << "Distance between two Points is " << a.Distance(b) << endl;
    cout << "Point 1 are at center: " << (a.isZero() ? "Yes" : "NO") << endl;
    cout << "Point 2 are at center: " << (b.isZero() ? "Yes" : "NO") << endl;
    cout << "Mid point of Point 1 and Point 2 is:";
    a.MidPoint(b);
    cout << endl;
    cout << "Points are equal:" << (a.Equalto(b) ? "Yes" : "No") << endl;
    cout << "Point 1 is greater than point 2: " << (a.isGreaterthan(b) ? "Yes" : "NO") << endl;
    cout << "Point 2 is greater than point 2: " << (b.isGreaterthan(a) ? "Yes" : "NO") << endl;
    return 0;
}