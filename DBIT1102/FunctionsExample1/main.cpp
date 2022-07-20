#include <iostream>

using namespace std;

int multiply (int number1, int number2)
{
   int result= number1 * number2;
   return result;}

   int main()



   {
   int mynumberOne, mynumberTwo;
   cin>>mynumberOne>>mynumberTwo;
   int myResult=multiply(mynumberOne,mynumberTwo);
   cout<<myResult;
   return 0;
   }
