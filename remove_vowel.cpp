#include <iostream>
#include <string>
using namespace std;

string removeVowels(string str) {
    string result = "";
    for (char c : str) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            result += c;  // add only non-vowels
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "String without vowels: " << removeVowels(s) << endl;

    return 0;
}
