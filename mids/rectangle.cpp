#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    int Area;
    int Perimeter;
    public:
    void set_length_width(){
        cout<<"Enter length"<<endl;
        cin>>length;
        cout<<"Enter width "<<endl;
        cin>>width;
    }
    void display_area(){
        Area=length*width;
        cout<<"Area is "<<Area<<endl;
    }
    void display_perimeter(){
        Perimeter=2*(length*width);
        cout<<"Perimeter is "<<Perimeter<<endl;
    }
    
};
int main()
{
    Rectangle r1;
    r1.set_length_width();
    r1.display_area();
    r1.display_perimeter();
    return 0;
}