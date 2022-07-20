#include <iostream>

using namespace std;

bool multiples(){
int digit1;
int digit2;
bool status=true;
if(digit1%digit2>0){
    status=false;
}
return status;
}
int main()
{
    int digit1;
    int digit2;
    cout << "Input First Integer" << endl;
    cin>>digit1;
    cout << "Input Second Integer" << endl;
    cin>>digit2;
     if(digit1%digit2==0){
    cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
     }
    return 0;
}
