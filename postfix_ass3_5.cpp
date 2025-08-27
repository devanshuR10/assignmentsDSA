#include <iostream>
#include <stack>
#include <cctype>  // for isdigit
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        // If operand, push to stack
        if (isdigit(c)) {
            st.push(c - '0'); // convert char to int
        }
        // If operator, pop 2 elements and apply
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': st.push(pow(val1, val2)); break;
            }
        }
    }
    return st.top(); // Final result
}

int main() {
    string postfix;
    cout << "Enter a postfix expression (digits only): ";
    cin >> postfix;

    cout << "Evaluated result: " << evaluatePostfix(postfix) << endl;
    return 0;
}
