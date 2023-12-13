#include <iostream>
#include <string>
using namespace std;
class date
{
private:
    int month;
    int day;
    int year;

public:
    date();
    date(int x, int y, int z);
    int checkday(int testday);
    void display();
    ~date();
};
date::date(){
    
}
date::date(int x, int y, int z)
{
    if (x > 0 && x < 12)
    {
        month = x;
    }
    else
    {
        cout << "invalid month; set to 1" << endl;
        month = 1;
    }
    year = z;

    day = checkday(y);
    cout<<"Date oject constructor ";
    display();
}
int date::checkday(int testday)
{
    int dayspermonth[13] = {0, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (testday > 0 && testday < dayspermonth[month])
    {
        return testday;
    }
    else
    {
        cout << "No valid day, set to 1";
        return 1;
    }
}
void date::display()
{
    cout << month << " / " << day << " / " << year << endl;
    ;
}

date::~date()
{
    cout<<"Date Object Destructor ";
    display();
}

class employee
{
private:
    string firstname;
    string lastname;
    date hiredate;
    date birthdate;
public:
    employee(string fn, string ln, date hd, date bd);
    void displayemp();
    ~employee();
};

employee::employee(string fn, string ln, date hd, date bd)
{
    firstname=fn;
    lastname=ln;
    hiredate=hd;
    birthdate=bd;
    cout<<"Employee Object Constructor "<<firstname<<"  "<<lastname<<endl;;
    
}
void employee::displayemp(){
    cout<<firstname<<" "<<lastname<<" Hired on ";
    hiredate.display();
    cout<<"birthdate: ";
    birthdate.display();
}

employee::~employee()
{
    cout<<"Employee Object Destructor "<<firstname<<"  "<<lastname<<endl;
}

int main()
{
    date birth(9, 25, 2006);
    date hire(10, 06, 2004);
    employee manager( "Maaz", "Sultan", birth, hire);
    manager.displayemp();
}