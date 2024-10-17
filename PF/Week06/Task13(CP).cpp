#include <iostream>
using namespace std;
string lowestPrice(float,string);
main()
{
    float kilometers;
    string time;
    cout<<"Enter the number pf kilometers : ";
    cin>>kilometers;
    cout<<"Enter the period of day (day/night) : ";
    cin>>time;
    string resonablePrice=lowestPrice(kilometers,time);
    cout<<resonablePrice;
}
string lowestPrice(float kilometers,string time)
{
    float price;
     if(time=="day" && kilometers<20)
    {
        price=(kilometers*0.79)+0.70;
    }
    else if(time=="night" && kilometers<20)
    {
        price=(kilometers*0.90)+0.70;
    }
    else if(kilometers>=20 && kilometers<100)
    {
        price=kilometers*0.09;
    }
    else if(kilometers>=100)
    {
        price=kilometers*0.06;
    }
    string bestPrice="Lowest price for " + to_string(kilometers) + " is " + to_string(price);
    return bestPrice; 
}