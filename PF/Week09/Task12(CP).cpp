#include <iostream>
using namespace std;

bool isSpecialArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            if (arr[i] % 2 != 0) {
                return false;  
            }
        }
        else {
            if (arr[i] % 2 == 0) {
                return false;  
            }
        }
    }
    return true;
    }

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (isSpecialArray(arr, size)) {
        cout << "The array is special." << endl;
    } else {
        cout << "The array is not special." << endl;
    }
    
    return 0;
}
