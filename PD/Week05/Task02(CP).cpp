#include<iostream>
#include<math.h>
using namespace std;

int volumeMeters(double,double,double);
int volumeMillimeters(double,double,double);
int volumeCentimeters(double,double,double);
int volumeKilometers(double,double,double);


main()
{   
   double length,width,height;
   string desired_unit;
   cout<<"Enter the length of pyramid (meters) : ";
   cin>>length;

   cout<<"Enter the width of pyramid (meters) : ";
   cin>>width;

   cout<<"Enter the height of pyramid (meters) : ";
   cin>>height;

   cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers) : ";
   cin>>desired_unit;

   if (desired_unit=="meters")
   {
    double volume=volumeMeters(length,width,height);
    cout<<"The volume of pyramid is "<<volume<<" cubic meters";
   }
   if (desired_unit=="millimeters")
   {
    double volume=volumeMillimeters(length,width,height);
    cout<<"The volume of pyramid is "<<volume<<" cubic millimeters";
   }
   if (desired_unit=="centimeters")
   {
   double volume=volumeCentimeters(length,width,height);
    cout<<"The volume of pyramid is "<<volume<<" cubic centimeters";
   }
   if (desired_unit=="kilometers")
   {
    double volume= volumeKilometers(length,width,height);
    cout<<"The volume of pyramid is "<<volume<<" cubic kilometers";
   }
   
}

int volumeMeters(double length,double width,double height)
{
    double volume=(length*width*height)/3;
    return volume;
}

int volumeMillimeters(double length,double width,double height)
{
    double volume=(length*width*height)/3;
    volume=volume*pow(1000,3);
    return volume;
}

int volumeCentimeters(double length,double width,double height)
{
    double volume=(length*width*height)/3;
    volume=volume*pow(100,3);
    return volume;
}

int volumeKilometers(double length,double width,double height)
{
    double volume=(length*width*height)/3;
    volume=volume/(pow(1000,3));
    return volume;
}