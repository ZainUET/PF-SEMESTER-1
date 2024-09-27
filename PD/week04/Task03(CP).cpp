#include<iostream>
using namespace std;

void discount_price(string,float);

main()
{
  float ticket_price;
  string country;

  cout<<"Enter the country's name: ";
  cin>>country;

  cout<<"Enter the ticket price: $";
  cin>>ticket_price;
  
  discount_price(country,ticket_price);

}

void discount_price(string country,float ticket_price)
{   
   float final_price;
   if(country=="Pakistan")
     { final_price=ticket_price-(ticket_price*0.05);
       cout<<"Final ticket price after discount: $"<<final_price;
      }

   if(country=="Ireland")
     { final_price=ticket_price-(ticket_price*0.1);
       cout<<"Final ticket price after discount: $"<<final_price;
      }

   if(country=="India")
     { final_price=ticket_price-(ticket_price*0.2);
       cout<<"Final ticket price after discount: $"<<final_price;
      }

   if(country=="England")
     { final_price=ticket_price-(ticket_price*0.3);
       cout<<"Final ticket price after discount: $"<<final_price;
      }

   if(country=="Canada")
     { final_price=ticket_price-(ticket_price*0.45);
       cout<<"Final ticket price after discount: $"<<final_price;
      }

}
