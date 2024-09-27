#include<iostream>
using namespace std;

void challan(int);

main()
{
   int speed;
   cout<<"Enter the speed: ";
   cin>>speed;  

   challan(speed);

}

void challan(int speed)
{   if(speed>100)
      cout<<"HALT!....YOU WILL BE CHALLENED";
    if(speed<=100)
       cout<<"PERFECT!....YOU ARE GOING GOOD";
  }

