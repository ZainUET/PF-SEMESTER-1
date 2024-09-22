#include <iostream>
using namespace std;
main()
{
        system("cls");
       system("color 02");


	cout<<"Enter Weight in pounds:";
	int pounds;
	cin>>pounds;
	float result=0.45*pounds;
	
	cout<<pounds<<" pounds is equal to "<<result<<" kilograms";
}