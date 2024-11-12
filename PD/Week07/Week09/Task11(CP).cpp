#include <iostream>
#include <string>
using namespace std;

string removeVowels(const string& input) {
    string result = "";  
    string vowels = "aeiouAEIOU";  
    
    for (char ch : input) {
        if (vowels.find(ch) == string::npos) { 
            result += ch; 
        }
    }
    return result;  
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    string output = removeVowels(input);
    cout << "String without vowels: " << output << endl;

    return 0;
}
