#include <iostream>

using namespace std;
float maximumnumber()
{
float arr[10];
for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
        int temp;
        if(arr[i]>arr[j]){
            temp=arr[i];arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
   return 0;
}
float minimumnumber()
{
    int array1[10];
    if((array1[0]<array1[1]) && (array1[0]<array1[2]) &&(array1[0]<array1[3]) &&(array1[0]<array1[4]) &&(array1[0]<array1[5]) &&(array1[0]<array1[6])&&(array1[0]<array1[7])&&(array1[0]<array1[8])&&(array1[0]<array1[9])){
   cout<<array1[0]<<endl;
   }   else
if((array1[1]<array1[0]) && (array1[1]<array1[2]) &&(array1[1]<array1[3]) &&(array1[1]<array1[4]) &&(array1[1]<array1[5]) &&(array1[1]<array1[6])&&(array1[1]<array1[7])&&(array1[1]<array1[8])&&(array1[1]<array1[9])){
   cout<<array1[1]<<endl;}
   else
    if((array1[2]<array1[0]) && (array1[2]<array1[1]) &&(array1[2]<array1[3]) &&(array1[2]<array1[4]) &&(array1[2]<array1[5]) &&(array1[2]<array1[6])&&(array1[2]<array1[7])&&(array1[2]<array1[8])&&(array1[2]<array1[9])){
   cout<<array1[2]<<endl;
   }

   else
    if((array1[3]<array1[0]) && (array1[3]<array1[1]) &&(array1[3]<array1[2]) &&(array1[3]<array1[4]) &&(array1[3]<array1[5]) &&(array1[3]<array1[6])&&(array1[3]<array1[7])&&(array1[3]<array1[8])&&(array1[3]<array1[9])){
   cout<<array1[3]<<endl;
   }

   else
    if((array1[4]<array1[0]) && (array1[4]<array1[1]) &&(array1[4]<array1[2]) &&(array1[4]<array1[3]) &&(array1[4]<array1[5]) &&(array1[4]<array1[6])&&(array1[4]<array1[7])&&(array1[4]<array1[8])&&(array1[4]<array1[9])){
   cout<<array1[4]<<endl;
   }

   else
    if((array1[5]<array1[0]) && (array1[5]<array1[1]) &&(array1[5]<array1[2]) &&(array1[5]<array1[3]) &&(array1[5]<array1[4]) &&(array1[5]<array1[6])&&(array1[5]<array1[7])&&(array1[5]<array1[8])&&(array1[5]<array1[9])){
   cout<<array1[5]<<endl;
   }

   else
    if((array1[6]<array1[0]) && (array1[6]<array1[1]) &&(array1[6]<array1[2]) &&(array1[6]<array1[3]) &&(array1[6]<array1[4]) &&(array1[6]<array1[5])&&(array1[6]<array1[7])&&(array1[6]<array1[8])&&(array1[6]<array1[9])){
   cout<<array1[6]<<endl;
   }

   else
    if((array1[7]<array1[0]) && (array1[7]<array1[1]) &&(array1[7]<array1[2]) &&(array1[7]<array1[3]) &&(array1[7]<array1[4]) &&(array1[7]<array1[5])&&(array1[7]<array1[6])&&(array1[7]<array1[8])&&(array1[7]<array1[9])){
   cout<<array1[7]<<endl;
   }
   else
    if((array1[8]<array1[0]) && (array1[8]<array1[1]) &&(array1[8]<array1[2]) &&(array1[8]<array1[3]) &&(array1[8]<array1[4]) &&(array1[8]<array1[5])&&(array1[8]<array1[6])&&(array1[8]<array1[8])&&(array1[7]<array1[9])){
   cout<<array1[8]<<endl;
   }
   else
    if((array1[9]<array1[0]) && (array1[9]<array1[1]) &&(array1[9]<array1[2]) &&(array1[9]<array1[3]) &&(array1[9]<array1[4]) &&(array1[9]<array1[5])&&(array1[9]<array1[6])&&(array1[9]<array1[7])&&(array1[9]<array1[8])){
   cout<<array1[9]<<endl;
   }
return 0;
}
int main()
{

    float arr[10];
    cout<<"Enter 10 Numbers To Determine The Maximum Number:"<<endl;
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
cout<<"Maximum :"<<maximumnumber(arr);
    return 0;
}
