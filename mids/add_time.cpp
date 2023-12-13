#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
public:
    Time()
    {
        hours = 0;
        minutes = 0;
    };
    Time(int a1, int a2)
    {
        hours = a1;
        minutes = a2;
    };
    void setTime()
    {
        cout << "Enter hours " << endl;
        cin >> hours;
        cout << "Enter minutes " << endl;
        cin >> minutes;
    };
    void showTime() const
    {
        cout << "The Time is " << hours << ": " << minutes << endl;
    };
    Time addTime(Time)const;
};
Time Time::addTime(Time t)const
{
    Time temp;
    temp.minutes = minutes + t.minutes;
    if (temp.minutes >= 60)
    {
        temp.minutes = temp.minutes - 60;
        temp.hours = 1;
    }
    temp.hours = temp.hours + hours + t.hours;
    return temp;
}
int main()
{
    Time t1, t3;
    t1.setTime();
    Time t2(12, 13);
    t3 = t1.addTime(t2);
    t3.showTime();

    return 0;
}