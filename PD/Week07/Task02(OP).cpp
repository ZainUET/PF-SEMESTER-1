#include <iostream>
using namespace std;

// Function to print the upper part of the shape
void printUpperPart(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
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

// Function to print the lower part of the shape
void printLowerPart(int n) {
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
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
    cout << "Enter the number of rows for the upper part of the shape: ";
    cin >> n;

    printUpperPart(n);  // Print the upper part
    printLowerPart(n);  // Print the lower part

    return 0;
}
