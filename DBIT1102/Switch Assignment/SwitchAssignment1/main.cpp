#include <iostream>

using namespace std;

int main()
{
    int Strathmore_University=1;
    int Langata=2;
    int Karen=3;
    int Rongai=4;
    char Choice;
    cout << "1-Strathmore University" << endl;
    cout << "2-Langata" << endl;
    cout << "3-Karen" << endl;
    cout << "4-Rongai" << endl;
    cout << "Please Enter a Number Corresponding To Your Destination" << endl;
    cin>>Choice;
    switch(Choice){
    case'1':
    cout<<"Take a matatu number 16 and alight at the last bus stop";
    break;
    case'2':
    cout<<"Take a matatu number 17 and alight at the last bus stop";
    break;
    case'3':
    cout<<"Take a matatu number 18 and alight at the last bus stop";
    break;
    case'4':
    cout<<"Take a matatu number 19 and alight at the last bus stop";
    break;
    default:
        cout<<"Please choose from the list displayed";
        break;
    }
    return 0;
}
