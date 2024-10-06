#include<iostream>
using namespace std;
void calculatinghours(int,int,int);
main()
{
   int hours,days,workers;
    cout<<"Enter the needed hours : ";
    cin>>hours;
    cout<<"Enter the days that the firm has : ";
    cin>>days;
    cout<<"Enter the number of all workers : ";
    cin>>workers;
   
    calculatinghours(hours,days,workers);
     
}
void calculatinghours(int hours,int days,int workers)
{
   int workinaday=workers*9;
    int workinfirmdays=workinaday*days;
    int remaininghours=workinfirmdays-hours;

    

    if(hours>remaininghours)
      cout<<"Not enough time! "<<(-1*remaininghours)<<" hours needed";
     else
     cout<<"YES! "<<remaininghours<<" hours left";
}
