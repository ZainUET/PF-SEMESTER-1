#include<iostream>
using namespace std;

void comparing_numbers(int,int);
main()
{  int num1,num2;
   cout<<"Enter the first number: ";
   cin>>num1;

   cout<<"Enter the second number: ";
   cin>>num2;
   
   comparing_numbers(num1,num2);
}

void comparing_numbers(int num1,int num2)
{  if(num1==num2)
       cout<<"TRUE!";
   if(num1!=num2)
       cout<<"FALSE!";
}