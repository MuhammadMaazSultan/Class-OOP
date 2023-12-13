#include <iostream>
#define pi 3.14
using namespace std;
struct cylinder
{
    int radius, height;
    void get_cylinder()
    {
        cout << "Enter Height of cylinder" << endl;
        cin >> height;
        cout << "Enter radius of cylinder" << endl;
        cin >> radius;
    }
    float surface_area() const
    {
        return (2 * pi * radius * radius) + (2 * pi * radius * height);
    }
    float Volume() const
    {
        return 2 * pi * radius * height;
    }
};

int main()
{
    cylinder c1;
    c1.get_cylinder();
    cout << "Surface area of cylinder = " << c1.surface_area() << endl;
    cout << "Volume of Cylinder = " << c1.Volume() << endl;
    return 0;
}