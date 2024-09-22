#include<iostream>
using namespace std;
main()
{
    system("cls");
    system("color 02");

	cout<<"Enter The Movie Name: ";
        string movie;
	cin>>movie;

	cout<<"Enter The Adult Ticket Price : $";
	int adult_ticket;
	cin>>adult_ticket;

	cout<<"Enter The Child Ticket Price: $";
	int child_ticket;
	cin>>child_ticket;

	cout<<"Enter The Number Of Adult Ticket Sold: ";
	int adult_tsold;
	cin>>adult_tsold;

	cout<<"Enter The Number Of Child Ticket Sold: ";
        int child_tsold;	
	cin>>child_tsold;

	cout<<"Enter The Percentage Of The Amount To Be Denoted To Charity: ";
	int charity;
	cin>>charity;

	cout<<"Movie: "<<movie<<endl;
	
	int amount=(adult_ticket*adult_tsold)+(child_ticket*child_tsold);
	cout<<"Total Amount Generated From Ticket Sales: $"<<amount<<endl;

        cout<<"Donation To Charity ("<<charity<<"%) : $"<<amount<<endl;

        int charity_amount=(charity*amount)/100;
        int ramount=amount-charity_amount;
       	cout<<"Remaining Amount After Donation: $"<<ramount;

	






}