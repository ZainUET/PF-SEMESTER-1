#include<iostream>
using namespace std;
main(){

system("cls");
system("color 02");

cout<<"Enter The Name Of Person: ";
string name;
cin>>name;

cout<<"Enter The Target Weight Loss In Kilograms: ";
float weight;
cin>>weight;

float days=weight*15;

cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg by following the doctor's suggestions.";




}