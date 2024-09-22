#include <iostream>
using namespace std;
main()
{
      system("cls");
      system("color 02");


	cout<<"Enter the size in Megabites (MB) : ";
	double mb;
	cin>>mb;

	double result=1024*1024*mb;
	cout<<mb<<" is equivalent to "<<result<<" bits ";
}