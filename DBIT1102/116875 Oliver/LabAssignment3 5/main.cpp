#include <iostream>

using namespace std;

int main()
{
    int admissionnumber;
    string surname;
    int mathematics;
    int programming;
    int it;
    char Grade;
    double averagemark;
    cout<<"Input Student's Admission Number\n";
    cin>>admissionnumber;
    cout<<"Input Student's Surname\n";
    cin>>surname;
    cout<<"Input Student's Mathematics Marks\n";
    cin>>mathematics;
    cout<<"Input Student's Programming Marks\n";
    cin>>programming;
    cout<<"Input Student's IT Marks\n";
    cin>>it;
    averagemark=(mathematics+programming+it)/3;
    if(averagemark<=100 && averagemark>=70)
        cout<<"Student's Admission Number\n"<<admissionnumber
        <<"Student's Surname\n"<<surname
        <<"Student's Mathematics Marks\n"<<mathematics
        <<"Student's Programming Marks\n"<<programming
        <<"Student's IT Marks\n"<<it
        <<"Student;s Average Mark\n"<<averagemark
        <<"Student's Grade\n"<<Grade<<'A'<<endl;

    else if(60<=averagemark<=69)

 cout<<"Student's Admission Number\n"<<admissionnumber
 <<"Student's Surname\n"<<surname
 <<"Student's Mathematics Marks\n"<<mathematics
 <<"Student's Programming Marks\n"<<programming
 <<"Student's IT Marks\n"<<it
 <<"Student;s Average Mark\n"<<averagemark
 <<"Student's Grade\n"<<Grade<<'B'<<endl;
       else if(50<=averagemark<=59)
 cout<<"Student's Admission Number\n"<<admissionnumber
 <<"Student's Surname\n"<<surname
 <<"Student's Mathematics Marks\n"<<mathematics
 <<"Student's Programming Marks\n"<<programming
 <<"Student's IT Marks\n"<<it<<"Student;s Average Mark\n"<<averagemark
 <<"Student's Grade\n"<<Grade<<'C'<<endl;
       else if(0<=averagemark<=50)

         cout<<"Student's Admission Number\n"<<admissionnumber
         <<"Student's Surname\n"<<surname
         <<"Student's Mathematics Marks\n"<<mathematics
         <<"Student's Programming Marks\n"<<programming
         <<"Student's IT Marks\n"<<it<<"Students Average Mark\n"<<averagemark
         <<"Student's Grade\n"<<Grade<<'D'<<endl;
        else

 cout<<"Student's Admission Number\n"<<admissionnumber
 <<"Student's Surname\n"<<surname
 <<"Student's Mathematics Marks\n"<<mathematics
 <<"Student's Programming Marks\n"<<programming
 <<"Student's IT Marks\n"<<it
 <<"Student;s Average Mark\n"<<averagemark
 <<"Student's Grade\n"<<Grade<<'Fail'<<endl;
    return 0;
}
