#include <iostream>

using namespace std;

int main()
{
    int counter=21;
    int sum=0;
    do {
        sum= sum +counter;
        counter++;
    }while(counter <25);
    cout << sum << endl;
    return 0;
}
