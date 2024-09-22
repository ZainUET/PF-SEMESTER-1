#include<iostream>
using namespace std;
main()
{
	system("cls");
	system("color 02");
     
	cout<<"Enter vegetables price per kilogram (in coins): ";
	float vprice_coins;
	cin>>vprice_coins;
	float vprice_rps=(1/1.94)*vprice_coins;

	cout<<"Enter fruit price per kilogram (in coins): ";
        float fprice_coins;
	cin>>fprice_coins;
	float fprice_rps=(1/1.94)*fprice_coins;

	cout<<"Enter total kilogram of vegetables: ";
	float veg;
	cin>>veg;

	cout<<"Enter total kilogram of fruits: ";
	float fruits;
	cin>>fruits;

	float total=(veg*vprice_rps)+(fruits*fprice_rps);
 
	cout<<"Total earning in Rupees(Rps): "<<total;
	

}