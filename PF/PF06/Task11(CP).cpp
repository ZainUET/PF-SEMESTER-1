#include<iostream>
using namespace std;

string checkSpeed(float);
main()
{
    float speed;
    cout<<"Enter The Speed: ";
    cin>>speed;

    cout<<checkSpeed(speed);
}
 string checkSpeed(float speed)
 {  string result;
    if(speed<=10)
       result="Slow!"; 
    else if(speed>10 && speed<=50)
       result="Average!"; 
    else if(speed>50 && speed<=150)
       result="Fast!";
    else if(speed>150 && speed<1000)
       result="Utra-Fast!";
    else if(speed>1000)
       result="Extremely Fast!"; 
   
     return result;


 }