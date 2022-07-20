#include <iostream>

using namespace std;
// ANYTHING STARTING WITH // IS A COMMENT.
// THIS IS A PROGRAM TO DEMO IF ELSE CONTROL STRUCTURE
int main()
{   char gender;
    string first_name;
    string last_name;
    string full_name;
    cout<<"Enter Your Gender"<<endl;
    cin>>gender;
    cout<<"Enter Your First Name"<<endl;
    cin>>first_name;
    cout<<"Enter Your Last Name"<<endl;
    cin>>last_name;
    full_name = first_name+" "+last_name;
    if(gender=='F'){
        cout<<"Hello Miss. "<<full_name<<endl;
    }else{
       cout<<"Hello Mr. "<<full_name<<endl;
    }
    return 0;
}
