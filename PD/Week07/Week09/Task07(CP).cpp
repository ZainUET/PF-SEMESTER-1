#include<iostream>
using namespace std;
main()
{
  int r;
  cout<<"Enter the number of resistors: ";
  cin>>r;
  float resistors[r],sum=0;
  if (r==0)
  {
    cout<<"Invalid Input!";
    return 0;
  }
  if(r>0)
  {
  cout<<"Enter Resistance value,one per line: "<<endl;
  for(int idx=0;idx<r;idx++)
  {
    cin>>resistors[idx];
    sum+=resistors[idx];
  }
  }

cout<<"Total Resistance: "<<sum<<" Ohms";

}