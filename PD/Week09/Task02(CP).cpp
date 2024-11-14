#include<iostream>
using namespace std;

int ticket_price(string movies[],string input_movie);
main()
{
  string  movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
  string input_movie;
  cout<<"Enter movie(Gladiator, StarWars, Terminator, TakingLives, TombRider): ";
  cin>>input_movie;

  cout<<"Ticket Price:"<<ticket_price(movies,input_movie);

}


int ticket_price(string movies[],string input_movie)
{

    
    for(int i=0;i<5;i++)
    {
       if(movies[i]==input_movie)
        {if(i%2==0)
          return 0.1*500;
         if(i%2!=0) 
         return  0.05*500;}
     }
     
}