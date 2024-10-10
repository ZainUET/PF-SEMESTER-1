#include<iostream>
using namespace std;

string discount(string,string,float);
main()
{   float price;
    string day,month;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>price;

  cout<< discount(day,month,price);

    
}

string discount(string day,string month,float price)
{
    float payable=price;
    if (day=="sunday" || month=="october")
        payable=price-(price*0.1);
    
    
    return "Payable Amount After Discount: " +to_string(payable);
    
    
}