#include<iostream>
using namespace std;

bool areSameNumber(int,int,int);
main()
{
   int number1,number2,number3;
   cout<<"Enter the first number: ";
   cin>>number1;
   cout<<"Enter the second number: ";
   cin>>number2;
   cout<<"Enter the second number: ";
   cin>>number3;

     
    cout<<areSameNumber(number1,number2,number3);

}

bool areSameNumber(int num1,int num2,int num3)
{    
    
    if (num1==num2 && num2==num3)
         return true;
    else
        return false;
          
}