#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float digit;
    double squarerootofdigit;
    double digitraisedtopower5;
    cout << "Input Integer" << endl;
    cin>>digit;
    squarerootofdigit=sqrt(digit);
    digitraisedtopower5=pow(digit,5);
    cout<<"The Square Root of The Integer is:"<< squarerootofdigit<<endl;
    cout<<"The Integer Raised to Power 5 is:"<< digitraisedtopower5<<endl;
    return 0;
}
