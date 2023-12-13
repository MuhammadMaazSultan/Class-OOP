#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "enter the month between (1-12)" << endl;
    cin >> month;

    if (month >= 1 && month <= 12)
    {
        if (month = 1)
        {
            cout << "january" << endl;
        }
        else if (month = 2)
        {
            cout << "february" << endl;
        }
        else if (month = 3)
        {
            cout << "march" << endl;
        }
        else if (month = 4)
        {
            cout << "april" << endl;
        }
        else 
        {
            cout << "may" << endl;
        }
    }
    else {
    	cout<<"Invlaid month input";
	}
    return 0;
}