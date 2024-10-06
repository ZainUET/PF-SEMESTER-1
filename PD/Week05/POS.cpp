#include<iostream>
#include<conio.h>
using namespace std;
void printHeader();
int menu();

main()
{
   string name1 = "", name2 = "", name3 = "";
    float price1 = 0.0, price2 = 0.0, price3 = 0.0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0;
    float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
    float total1 = 0.0, total2 = 0.0, total3 = 0.0;
    int option;
    while (true)
    {
        printHeader();
        option = menu();
        if (option == 1) {

            cout << "Enter the name of 1st Product: ";
            cin  >>  name1;
            cout << "Enter the price of 1st Product: ";
            cin  >>  price1;
            cout << "Enter the quantity of 1st Product: ";
            cin  >>  quantity1;
            cout << "Enter the tax rate on 1st Product (%): ";
            cin  >>  tax1;
         }
        if (option == 2) {

            cout << "Enter the name of 2nd Product: ";
            cin >> name2;
            cout << "Enter the price of 2nd Product: ";
            cin >> price2;
            cout << "Enter the quantity of 2nd Product: ";
            cin >> quantity2;
            cout << "Enter the tax rate on 2nd Product (%): ";
            cin >> tax2;

         }
        if (option == 3) { 

            cout << "Enter the name of 3rd Product: ";
            cin >> name3;
            cout << "Enter the price of 3rd Product: ";
            cin >> price3;
            cout << "Enter the quantity of 3rd Product: ";
            cin >> quantity3;
            cout << "Enter the tax rate on 3rd Product (%): ";
            cin >> tax3;

        }
        if (option == 4) {

            total1 = price1 * quantity1;
            total1 = total1 + total1 * ((tax1 / 100));
            total2 = price2 * quantity2;
            total2 = total2 + total2 * ((tax2 / 100));
            total3 = price3 * quantity3;
            total3 = total3 + total3 * ((tax3 / 100));

            float totalPayable = total1 + total2 + total3;

            cout << "Total Payable Amount (including tax): " << totalPayable << endl;

         }
        if (option == 5) { 

            cout << "All Products Data" << endl;
            cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "Total";
            cout << endl;
            cout << name1 << "\t" << price1 << "\t" << quantity1 << "\t\t" << tax1 << "\t" << total1;
            cout << endl;
            cout << name2 << "\t" << price2 << "\t" << quantity2 << "\t\t" << tax2 << "\t" << total2 ;
            cout << endl;
            cout << name3 << "\t" << price3 << "\t" << quantity3 << "\t\t" << tax3 << "\t" << total3;
            cout << endl;

        }
	   if (option == 6) { 
         return 0;
       }
        cout << "Press any Key to Continue: ";
        getch();
        system("cls");


}
}

void printHeader()
{
    cout << "************************************************************" << endl;
    cout << "*               Point of Sale Management System            *" << endl;
    cout << "************************************************************" << endl;
    cout << endl << endl;
}


int menu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add 1st Product Data" << endl;
    cout << "2. Add 2nd Product Data" << endl;
    cout << "3. Add 3rd Product Data" << endl;
    cout << "4. Calculate Total" << endl;
    cout << "5. View All Products Data" << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option.. ";
    cin >> option;
    return option;
}

