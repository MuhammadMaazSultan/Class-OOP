#include <iostream>
using namespace std;
class Account
{
private:
    double balance;

public:
    Account()
    {
        balance = 0;
    }
    Account(int a)
    {
        if (a >= 0)
        {
            balance = a;
        }
        else
        {
            cout << "invalid blance";
        }
    }
    void credit(int b)
    {
        if (b > 0)
        {
            balance = balance + b;
            cout << "Now your total balance is " << balance;
        }
        else
        {
            cout << "invlaid balance input";
        }
    }
    void debit(int c)
    {
        if (c <= balance)
        {
            balance = balance - c;
            cout << "Your debited amount is " << c << endl;
            cout << "Your remaining balance is " << balance;
        }
        else
        {
            cout << "Invalid withdrawal input";
        }
    }
    double getbalance()
    {
        return balance;
    }
};
int main()
{
    Account a(1000);
    a.credit(60000);
    cout << endl;
    a.debit(5000);
    cout << endl;
    a.getbalance();
    return 0;
}