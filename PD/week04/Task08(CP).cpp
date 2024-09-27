#include<iostream>
using namespace std;

void pet(int holidays);

main()
{
 int holidays;
 cout<<"Holidays: "; 
 cin>>holidays;
 pet(holidays);

}

void pet(int holidays)
{
  int working_days=365-holidays;
  int timeForGames=(working_days*63)+(127*holidays);
  int playTime=30000-timeForGames;
  int playTime_hours=playTime/60;
  int playTime_minutes=playTime%60;
   
  if(holidays<=40)
    {  cout<<"Tom Sleeps Well"<<endl;
      cout<<playTime_hours<<" hours "<<playTime_minutes<<" minutes less for play";
      }

  if(holidays>40)
    {  cout<<"Tom Will Run Away"<<endl;
      cout<<playTime_hours<<" hours "<<playTime_minutes<<" minutes for play";
      }


}