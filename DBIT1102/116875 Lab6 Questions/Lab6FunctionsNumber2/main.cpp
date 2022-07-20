#include <iostream>

using namespace std;

int area(float length, float width, double areaofrectangle)
{
    areaofrectangle=length*width;
    return areaofrectangle;
}
int perimeter(float length, float width, double addition, double perimeterofrectangle)
{
    addition=length+width;
    perimeterofrectangle=2*addition;
    return perimeterofrectangle;
}
int main()
{
    float length;
    float width;
    double addition;
    double perimeterofrectangle;
    double areaofrectangle;
    cout<<"Input Length"<<endl;cin>>length;
    cout<<"Input Width"<<endl;cin>>width;
    areaofrectangle=length*width;
    cout<<"The Area of the Rectangle is:"<<areaofrectangle<<endl;
    addition=length+width;
    perimeterofrectangle=2*addition;
    cout<<"The Perimeter of the Rectangle is:"<<perimeterofrectangle<<endl;
    return 0;
}
