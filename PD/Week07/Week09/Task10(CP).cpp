#include <iostream>
#include <string>
using namespace std;

void printSomething(const string& a) {
    cout << "something " << a << endl;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    printSomething(input);

    return 0;
}
