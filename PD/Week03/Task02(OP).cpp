#include<iostream>
using namespace std;
main(){

system("cls");
system("color 02");

cout<<"Number Of Minutes: ";
int m;
cin>>m;

int second=m*60;

cout<<"Frames Per Second: ";
int f;
cin>>f;

int tf=second*f;

cout<<"Total Number Of Frames: "<<tf;




}