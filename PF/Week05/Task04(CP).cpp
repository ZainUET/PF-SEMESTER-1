#include<iostream>
#include<math.h>
using namespace std;
 
void height(double,double);

main()
{
    
   double distance,angle;
   cout<<"Enter the distance (in feet) : ";
   cin>>distance;
   cout<<"Enter the angle (in degrees) : ";
   cin>>angle;
   double AngleRadian=(1/57.2958)*angle;

   height(distance,AngleRadian);

}

void height(double distance,double AngleRadian)
{
    double tree=tan(AngleRadian)*distance;
    cout<<"The Height Of Tree Is: "<<tree<<" feet";
}