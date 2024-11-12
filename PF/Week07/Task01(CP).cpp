#include<iostream>
using namespace std;

void printTable(int);
main()
{   
   int number;
   cout<<"Enter The Number To Print It's Table: ";
   cin>>number;
   printTable(number);
}

void printTable(int num)
{
    for (int i = 1; i <=10 ; i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    
}