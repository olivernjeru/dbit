#include <iostream>
#include <cmath>
using namespace std;
int hypotenuse(double hypotenuse1,double base,double height,double powerforbase,double powerforheight,double additionforpowers){
    powerforbase=pow(base,2);
    powerforheight=pow(height,2);
    additionforpowers=powerforbase+powerforheight;
hypotenuse1=sqrt(additionforpowers);
return hypotenuse1;
}
int main()
{
    double hypotenuse1;
    double base;
    double height;
    double powerforbase;
    double powerforheight;
    double additionforpowers;
    cout<<"Input Base"<<endl;
    cin>>base;
    cout<<"Input Height"<<endl;
    cin>>height;
    powerforbase=pow(base,2);
    powerforheight=pow(height,2);
    additionforpowers=powerforbase+powerforheight;
    hypotenuse1=sqrt(additionforpowers);
    cout <<"The Hypotenuse is: "<<hypotenuse1 << endl;
    return 0;
}
