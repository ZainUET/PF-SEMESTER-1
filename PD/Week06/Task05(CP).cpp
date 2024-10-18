#include <iostream>
using namespace std;
string calculatePrice(string,string,float);
main()
{
    string fruit,day;
    float quantity;
    cout<<"Enter fruit name : ";
    cin>>fruit;
    cout<<"Enter the day of week : ";
    cin>>day;
    cout<<"Enter the quantity : ";
    cin>>quantity;
    string price=calculatePrice(fruit,day,quantity);
    cout<<price;
}
string calculatePrice(string fruit,string day,float quantity)
{
    float total;
    if(fruit=="banana")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*2.70;
        }
        else{total=quantity*2.50;}
    }
    else if(fruit=="apple")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*1.25;
        }
        else{total=quantity*1.20;}
    }
    else if(fruit=="orange")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*0.90;
        }
        else{total=quantity*0.85;}
    }
    else if(fruit=="grapefruit")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*1.60;
        }
        else{total=quantity*1.45;}
    }
    else if(fruit=="kiwi")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*3.00;
        }
        else{total=quantity*2.70;}
    }
    else if(fruit=="pineapple")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*5.60;
        }
        else{total=quantity*5.50;}
    }
    else if(fruit=="grapes")
    {
        if(day=="sunday" || day=="saturday")
        {
            total=quantity*4.20;
        }
        else{total=quantity*3.85;}
    }
    else{return "error";}    
    return to_string(total);
}