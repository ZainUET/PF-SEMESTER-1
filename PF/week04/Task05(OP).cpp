#include<iostream>
using namespace std;

void vote(int);

main()
{
  int age;
  cout<<"Enter Your Age: ";
  cin>>age;
   
  vote(age);
}

void vote(int x)
{ 

  if(x>=18)
   cout<<"You are eligible to vote"; 

 if(x<18)
   cout<<"You are not eligible to vote"; 

}