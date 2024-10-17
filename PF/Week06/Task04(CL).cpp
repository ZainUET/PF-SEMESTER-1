#include<iostream>
using namespace std;

string greaterNumber(int,int,int);
main()
{
   int number1,number2,number3;
   cout<<"Enter the first number: ";
   cin>>number1;
   cout<<"Enter the second number: ";
   cin>>number2;
   cout<<"Enter the second number: ";
   cin>>number3;

     
    cout<<greaterNumber(number1,number2,number3);

}

string greaterNumber(int num1,int num2,int num3)
{    
    int greater=num1;
    if (num2>greater)
         greater=num2;
    if (num3>greater)
        greater=num3;
        
    
    
        return "The greatest number among " + to_string(num1) + " , " +to_string(num2) +" and "+to_string(num3) +" is " +to_string(greater);
     
}