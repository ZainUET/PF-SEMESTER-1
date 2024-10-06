#include<iostream>
#include<math.h>
using namespace std;
 
void quadraticEquation(double,double,double);

main()
{
    
   double a,b,c;
   cout<<"Enter the value of a : ";
   cin>>a;
   cout<<"Enter the value of b : ";
   cin>>b;
   cout<<"Enter the value of c : ";
   cin>>c;
 
   
   quadraticEquation(a,b,c);

}

void quadraticEquation(double a,double b,double c)
{
    double root1,root2,determinant=(b*b)-(4*a*c);

    if (determinant>0)
    {
        root1=(-b+sqrt(determinant))/(2*a);
        root2=(-b-sqrt(determinant))/(2*a);
   
       cout<<"Complex Solutions : x= "<<root1<<" and "<<"x= "<<root2;
    }
    
    if (determinant==0)
    {
        root1=root2=-b/(2*a);
        cout<<"Solutions : x= "<<root1;
    }

    if (determinant<0)
    {   double realroot=b/(2*a); 
        root1=(sqrt(-determinant))/(2*a);
        root2=((sqrt(-determinant))/(2*a));   
       cout<<"Complex Solutions : x= -"<<realroot<<" + "<<root1<<"i and "<<"x= -"<<realroot<<" - "<<root2<<"i";
    }
    

    
}