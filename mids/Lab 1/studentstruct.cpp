#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    string regno;
    string fathername;
    string degree;
    string department;
    void viewdetails()
    {
        cout << "Name of student is: " << name << endl
             << "registration no.: " << regno << endl
             << "Father Name: " << fathername << endl
             << "Degree: " << degree << endl
             << "Department: " << department << endl;
    }
    void overwrite()
    {
        cout << "Enter name of student" << endl;
        cin >> name;
        cout << "Enter name of registration no." << endl;
        cin >> regno;
        cout << "Enter name of Father name" << endl;
        cin >> fathername;
        cout << "Enter name of degree" << endl;
        cin >> degree;
        cout << "Enter name of Department" << endl;
        cin >> department;
        cout << "Details are updated; New details are:" << endl;
        viewdetails();
    }
};

int main()
{
    Student s1;
    s1.name = "Maaz";
    s1.regno = "S231152";
    s1.fathername = "Sultan ";
    s1.degree = "BSCS";
    s1.department = "Computer Science";
    s1.viewdetails();
    s1.overwrite();
    return 0;
}