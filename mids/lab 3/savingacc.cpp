#include <iostream>
using namespace std;
class SavAcc
{
private:
    double savingbalance;
    double anrate;

public:
    SavAcc()
    {
        savingbalance = 0;
        anrate = 0;
    }
    SavAcc(int x, int y)
    {
        savingbalance = x;
        anrate = y;
    }
    void setinfo()
    {
        cout << "Please input saving balance" << endl;
        cin >> savingbalance;
        cout << "Please input annual interest rate" << endl;
        cin >> anrate;
    }
    double getinfo()
    {
        return savingbalance, anrate;
    }
    double monthlyInterestRate()
    {
        double monintrate = (savingbalance + anrate) / 12;
        savingbalance = savingbalance + monintrate;
        cout << "Monthly Interest rate has been set to " << monintrate << " and your New Balance is " << savingbalance << endl;
    }
};
int main()
{
    SavAcc a1(2000, 26);
    a1.monthlyInterestRate();
    return 0;
}