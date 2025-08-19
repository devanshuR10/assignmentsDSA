// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "DEvanSHU";
    
    for (int i = 0; i < str.length(); i++) {
        // if character is uppercase (ASCII 65 - 90)
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }
    
    cout << str;
    return 0;
}
