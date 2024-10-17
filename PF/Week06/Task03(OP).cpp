#include<iostream>
using namespace std;

float getperimeter(char,float);
main()
{
  float side;
  char shape;
  cout<<"Enter the shape(s for square,c for circle,t for equilateral triangle,h for regular hexahon): ";
  cin>>shape;
  cout<<"Enter the value: ";
  cin>>side;
  
  float perimeter=getperimeter(shape,side);
  cout<<"The Perimeter is: "<<perimeter;
}

float getperimeter(char shape,float side )
{   
    float perimeter;
   if (shape=='s')
        perimeter=4*side;
   if (shape=='c')
        perimeter=6.28*side;
   if (shape=='t')
        perimeter=3*side;
   if (shape=='h')
        perimeter=6*side;
   
   return perimeter;
   

}
