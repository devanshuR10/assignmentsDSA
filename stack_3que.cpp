#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;
    for (char ch : expr) {
        
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // Handle closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false; // nothing to match with
            char top = s.top();
            s.pop();
            // Check for matching pairs
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty(); // stack should be empty if balanced
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
