#include<iostream>
using namespace std;

void fuel(float distance);

main()
{  
   float distance;
   cout<<"Enter the distance: ";
   cin>>distance;
 
   fuel(distance);

}

void fuel(float distance)
{ 
  float fuel=distance*10;
  if(fuel<=100)
  cout<<"Fuel Needed: 100 "<<endl;
  
  if(fuel>100)
  cout<<"Fuel Needed: "<<fuel<<endl;
}