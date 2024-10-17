#include<iostream>
using namespace std;

bool parityAnalysis(int);
main()
{
   int number;
   cout<<"Enter the three digit number: ";
   cin>>number;
   
   bool result=parityAnalysis(number);
   cout<<result;
   
   
}

bool parityAnalysis(int num)
{    
  int digit1,digit2,digit3,sum;
  digit3=num%10;
  digit2=(num/10)%10;
  digit1=num/100;

   sum=digit1+digit2+digit3;
   
 if (((sum%2==0) && (num%2==0)) ||(((sum%2)!=0) && ((num%2)!=0)))
     return true;
 else
    return false;
 }
