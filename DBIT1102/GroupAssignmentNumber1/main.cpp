#include <iostream>
#include <cmath>

using namespace std;
double root(int a, int b, int c)
{
    double x;
    x=-b+sqrt((pow (b,2))+4*a*c);
    return x;
}
int main()
{
   int a;
   int b;
   int c;
   cout<<"Enter the first value"<<endl;
   cin>>a;
   cout<<"Enter the second value"<<endl;
   cin>>b;
   cout<<"Enter the third value"<<endl;
   cin>>c;
   double roo_t=root(a,b,c);
   cout<<"Value of x is:"<<roo_t<<endl;
    return 0;
}
