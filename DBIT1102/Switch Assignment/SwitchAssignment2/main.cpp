#include <iostream>

using namespace std;

int main()
{
     int Coke=1;
    int Water=2;
    int Sprite=3;
    int Fanta=4;
    int FreshJuice=5;
    char Choice;
    cout << "1-Coke" << endl;
    cout << "2-Water" << endl;
    cout << "3-Sprite" << endl;
    cout << "4-Fanta" << endl;
    cout << "5-Fresh Juice" << endl;
    cout << "Please Enter a Number Corresponding To Your Drink" << endl;
    cin>>Choice;
    switch(Choice){
    case'1':
    cout<<"Coke";
    break;
    case'2':
    cout<<"Water";
    break;
    case'3':
    cout<<"Sprite";
    break;
    case'4':
    cout<<"Fanta";
    break;
     case'5':
    cout<<"Fresh Juice";
    break;
    default:
    cout<<"Error. Choice was not valid;here is your money back.";
    }
    return 0;
}
