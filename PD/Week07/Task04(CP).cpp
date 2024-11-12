#include <iostream>
using namespace std;

int triangle(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter the triangle number: ";
    cin >> n;

    cout << "Number of dots for triangle(" << n << ") ➞ " << triangle(n) << endl;

    return 0;
}
