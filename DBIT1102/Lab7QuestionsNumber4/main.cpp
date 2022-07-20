#include <iostream>

using namespace std;
float maximum(float arr[10])
{

    for(int i=0;i<9;i++){
        for(int k=i+1;k<10;k++){
            int temp;
            if(arr[i]>arr[k]){
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
    }
    return 0;
}
float minimum(float arr[])
{
    for(int i=0;i<10;i++){
            for(int k=i+1;k<10;k++){
                int temp;
                if(arr[i]<arr[k]){
                    temp=arr[i];
                    arr[i]=arr[k];
                    arr[k]=temp;
                }
            }
            }
            return 0;
}
int main()
{
    float arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout << "Maximum" << maximum(arr)<<endl;
    cout << "Minimum" << minimum(arr)<<endl;
    return 0;
}
