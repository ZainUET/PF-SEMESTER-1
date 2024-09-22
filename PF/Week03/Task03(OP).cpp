#include <iostream>
using namespace std;
main ()
{
     system("cls");
     system("color 02");


	cout<<"Enter Length of rectangle: ";
	int l;
	cin>>l;

	cout<<"Enter the width of rectangle: ";
	int w;
	cin>>w;

	int result=l*w;
	cout<<"The area of rectangle is: "<<result;
}