#include <iostream>

using namespace std;

int main()
{
    cout << "This program converts gallons to cubic feet "<< endl;
         << "Enter the number of cubic feet:" << endl ;
         int gallons;
         int cubicFeet ;
         cin >> cubicFeet ;
         gallons = cubicFeet*7.481 ;
         cout << gallons ;
    return 0;
}
