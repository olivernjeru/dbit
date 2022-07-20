#include <iostream>

using namespace std;

int main()
{
    int integer1;
    int integer2;
    cout<< "Input First Digit\n";
    cin>>integer1;
    cout<< "Input Second Digit\n";
    cin>>integer2;
    if(integer1>integer2)
        cout<< "The Maximum Value is;"<<integer1<<endl;
    else
        if(integer1==integer2)
            cout<<"The Digits are Equal\n";
    else
    cout<<"The Maximum Value is "<<integer2<<endl;

    return 0;
}
