#include <iostream>
#include <string>
using namespace std;
class Gradebook
{
public:
    void display_msg(string Coursename)
    {
        cout << "Welcome to the Gradebook for " << Coursename << endl;
    }
};
int main()
{
    string nameofcourse;
    Gradebook myGradebook;
    cout << "Enter name of your course" << endl;
    getline(cin, nameofcourse);
    myGradebook.display_msg(nameofcourse);
    return 0;
}