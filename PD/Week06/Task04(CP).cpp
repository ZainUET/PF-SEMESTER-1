#include<iostream>
using namespace std;

string cellularCompany(char,char,float);
main()
{   float minutes;
    char code,time;
    cout<<"Enter the service code (r for regular,p for premium): ";
    cin>>code;
    cout<<"Enter the time of call (d for day,n for night): ";
    cin>>time;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    

    cout<< cellularCompany(code,time,minutes);

}

string cellularCompany(char code,char time,float minutes)
{
    float price;
    if(code=='r')
     {  price=10;
        
        if(minutes>50)
        {  minutes=minutes-50;
           price=10+(0.20*minutes);
        }
     }
    else if(code=='p')
     {  price=25;
        if(time=='d' && minutes>75)
        price=10+(0.10*minutes);
        else if(time=='n' && minutes>100)
        price=10+(0.05*minutes);
    }
 
    return "Amount Due: $"+to_string(price);
}