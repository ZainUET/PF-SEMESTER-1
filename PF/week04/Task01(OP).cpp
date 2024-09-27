#include<iostream>
using namespace std;

void calculate_fuel(float distance);

main()
{  
   float distance;
   cout<<"Enter the distance: ";
   cin>>distance;
 
   calculate_fuel(distance);

}

void calculate_fuel(float distance)
{ 
  float fuel=distance*10;
  cout<<"Fuel Needed: "<<fuel<<endl;
}