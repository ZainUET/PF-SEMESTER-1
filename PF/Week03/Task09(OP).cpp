#include <iostream>
using namespace std;
main()
{
    system("cls");
    system("color 02");

	cout<<"Enter Your Age In Years : ";
	int y;
	cin>>y;

	int result=365*y;
	cout<<"Your Age In Days Is Approximately "<<result<<" days";
}