#include <iostream>
using namespace std;

void amplify(int num) {
    for (int i = 1; i <= num; i++) {
        if (i % 4 == 0) {
            cout << i * 10;
        } else {
            cout << i;
        }
        // Print a comma after each number except the last one
        if (i < num) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the upper bound: ";
    cin >> n;
    amplify(n);

    return 0;
}
