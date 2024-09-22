#include<iostream>
using namespace std;
main()
{
       system("cls");
       system("color 02");

	cout<<"Enter The Four Digit Number: ";
	int number;
        cin>>number;

	int sum=0;
	sum=sum+(number%10);
        number=number/10;
	
	sum=sum+(number%10);
        number=number/10;
	    
	sum=sum+(number%10);
        number=number/10;
	
	sum=sum+(number%10);
        
	
	cout<<"Sum Of Individual Digits: "<<sum;







}