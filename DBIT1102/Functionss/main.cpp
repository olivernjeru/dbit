#include <iostream>

using namespace std;
void maximumnumber()
{
    int number1;
    int number2;
    int number3;
    cin>>number1;
    cin>>number2;
    cin>>number3;
    if((number1>number2) && (number1>number3))
        cout<<number1<<endl;
    else
        if((number2>number1) && (number2>number3))
        cout<<number2<<endl;
    else
        if((number3>number1) && (number3>number2))
        cout<<number3<<endl;
}
int main()
{
    maximumnumber();
    return 0;
}
