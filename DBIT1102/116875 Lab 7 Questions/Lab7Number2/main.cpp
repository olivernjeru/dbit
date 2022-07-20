#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter 10 Numbers"<<endl;
    for(int i=0;i<10;i++){
            cin>>arr[i];
    }
    for(int i=0;i<=10;i++){
            if(arr[i]<=5){

        cout<<arr[i]<<endl;
            }

    }
    return 0;
}
