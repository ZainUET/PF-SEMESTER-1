#include <iostream>
using namespace std;
main()
{

   system("cls");
   system("color 02");

	cout<<"Enter Voltage : ";
	float v;
	cin>>v;

	cout<<"Enter Currnet : ";
	float I;
	cin>>I;

	float result=I*v;
	cout<<"The power output is : "<<result<<" powers";
}