#include <iostream>

using namespace std;

double trianglearea(float base,float height)
{ double area=0.5*base*height;
   return area;}
   int main()
   {
       float base;
       float height;
       cin>>base>>height;
       double area=trianglearea(base,height);
       cout<<area;
       return 0;
   }
