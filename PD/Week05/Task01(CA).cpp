#include<iostream>
using namespace std;

int num1=10;
int num2=20;

int sum(){
    num1=40;
    return num1+num2;
}

main()
{
    int x=num1;
    num1=100;
    x=20;
    num2=sum();
    cout<<num1<<" "<<num2;
}