#include <iostream>

using namespace std;

int main()
{
    int x1=1;
    int x3=2;
    int x4=3;
    int Rongai=4;
    char Choice;
    cout << "Input the value of x:" << endl;
    cin>>Choice;
    switch(Choice){
    case'1':
    cout<<"It's a busy Day!";
    break;
    case'3':
    cout<<"Good!";
    break;
    case'4':
    cout<<"Good!";
    break;
    default:
        cout<<"All right!";
        break;
    }
    return 0;
}
