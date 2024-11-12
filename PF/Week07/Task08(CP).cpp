#include <iostream>
#include <iomanip> 

using namespace std;

int calculateMoney(int age, int washing_machine_price, int toy_price) {
    int money_saved = 0;
    int toy_count = 0;
    int birthday_money = 10; // Starts with $10 for the second birthday

    for (int birthday = 1; birthday <= age; ++birthday) {
        if (birthday % 2 == 0) {
            money_saved += (birthday_money - 1); // Brother takes $1
            birthday_money += 10; // Increase the birthday money by $10 for the next even birthday
        } else {
            toy_count++;
        }
    }

    int total_money = money_saved + (toy_count * toy_price);

    if (total_money >= washing_machine_price) {
        cout << "Yes! " << fixed << setprecision(2) << total_money - washing_machine_price << endl;
    } else {
        cout << "No! " << fixed << setprecision(2) << washing_machine_price - total_money << endl;
    }
    
    return 0;
}

int main() {
    int age, washing_machine_price, toy_price;
    
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washing_machine_price;
    cout << "Enter the price per toy: ";
    cin >> toy_price;

    calculateMoney(age, washing_machine_price, toy_price);

    return 0;
}
