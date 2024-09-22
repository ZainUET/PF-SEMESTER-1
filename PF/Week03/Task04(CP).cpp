#include <iostream>
using namespace std;
main()
{
     system("cls");
     system("color 02");

	cout<<"Enter Charge (Q) in Coloumbs : ";
	int Q;
	cin>>Q;

	cout<<"Enter Time (t) in Seconds : ";
	int t;
	cin>>t;

	int I=Q/t;
	cout<<"the current is: "<<I<<" Amperes";
}