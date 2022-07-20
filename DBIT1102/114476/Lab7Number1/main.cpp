#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 Numbers"<<endl;
    for(int i=0;i<10;i++){
            cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=9;i++){

    sum=sum+arr[i];
    cout<<"The Number You Entered is: "<<arr[i]<<endl;
    }
cout<<"The Sum is: "<<sum<<endl;
return 0;
}

