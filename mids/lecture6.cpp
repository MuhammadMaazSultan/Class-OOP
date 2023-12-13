#include <iostream>
#include <string>
using namespace std;
class Date
{

public:
    Date(int dy, int mn, int yr);
    void print() const;
    ~Date();

private:
    int day;
    int month;
    int year;
    int checkday(int testday) const;
};

Date::Date(int dy, int mn, int yr)
{
    day = checkday(dy);
    if (mn > 0 && mn < 12)
    {
        month = mn;
    }
    else
    {
        cout << "Invalid Month, set to 1\n";
    }
    year = yr;
}

void Date::print() const
{
    cout << day << '/' << month << '/' << year << endl;
}
int Date::checkday(int testday) const
{
    int daysofmonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (testday > 0 && testday <= daysofmonth[month])
    {
        return testday;
    }
    if (month == 2 && testday == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        return testday;
    }
    cout << "Invalid Day; set to 1\n";
    return 1;
}
Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

class Employee
{

public:
    Employee(const string &, const string &, const Date &, const Date &);
    void print() const;
    ~Employee();

private:
    const string firstname;
    const string lastname;
    const Date birthdate;
    const Date hiredate;
};

Employee::Employee(const string &fn, const string &ln, const Date &bd, const Date &hd) : firstname(fn), lastname(ln), birthdate(bd), hiredate(hd)
{
    cout << "Employee object constructor" << firstname << lastname << endl;
}
void Employee::print() const
{
    cout << firstname << ", " << lastname << " Hired";
    hiredate.print();
    cout << "Birthday";
    birthdate.print();
    cout << "endl";
}
Employee::~Employee()
{
    cout << "Employee object destructor: " << lastname << ", " << firstname << endl;
}

int main()
{
    Date birth(25, 9, 2006);
    Date hire(25, 9, 2006);
    Employee manager("Maaz", "Sultan", birth, hire);
    manager.print();
    return 0;
}