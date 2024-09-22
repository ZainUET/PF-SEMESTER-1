#include <iostream>
using namespace std;
main()
{ 
    system("cls");
    system("color 02");

	cout<<"Enter the number of wins : ";
	int w;
	cin>>w;

	cout<<"Enter the number of draws : " ;
	int d;
	cin>>d;

	cout<<"Enter the number of losses : ";
	int l;
	cin>>l;

	int result=(w*3)+(l*0)+(d*1);
	cout<<"pakistan has obtained "<<result<<" points in the asia cup tournament";
}