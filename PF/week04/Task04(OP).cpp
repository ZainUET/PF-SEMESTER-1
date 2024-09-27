#include<iostream>
using namespace std;

void sum(int x,int y);
void subtract(int x,int y);
void divide(int x,int y);
void product(int x,int y);

main()
{  system("cls");
   int num1,num2;
   char op;
  
 
   
   cout<<"Enter Number 1 : ";
   cin>>num1;

   cout<<"Enter Number 2 : ";
   cin>>num2;

   cout<<"Enter the Operator(+,-,/,*): ";
   cin>>op;

   if(op== '+')
   {
     sum(num1,num2);
        }
   
   if(op== '-')
   {
     subtract(num1,num2);
        }
   
    if(op== '/')
   {
     divide(num1,num2);
        }
        
   if(op== '*')
   {
     product(num1,num2);
   }
  
}

void sum(int x,int y)
{  
   int result=x+y;
   cout<<"The SUM of the two numbers is: "<<result<<endl;
   
}

void subtract(int x,int y)
{  
   int result=x-y;
   cout<<"The subtract of the two numbers is: "<<result<<endl;
   
}

void divide(int x,int y)
{  
   int result=x/y;
   cout<<"The division of the two numbers is: "<<result<<endl;
   
}


void product(int x,int y)
{  
   int prod=x*y;
   cout<<"The PRODUCT of the two numbers is: "<<prod<<endl;
   
}