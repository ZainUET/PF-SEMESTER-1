#include <iostream>
using namespace std;

bool canPayWithChange(double change[], double totalDue) {
    double totalChange = (change[0] * 0.25) + (change[1] * 0.10) + (change[2] * 0.05) + (change[3] * 0.01);
    
    return totalChange >= totalDue;
}

int main() {
    double change[4];  
    double totalDue;

    cout << "Enter the number of quarters, dimes, nickels, and pennies: ";
    for (int i = 0; i < 4; ++i) {
        cin >> change[i];
    }

    cout << "Enter the total amount due: ";
    cin >> totalDue;


    if (canPayWithChange(change, totalDue)) {
        cout << "true" << endl; 
    } else {
        cout << "false" << endl; 
    }

    return 0;
}
