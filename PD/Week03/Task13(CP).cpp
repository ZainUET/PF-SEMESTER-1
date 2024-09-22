#include<iostream>
using namespace std;
main()
{
	system("cls");
	system("color 02");

	cout<<"Enter first integer: ";
        int integer;
        cin>>integer;

        int sum=0;
        sum=sum+integer;
	
	cout<<"Enter 2 integer: ";
        cin>>integer;
	
	sum=sum+integer;

	cout<<"Enter 3 integer: ";
	cin>>integer;

	sum=sum+integer;
	
	cout<<"Enter 4 integer: ";
        cin>>integer;

	sum=sum+integer;
	
	cout<<"Enter 5 integer: ";
        cin>>integer;

	sum=sum+integer;

	cout<<"Sum of 5 Integers are: "<<sum;     


}