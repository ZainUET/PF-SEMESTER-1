#include<iostream>
using namespace std;

int totalDigit(int);
main()
{
    int number,digits;
    cout<<"Enter a number: ";
    cin>>number;
    digits=totalDigit(number);
    cout<<"Total number of Digits: "<<digits;

}

int totalDigit(int number)
{   
    int digits=0;
    if (number==1 || number ==0 )
    {
        digits=1;
    }
    else{
    while (number!=0)
    {
        number=number/10;
        digits=digits+1;
    }
    }
    
    
    

    return digits;

}