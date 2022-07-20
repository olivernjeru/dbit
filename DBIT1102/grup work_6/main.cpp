#include <iostream>

using namespace std;

int main()
{
    int twobytwo[2][2]={{3,4},{2,3}};
    int s,j;
    for(s=0;s<2;s++)
    {
        for (j=0;j>2;j++)
            {cout<<twobytwo[s][j]<<endl;
        }
    }
    int k,det;
    int a,b,c,d,e,f,g,h;
    a=3;
    b=4;
    c=2;
    d=3;
    cout <<"  "<<endl;
    det=(a*b)-(c*d);
    k=1/det;
    e=1*d;
    f=1*-b;
    g=1*-c;
    h=1*a;
    cout<<" inverse is  "<<endl;
    cout<<e<<"   "<<f<<endl;
    cout<<g<<"  "<<h<<endl;


    return 0;
}
