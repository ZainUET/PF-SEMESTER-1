#include<iostream>
using namespace std;

void even_odd(int);

main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  even_odd(num);

}

void even_odd(int x)
{  int num=x;
  int result=num%2;
  if(result==0)
  cout<<"Number "<<num<<" is even"; 

  if(result!=0)
  cout<<"Number "<<num<<" is odd"; 

}