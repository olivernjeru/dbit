#include <iostream>

using namespace std;

int main()
{
    int digit;
    int sum=0;
    cout<<"Input Digit"<<endl;
    cin>>digit;
    do{
        sum=sum+digit;

    }while(digit>0);
    cout << sum << endl;
    return 0;
}
