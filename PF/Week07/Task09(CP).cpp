#include <iostream>
#include <iomanip> 

using namespace std;

int calculatePrice(int money, int year) {
    int startingYear = 1800;
    int age = 18;

    for (int currentYear = startingYear; currentYear <= year; ++currentYear) {
        int spending = 0;

        if (currentYear % 2 == 0) {
            spending = 12000;
        } else {
            spending = 12000 + 50 * age;
        }

        money -= spending;

        age++;

        if (money < 0) {
            return money;
        }
    }

    return money;
}

int main() {
    int money, year;
    
    cout << "Enter the inherited money: ";
    cin >> money;
    cout << "Enter the year he wants to live until: ";
    cin >> year;

   
    int remainingMoney = calculatePrice(money, year);

    cout << fixed << setprecision(2); 
    if (remainingMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " << remainingMoney << " dollars left." << endl;
    } else {
        cout << "He will need " << -remainingMoney << " dollars to survive." << endl;
    }

    return 0;
}
