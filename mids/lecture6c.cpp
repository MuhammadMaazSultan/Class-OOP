#include<iostream>
#include<string>
using namespace std;
class Date {
public:
    Date(int mn, int dy, int yr);
    void print() const;
    ~Date();

private:
    int month;
    int day;
    int year;
    int checkDay(int testDay) const;
};
Date::Date(int mn, int dy, int yr) {
    if (mn > 0 && mn <= 12)
        month = mn;
    else {
        month = 1;
        cout << "Invalid month; set to 1\n";
    }
    year = yr;
    day = checkDay(dy);
    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

void Date::print() const {
    cout << month << '/' << day << '/' << year;
}

Date::~Date() {
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

int Date::checkDay(int testDay) const {
    const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    cout << "Invalid Day; set to 1\n";
    return 1;
}
class Employee {
public:
    Employee(const string &, const string &, const Date &, const Date &);
    void print() const;
    ~Employee();

private:
    string firstName;
    string lastName;
    const Date birthDate;
    const Date hireDate;
};
Employee::Employee(const string &first, const string &last, const Date &dateOfBirth, const Date &dateOfHire)
    : firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire) {
    cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

void Employee::print() const {
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}
using namespace std;
int main() {
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);
    cout << endl;
    manager.print();

    return 0;
}