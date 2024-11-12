#include<iostream>
using namespace std;

int frequencyChecker(int number,int digit);
main()
{
    int number,digit,frequency;
    cout<<"Enter a number: ";
    cin>>number;
    
    cout<<"Enter The digit to check: ";
    cin>>digit;
    frequency=frequencyChecker(number,digit);
    cout<<"Frequency: "<<frequency;

}

int frequencyChecker(int number,int digit)
{   

    int num2=number,frequency=0;
    while (num2!=0)
    {   
        if((num2%10)==digit)
           frequency=frequency+1;

     num2=num2/10;
    }
     return frequency;
}