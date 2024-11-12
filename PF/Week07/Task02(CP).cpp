#include<iostream>
using namespace std;

void generateFibonacci(int);
main()
{   int length;
    cout<<"Enter the length of fibonacci series: ";
    cin>>length;
    generateFibonacci(length);

}

void generateFibonacci(int length)
{
    int n1=0,n2=1,next;

    if (length==1)
    {
        cout<<n1;
    }
    if(length==2)
         cout<<n1<<" , "<<n2;
    if(length!=0 && length!=1 && length!=2){
         cout<<n1<<" , "<<n2<<" , ";
    for(int i=0;i<=(length-3);i++)
    {
        next=n1+n2;
        cout<<next<<" , ";
        n1=n2;
        n2=next;
    }
    }
}