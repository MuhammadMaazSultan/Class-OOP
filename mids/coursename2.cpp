#include <iostream>
#include <string>
using namespace std;
class Gradebook
{
private:
    string Coursename;

public:
    void set_name(string a1)
    {
        Coursename = a1;
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
    string nameofcourse;
    cout << "Enter name of your course " << endl;
    getline(cin, nameofcourse);
    Gradebook myGradebook;
    myGradebook.set_name(nameofcourse);
    myGradebook.display_msg();
    return 0;
}