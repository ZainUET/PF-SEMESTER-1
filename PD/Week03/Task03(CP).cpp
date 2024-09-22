#include<iostream>
using namespace std;
main(){
   system("color 02");
   system("cls");

   cout<<"Enter Intial Velocity (m/s):";
   int vi;
   cin>>vi;

   cout<<"Enter Acceleration (m/s^2):";
   int a;
   cin>>a;

   cout<<"Enter Time:";
   int t;
   cin>>t;

   float vf=(a*t)+vi;
    cout<<"Final Velocity(m/s): "<<vf;  








}