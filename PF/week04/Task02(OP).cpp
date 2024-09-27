#include<iostream>
using namespace std;

void feet(float inch);

main()
{  system("cls");
   float inch;
   cout<<"Enter the measurement in inches: ";
   cin>>inch;
 
   feet(inch);

}

void feet(float inch)
{ 
  float feet=inch/12;
  cout<<"Equivalent in Feet: "<<feet<<endl;
}