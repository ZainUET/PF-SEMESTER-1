#include <iostream>
#include <sstream>
using namespace std;
string calculatePoolState(int v,int p1,int p2,float h);
main()
{
 int v,p1,p2;
 float h;
 cout<<"Enter the volume of pool in lites : ";
 cin>>v;
 cout<<"Enter the flow rate of first pipe per hour : ";
 cin>>p1;
 cout<<"Enter the flow rate of second pipe per hour : ";
 cin>>p2;
 cout<<"Enter the number of hours worker was absent : ";
 cin>>h;
 string answer=calculatePoolState(v,p1,p2,h);
 cout<<answer;
}

string calculatePoolState(int v,int p1,int p2,float h)
{
  ostringstream oss;
  int poolState=(p1*h)+(p2*h);
  int poolStatePercentage=(((p1*h)+(p2*h))/v)*100;
  int pipe1Contribution=((p1*h)/poolState)*100;
  int pipe2Contribution=((p2*h)/poolState)*100;
  if(poolState<v)
  	oss<<"The pool is "<<poolStatePercentage<<" % full. Pipe1 : "<<pipe1Contribution<<" Pipe2 : "<<pipe2Contribution;
   
  if(poolState>v)
  {
   int overflow=poolState-v;
   oss<<"For "<<h<<" hours the pool overflows with "<<overflow<<" liters";
  }
  return oss.str();
}