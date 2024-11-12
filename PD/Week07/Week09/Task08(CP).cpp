#include <iostream>
using namespace std;

void insertArrayInMiddle(int arr1[], int size1, int arr2[], int size2) {
    int totalSize = size1 + size2; 
    int result[totalSize]; 

    result[0] = arr1[0];

    int index = 1;
    for (int i = 0; i < size2; i++) {
        result[index++] = arr2[i];
    }

    result[index] = arr1[1];

    cout << "Resulting array: ";
    for (int i = 0; i < totalSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[2], arr2[100], size2;

    cout << "Enter 2 elements for the first array: ";
    for (int i = 0; i < 2; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> size2;

    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    insertArrayInMiddle(arr1, 2, arr2, size2);

    return 0;
}

