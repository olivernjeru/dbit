#include <iostream>

using namespace std;

int main()
{
    int Physics;
    int Chemistry;
    int Biology;
    int Mathematics;
    int Computer;
    double average;
   // char Grade;
    cout<<"Physics\n";
    cin>>Physics;
    cout<<"Chemistry\n";
    cin>>Chemistry;
    cout<<"Biology";
    cin>>Biology;
    cout<<"Mathematics\n";
    cin>>Mathematics;
    cout<<"Computer\n";
    cin>>Computer;
    average=(Physics+Chemistry+Biology+Mathematics+Computer)/5;
             if(average>=90)
                cout<<"Grade A"<<endl;
                else
                    if(average>=80)
                cout<<"Grade B"<<endl;
                else
                if(average>=70)
                cout<<"Grade C"<<endl;
                else
                if(average>=60)
                cout<<"Grade D"<<endl;
                else
                if(average>=40)
                cout<<"Grade E"<<endl;
                else
                if(average<40)
                cout<<"Grade F"<<endl;
    return 0;
}
