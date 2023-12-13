#include <iostream>
#include <string>
using namespace std;
class Gradebook
{
private:
    string Coursename;

public:
    void set_name()
    {
        cout << "Enter Name of your course" << endl;
        cin >> Coursename;
    }
    string get_name()
    {
        return Coursename;
    }
    void display_msg()
    {
        cout << "Welcome to the Gradebook for " << Coursename << endl;
    }
};
int main()
{
    Gradebook myGradebook;
    myGradebook.set_name();
    myGradebook.display_msg();
    return 0;
}