#include <iostream>
using namespace std;
class Distance
{
private:
    int feets;
    int inches;

public:
    Distance()
    {
        feets = 0;
        inches = 0;
    };
    Distance(int a1, int a2)
    {
        feets = a1;
        inches = a2;
    };
    void setDistance()
    {
        cout << "Enter feets " << endl;
        cin >> feets;
        cout << "Enter inches " << endl;
        cin >> inches;
    };
    void showDistance() const
    {
        cout << "The Distance is " << feets << ": " << inches << endl;
    };
    Distance addDistance(Distance);
};
Distance Distance::addDistance(Distance t)
{
    Distance temp;
    temp.inches = inches + t.inches;
    if (temp.inches >= 12)
    {
        temp.inches = temp.inches - 12;
        temp.feets = 1;
    }
    temp.feets= temp.feets + feets + t.feets;
    return temp;
}
int main()
{
    Distance t1, t3;
    t1.setDistance();
    Distance t2(12, 13);
    t3 = t1.addDistance(t2);
    t3.showDistance();

    return 0;
}