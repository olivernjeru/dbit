#include <iostream>

using namespace std;

int main()
{
  cout<<"FOR LOOP"<<endl;
    for (int counter=1;counter<11;counter++){
        cout<<counter<<endl;
    }

      cout<<"WHILE LOOP"<<endl;
    int counter2 = 1;
    while(counter2<11){
        cout<<counter2<<endl;
        counter2++;
    }

    cout<<"DO ... WHILE LOOP"<<endl;
    int counter3 = 1;
    do{
        cout<<counter3<<endl;
        counter3++;
    }while(counter3<10);


    return 0;
}
