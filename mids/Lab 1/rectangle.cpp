#include <iostream>
using namespace std;
struct Rectangle
{
    int width, length;
    void get_rec()
    {
        cout << "Enter length of Rectangle " << endl;
        cin >> length;
        cout << "Enter width of Rectangle " << endl;
        cin >> width;
    }
    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length * width);
    }
    int compare(Rectangle r)
    {
        if (area() > r.area())
        {
            cout << "First Rectangle is greater than second one" << endl;
        }
        else
        {
            cout << "Second Rectangle is greater than first one" << endl;
        }
    }
};
int main()
{
    Rectangle r1, r2;
    r1.get_rec();
    cout << "area = " << r1.area() << endl;
    cout << "perimeter = " << r1.perimeter() << endl;
    r2.get_rec();
    r1.compare(r2);
    return 0;
}