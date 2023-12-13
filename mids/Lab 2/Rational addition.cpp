#include <iostream>
using namespace std;
class Rational
{
private:
    float p;
    float q;

public:
    Rational()
    {
        p = 0;
        q = 0;
    }
    Rational(int a, int b)
    {
        p = a;
        q = b;
    }
    Rational addpq(Rational);
    Rational divpq(Rational);
    Rational subpq(Rational);
    Rational mulpq(Rational);
};
Rational Rational::addpq(Rational r)
{
    Rational temp;
    temp.p = p + r.p;
    temp.q = q + r.q;
    cout << "Addition is " << temp.p << "/" << temp.q << " = " << temp.p / temp.q << endl;
    return temp;
}
Rational Rational::divpq(Rational r)
{
    Rational temp;
    temp.p = p / r.p;
    temp.q = q / r.q;
    cout << "Division is " << temp.p << "/" << temp.q << " = " << temp.p / temp.q << endl;
    return temp;
}
Rational Rational::subpq(Rational r)
{
    Rational temp;
    temp.p = p - r.p;
    temp.q = q - r.q;
    cout << "Substraction is " << temp.p << "/" << temp.q << " = " << temp.p / temp.q << endl;
    return temp;
}
Rational Rational::mulpq(Rational r)
{
    Rational temp;
    temp.p = p * r.p;
    temp.q = q * r.q;
    cout << "Multiplication is " << temp.p << "/" << temp.q << " = " << temp.p / temp.q << endl;
    return temp;
}
int main()
{
    Rational r3, r4, r5, r6;
    Rational r1(24, 48);
    Rational r2(4, 8);
    r3 = r1.addpq(r2);
    r4 = r1.subpq(r2);
    r5 = r1.mulpq(r2);
    r6 = r1.divpq(r2);
    return 0;
}
