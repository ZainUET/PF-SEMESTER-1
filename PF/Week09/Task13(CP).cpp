#include <iostream>
#include <string>
using namespace std;

void jazzifyChords(string chords[], int numChords) {
    for (int i = 0; i < numChords; i++) {
        if (chords[i].back() != '7') {
            chords[i] += "7";  
        }
    }
}

int main() {
    int numChords;

    cout << "Enter the number of chords: ";
    cin >> numChords;

    string chords[numChords];

    cout << "Enter the chords:" << endl;
    for (int i = 0; i < numChords; i++) {
        cin >> chords[i];
    }

    jazzifyChords(chords, numChords);

    cout << "Jazzified chords: ";
    for (int i = 0; i < numChords; i++) {
        cout << chords[i] << " ";
    }

    return 0;
}
