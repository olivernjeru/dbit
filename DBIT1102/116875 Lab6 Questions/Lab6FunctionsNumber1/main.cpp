#include <iostream>

using namespace std;

void functionmax()
{
int digit1;
int digit2;
int digit3;
if((digit1>digit2)&&(digit1>digit3)){
   cout<<digit1<<endl;
   }else{
       if((digit2>digit1)&&(digit2>digit3)){
   cout<<digit2<<endl;
   }else{
   if((digit3>digit1)&&(digit3>digit2)){
   cout<<digit3<<endl;}
   }
   }
}
int main()
{
    int num1;
int num2;
int num3;
cout<<"Input First Integer: ";cin>>num1;
cout<<"Input Second Integer: ";cin>>num2;
cout<<"Input Third Integer: ";cin>>num3;
if((num1>num2)&&(num1>num3)){
   cout<<"The Greatest Integer is: "<<num1<<endl;
   }else{
       if((num2>num1)&&(num2>num3)){
   cout<<"The Greatest Integer is: "<<num2<<endl;
   }else{
   if((num3>num1)&&(num3>num2)){
   cout<<"The Greatest Integer is: "<<num3<<endl;}
    return 0;
   }
   }
}
