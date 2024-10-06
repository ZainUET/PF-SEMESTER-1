#include<iostream>
using namespace std;

int finalPriceM(float);
int finalPriceE(float);
int finalPriceS(float);
int finalPriceV(float);
int finalPriceT(float);
main()
{   float price;
    char code;
    cout<<"Enter the vehicle type code(M,E,S,V,T) : ";
    cin>>code;

    cout<<"Enter the price: $";
    cin>>price;  

    if (code=='M')
    {
        float finalPrice=  finalPriceM(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }
    
    if (code=='E')
    {
        float finalPrice=  finalPriceE(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='S')
    {
        float finalPrice=  finalPriceS(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='V')
    {
        float finalPrice=  finalPriceV(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='T')
    {
        float finalPrice=  finalPriceT(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

   
}

int finalPriceM(float price)
{
   float finalPriceM=(price*0.06)+price;
   return finalPriceM;
}

int finalPriceE(float price)
{
   float finalPriceM=(price*0.08)+price;
   return finalPriceM;
}
int finalPriceS(float price)
{
   float finalPriceM=(price*0.1)+price;
   return finalPriceM;
}
int finalPriceV(float price)
{
   float finalPriceM=(price*0.12)+price;
   return finalPriceM;
}
int finalPriceT(float price)
{
   float finalPriceM=(price*0.15)+price;
   return finalPriceM;
}