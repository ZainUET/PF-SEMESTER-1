#include<iostream>
using namespace std;

void flowershop(int red_roses,int white_roses,int tulips);

main()
{  system("cls");
   int red_roses,white_roses,tulips;

   cout<<"Red Roses: ";
   cin>>red_roses;

   cout<<"White Roses: ";
   cin>>white_roses;

   cout<<"Tulips: ";
   cin>>tulips;

  flowershop(red_roses,white_roses,tulips);

}

void flowershop(int red_roses,int white_roses,int tulips)
{
    float original_price=(red_roses*2)+(white_roses*4.1)+(tulips*2.5);

    if(original_price<200)
      {
       cout<<"Total Price: $"<<original_price<<endl;
       cout<<"Note:Discount is only given to customer with bill above $200";
      }
    if(original_price>200)
      {
       float discounted_price=original_price-(original_price*0.2);
       cout<<"Total Price: $"<<original_price<<endl;
       cout<<"Price After Discount: $"<<discounted_price;
      }
    

}
