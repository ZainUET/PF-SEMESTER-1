#include<iostream>
#include<math.h>
using namespace std;
 
void square_root(double);

main()
{
    
   double number;
   cout<<"Enter the Number: ";
   cin>>number;
   

   square_root(number);

}

void square_root(double number)
{
    double result=sqrt(number);
    cout<<"Square root of "<<number<<" is : "<<result;
}