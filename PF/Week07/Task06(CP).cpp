#include<iostream>
using namespace std;

int calculateGCD(int ,int );
int calculateLCM(int ,int,int );
main()
{
    int number1,number2,gcd,lcm;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;

    gcd=calculateGCD(number1,number2);
    cout<<"GCD: "<<gcd<<endl;

    lcm=calculateLCM(number1 , number2,gcd );
    cout<<"LCM: "<<lcm ;
    


}

int calculateGCD(int num1 ,int num2 )
{    int gcd;
    while (num2!=0)
    {
        gcd=num2;
        num2=num1%num2;
        num1=gcd;
    }
    return num1;
    
}

int calculateLCM(int num1 ,int num2,int gcd )
{
    return ((num1*num2)/gcd);
}