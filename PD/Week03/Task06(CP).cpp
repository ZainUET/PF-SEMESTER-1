#include<iostream>
using namespace std;
main(){

system("cls");
system("color 02");

cout<<"Enter the size of fertilizer bag in pounds: ";
float size;
cin>>size;

cout<<"Enter the cost of the bag: $";
float cost;
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
float area;
cin>>area;

float fpp=cost/size;
cout<<"Cost of fertilizer per pound: $"<<fpp<<endl;

float fps=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<fps;




}