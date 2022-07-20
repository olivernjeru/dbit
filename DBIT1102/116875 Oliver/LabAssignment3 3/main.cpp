#include <iostream>

using namespace std;

int main()
{
    int purchases;
    cout<<"Input Purchases\n";
    cin>>purchases;
    if(purchases>30000)
        cout<<"The Selling Price is;"<<0.9*purchases<<endl;
    else
        cout<<"The Selling Price is;"<<0.98*purchases<<endl;
    return 0;
}
