#include<iostream>
using namespace std;

void result(int);

main()
{
  int marks;
  cout<<"Enter Your marks: ";
  cin>>marks;
   
  result(marks);
}

void result(int x)
{ 

  if(x>=50)
   cout<<"PASS!"; 

  if(x<50)
   cout<<"FAIL!"; 

}