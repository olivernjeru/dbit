#include <iostream>

using namespace std;

int main()
{
    int studentadmissionnumber;
    cout<<"Enter Student Admission Number"<<endl;
    cin>>studentadmissionnumber;
    string studentsurname;
    cout<<"Enter Student Surname"<<endl;
    cin>>studentsurname;
    double subjectone;
    cout<<"Enter The First Subject Score"<<endl;
    cin>>subjectone;
    double subjecttwo;
    cout<<"Enter The Second Subject Score"<<endl;
    cin>>subjecttwo;
    double subjectthree;
    cout<<"Enter The Third Subject Score"<<endl;
    cin>>subjectthree;
    double averagemark;
    averagemark=(subjectone+subjecttwo+subjectthree)/3;
    cout<<"Student's Admission Number "<<studentadmissionnumber<<"\t Student's Name "<<studentsurname<<"\t The average is: "<<averagemark<<endl;
    if (100>=averagemark>=70){
        cout<<"The Grade is A"<<endl;
    }else
    if (69>=averagemark>=60){
        cout<<"The Grade is B"<<endl;
    }else
    if (59>=averagemark>=50){
        cout<<"The Grade is C"<<endl;
    }else
    if (50>=averagemark>=0){
        cout<<"The Grade is D"<<endl;
    }else
    if (39>=averagemark>=0){
        cout<<"Fail"<<endl;
    }
    return 0;
}
