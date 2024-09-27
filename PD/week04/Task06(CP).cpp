#include<iostream>
using namespace std;

void longest_time(int,int);

main()
{
   int hours,minutes,hours_minutes;
   cout<<"Enter the number of hours: ";
   cin>>hours;
   hours_minutes=hours*60;

   cout<<"Enter the number of minutes: ";
   cin>>minutes;
   
   longest_time(hours_minutes,minutes);   
}

void longest_time(int hours_minutes,int minutes)
{
    if(hours_minutes>minutes)
       cout<<hours_minutes/60;
    if(hours_minutes<minutes)
       cout<<minutes;

}