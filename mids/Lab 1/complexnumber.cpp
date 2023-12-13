#include <iostream>
using namespace std;
struct Complex
{
    int real, imaginary;
    void get_num()
    {
        cout << "Enter real part of number" << endl;
        cin >> real;
        cout << "Enter imaginary part of number" << endl;
        cin >> imaginary;
    }
    int Zero()
    {
        return (real == 0 && imaginary == 0) ? 1 : 0;
    }
    Complex add_complex(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void show_num(){
        cout<<real<<"  "<<imaginary<<endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.get_num();
    cout << "If num is zero than 1 otherwise 0" <<endl<< c1.Zero()<<endl;
    c2.get_num();
    c3 = c1.add_complex(c2);
    cout<<"Addition = ";
    c3.show_num();
    return 0;
}