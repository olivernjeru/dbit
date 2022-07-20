#include <iostream>

using namespace std;

int main()
{
    int Multidimentionalarray[2][2]={{3,4},{2,3}};
    cout<<Multidimentionalarray [0][0]<<"   "<<Multidimentionalarray[0][1]<<endl<<Multidimentionalarray[1][0]<<"   "<<Multidimentionalarray[1][1]<<endl;
    int determinantofthematrix;
    determinantofthematrix=(Multidimentionalarray [0][0]*Multidimentionalarray[1][1])-(Multidimentionalarray[0][1]*Multidimentionalarray[1][0]);
    cout<<"The Determinant of the matrix is "<<determinantofthematrix<<endl;
    double oneoverdeterminant;
    oneoverdeterminant=1/determinantofthematrix;
    int oneoverdeterminantmultipliedbyd;
    oneoverdeterminantmultipliedbyd=oneoverdeterminant*Multidimentionalarray[1][1];
    int oneoverdeterminantmultipliedbyminusb;
    oneoverdeterminantmultipliedbyminusb=oneoverdeterminant*-Multidimentionalarray[0][1];
    int oneoverdeterminantmultipliedbyminusc;
    oneoverdeterminantmultipliedbyminusc=oneoverdeterminant*-Multidimentionalarray[1][0];
    int oneoverdeterminantmultipliedbya;
    oneoverdeterminantmultipliedbya=oneoverdeterminant*Multidimentionalarray[0][0];
    cout<<oneoverdeterminantmultipliedbyd<<"  "<<oneoverdeterminantmultipliedbyminusb<<endl<<oneoverdeterminantmultipliedbyminusc<<"  "<<oneoverdeterminantmultipliedbya<<endl;
    return 0;
}
