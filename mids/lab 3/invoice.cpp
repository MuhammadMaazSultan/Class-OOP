#include <iostream>
#include <string>
using namespace std;
class Invoice
{
private:
    string number;
    string description;
    int quantity;
    int price;

public:
    Invoice()
    {
        number = "123";
        description = "Sample";
        quantity = 0;
        price = 0;
    }
    Invoice(string n, string d, int q = 0, int p = 0)
    {
        number = n;
        description = d;
        quantity = q;
        price = p;
    }
    void set_invoice()
    {
        cout << "please input item number " << endl;
        cin >> number;
        cout << "Please input description of item " << endl;
        cin >> description;
        cout << "Please input qantity of items " << endl;
        cin >> quantity;
        cout << "Please input price of item " << endl;
        cin >> price;
    }
    string get_num_des()
    {
        return number, description;
    }
    int get_qaun_price()
    {
        return quantity, price;
    }
    int getInvoiceAmount()
    {
        int temp;
        if (price < 0)
        {
            cout << "invalid price set to 0" << endl;
            price = 0;
        };
        if (quantity < 0)
        {
            cout << "Invalid quantity set to 0" << endl;
            quantity = 0;
        }
        temp = price * quantity;
        cout << temp;
        return temp;
    }
};
int main()
{
    Invoice i;
    i.set_invoice();
    i.getInvoiceAmount();
    return 0;
}