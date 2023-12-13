#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    int Area, Perimeter;
    public:
    Rectangle(){
        length=0;
        width=0;
    }
    void set_length(int len){
        if (len>0 && len<21)
        {
            length=len;
        }
        else
        {
            cout<<"Invalid length"<<endl;
        }
        
        
    }
    void set_width(int wid){
        if (wid>0 && wid<21)
        {
            width=wid;
        }
        else
        {
            cout<<"Invalid legnth"<<endl;
        }
        
        
    }
    void Showlen_wid(){
        cout<<"length is "<<length<<" and width is "<<width<<endl;
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
    Rectangle r;
    r.set_length(9);
    r.set_width(8);
    r.display_area();
    r.display_perimeter();
    r.Showlen_wid();
    return 0;
}