#include <iostream>

using namespace std;

int maximumnumber()
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if( (a > b) && (a > c))
        return a;

        else
        if((b>a) && (b>c))
            return b;

           else
                if((c>a) && (c>b))
                    return c;
                }

    int main()
{
    maximumnumber();
    cout<< maximumnumber <<endl;
    return 0;
}
