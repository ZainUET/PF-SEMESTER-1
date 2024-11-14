#include <iostream>
#include <cstring> 
using namespace std;

const char* MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", 
                       "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

void pinToDance(const char pin[]) {
    if (strlen(pin) != 4) {
        cout << "Invalid input." << endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (!isdigit(pin[i])) {
            cout << "Invalid input." << endl;
            return;
        }
    }

    for (int i = 0; i < 4; ++i) {
        int digit = pin[i] - '0';                
        int moveIndex = (digit + i) % 10;        
        cout << MOVES[moveIndex];          
        if (i < 3) {
            cout << ", ";                  
        }
    }
    cout << endl;
}

int main() {
    char pin[5]; 

    cout << "Enter a 4-digit PIN: ";
    cin >> pin;

    pinToDance(pin); 

    return 0;
}
