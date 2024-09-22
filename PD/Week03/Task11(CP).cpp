#include<iostream>
using namespace std;
main()
{
	system("cls");
	system("color 02");

	cout<<"Enter the person's age: ";
	int age;
	cin>>age;

	cout<<"Enter the number of times they've moved: ";
        int moved;
        cin>>moved;
       
	int lived=age/(moved+1);
	cout<<"Average number of years lived in the same house: "<<lived;

}