#include <iostream>
using namespace std;
main ()
{
    system("cls");
    system("color 02");


	cout<<"Enter time in hours : ";
	int h;
	cin>>h;

	int result=60*60*h;
	cout<<h<<" hours is equivalent to "<<result<<" seconds";
}