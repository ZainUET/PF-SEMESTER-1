#include<iostream>
using namespace std;

void min(int,int);

main()
{
   int num1,num2;
   cout<<"Enter First Number: ";
   cin>>num1;
   cout<<"Enter Second Number: ";
   cin>>num2;

   min(num1,num2);
}

void min(int num1,int num2)
{
    if(num1>num2)
    cout<<"The minimum Number is: "<<num2;
    if(num1<num2)
    cout<<"The minimum Number is: "<<num1;
    
}