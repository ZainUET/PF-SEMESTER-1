#include<iostream>
using namespace std;

void reverse(string);

main()
{  string true_false;
   cout<<"Enter true/false: ";
   cin>>true_false;
   
   reverse(true_false); 

}

void reverse(string true_false)
{
     if(true_false=="true")
         cout<<"FALSE!";
     if(true_false=="false")
         cout<<"TRUE!";

}