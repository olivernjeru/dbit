#include <iostream>

using namespace std;

int main()
{
    double numbers[6]={12.25,32.50,16.90,23,45.68,50.60};
    double averageofnumbers;
    double sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+numbers[i];
    }
    averageofnumbers=sum/6;
    cout << averageofnumbers << endl;
    return 0;
}
