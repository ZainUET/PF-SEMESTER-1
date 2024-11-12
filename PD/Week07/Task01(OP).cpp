#include <iostream>
using namespace std;

// Function to print the upper half of the diamond
void printUpperHalf(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Function to print the lower half of the diamond
void printLowerHalf(int n) {
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the upper half of the diamond: ";
    cin >> n;

    printUpperHalf(n);  // Print the upper half of the diamond
    printLowerHalf(n);  // Print the lower half of the diamond

    return 0;
}
