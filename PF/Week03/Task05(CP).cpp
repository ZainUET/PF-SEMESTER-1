#include <iostream>
using namespace std;
main()
{

    system("cls");
    system("color 02");

	cout<<"Enter Your Name : ";
	string name;
	cin>>name;

	cout<<"Enter Matriculation Marks (out of 1100): ";
	float matric;
	cin>>matric;

	cout<<"Enter Intermediate Marks (out of 550) : ";
	float inter;
	cin>>inter;

	cout<<"Enter ECAT Marks (Out Of 400) : ";
	float ecat;
	cin>>ecat;

	float agg=(50*(ecat/400))+(40*(inter/550))+(10*(matric/1100));
	cout<<"Aggregte score for "<<name<<" in uet is "<<agg<<"%";
}