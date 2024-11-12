#include <iostream>
using namespace std;

bool isPrime(int number) {
    // Special cases for numbers less than 2
    if (number <= 1) return false;
    if (number == 2) return true;  // 2 is the only even prime number
    if (number % 2 == 0) return false;  // Other even numbers are not prime

    // Check for factors from 3 up to the square root of the number
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int testNumber;
    cout << "Enter a number to check if it is prime: ";
    cin >> testNumber;

    if (isPrime(testNumber)) {
        cout << "1 (Prime)" << endl;
    } else {
        cout << "0 (Not Prime)" << endl;
    }

    return 0;
}
