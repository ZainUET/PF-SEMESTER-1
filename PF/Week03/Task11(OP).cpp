#include<iostream>
using namespace std;
main()
{
	system("cls");
	system("color 02");

	cout<<"Enter the current world popultion: ";
	int population;
	cin>>population;

	cout<<"Enter the monthly birth rate(numbers of birth per month): ";
	int birth;
	cin>>birth;

	int tp=(3*10*12*birth)+population;
	cout<<"The population in three decade will be: "<<tp;
}