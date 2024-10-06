#include<iostream>
#include<math.h>
using namespace std;
 
void power(double,double);

main()
{
    
   double base,exponent;
   cout<<"Enter the base: ";
   cin>>base;
   cout<<"Enter the exponent: ";
   cin>>exponent;

   power(base,exponent);

}

void power(double base,double exponent)
{
    double result=pow(base,exponent);
    cout<<base<<" raised to the power "<<exponent<<" : "<<result;
}