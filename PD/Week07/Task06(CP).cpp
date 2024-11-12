#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate the primorial of a number n
int primorial(int n) {
    int count = 0;
    int num = 2;
    int result = 1;

    // Find the first n prime numbers
    while (count < n) {
        if (isPrime(num)) {
            result *= num;  // Multiply the current prime number
            count++;
        }
        num++;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of primes for the primorial: ";
    cin >> n;

    int result = primorial(n);
    cout << "Primorial(" << n << ") = " << result << endl;

    return 0;
}
