#include<iostream>
using namespace std;
void discount(int);

main()
{ system("cls");
  
  string day;  
  cout<<"Enter the day of purchase: ";
  cin>>day;

  int p_amount,payable;
  cout<<"Enter The purchase amount: $";
  cin>>p_amount;
  
  if(day=="Sunday")
     discount(p_amount);

  if(day!="Sunday")
  {cout<<"We are sorry! Discount is available on Sunday only"<<endl;
   cout<<"Payable Amount: $"<<p_amount;
   } 
}

void discount(int x)
{ 
   int dis,payable;
   dis=x*0.1;
   payable=x-dis;
   cout<<"Payable Amount: "<<payable;
}