#include <iostream>
#include <sstream>
using namespace std;
string timeTravel(int,int);
main()
{
 int hours,minutes;
 cout<<"Enter Hours: ";
 cin>>hours;
 cout<<"Enter Minutes: ";
 cin>>minutes;
 string answer=timeTravel(hours,minutes);
 cout<<answer;
}

string timeTravel(int hours,int minutes)
{
  ostringstream oss;
  minutes=minutes+15;
  if(minutes>=60)
  {
   minutes=minutes-60;
   hours=hours+1;
   oss<<hours<<":"<<minutes;
  }
  if(minutes<60)
  {
   oss<<hours<<":"<<minutes;
  }
   return oss.str();
  
}