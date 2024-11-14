#include<iostream>
using namespace std;

int Calculate_Price(string fruit[],string input_fruit,int price[], int quantity);
main()
{
  string  fruit[4] = {"peach", "apple", "guava", "watermelon"};
  int  price[4] = {60, 70, 40, 30};
  string input_fruit;
  int quantity;
  cout<<"Enter the fruit (peach, apple, guava, watermelon): ";
  cin>>input_fruit;
  cout<<"Quantity";
  cin>>quantity;
  int total=Calculate_Price(fruit,input_fruit,price,quantity);
  cout<<"You have to pay: "<<total;
}


int Calculate_Price(string fruit[],string input_fruit,int price[], int quantity)
{
    int total=0;
    
    for ( int i = 0; i < 4; i++)
    {
       if(fruit[i]==input_fruit)
          total=price[i]*quantity;
    }
    return total;

}