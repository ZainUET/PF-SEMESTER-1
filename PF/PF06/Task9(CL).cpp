#include<iostream>
using namespace std;

string chechTitle(char,int);
main()
{
  int age;
  char gender;
  cout<<"Enter Your Age: ";
  cin>>age;
  cout<<"Enter Your Gender(m/f): ";
  cin>>gender;

   cout<<chechTitle(gender,age);
}

string chechTitle(char gender,int age)
{
    string title;
    if (gender=='m')
    {
        if(age>=16)
          title="Mr.";
        else if(age<16)
         title="Master";
    }
    if (gender=='f')
    {
        if(age>=16)
          title="Ms.";
        else if(age<16)
         title="Miss";
    }
    
    return "Your Personal Title Is: "+title;
    
}