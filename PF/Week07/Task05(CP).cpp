#include<iostream>
using namespace std;

int digitSum(int number);
main()
{
    int number,sum;
    cout<<"Enter a number: ";
    cin>>number;
    sum=digitSum(number);
    cout<<"Sum Of Digits: "<<sum;

}

int digitSum(int number)
{   

    int sum=0,mod;
    while (number!=0)
    {   
        mod=number%10;
        if(mod!=0)
          sum=sum+mod;
    number=number/10;
    }
     return sum;
}