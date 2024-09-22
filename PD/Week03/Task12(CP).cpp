#include<iostream>
using namespace std;
main()
{
	system("cls");
	system("color 02");

	cout<<"Number of square meters you can paint: ";
	int paint;
	cin>>paint;

	cout<<"Width of the single wall in meters: ";
	int width;
	cin>>width;

	cout<<"Height of the single wall in meters: ";
	int height;
	cin>>height;
	
	int area=width*height;
	int total_walls=paint/area;

	cout<<"Numbers of wall you can paint: "<<total_walls;
}