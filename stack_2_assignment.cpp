#include <iostream>
#include <stack>
using namespace std;

stack<long long> st;   // main stack
long long minEle;      // current minimum

// Push operation
void push(int x) {
    if (st.empty()) {
        st.push(x);
        minEle = x;
    }
    else if (x >= minEle) {
        st.push(x);
    }
    else {
        // store encoded value
        st.push(2LL * x - minEle);
        minEle = x;
    }
}

// Pop operation
void pop() {
    if (st.empty()) {
        cout << "Stack is empty\n";
        return;
    }

    long long topVal = st.top();
    st.pop();

    if (topVal < minEle) {
        // topVal is a marker → restore old minimum
        minEle = 2 * minEle - topVal;
    }
}

// Top operation
int top() {
    if (st.empty()) {
        cout << "Stack is empty\n";
        return -1;
    }

    long long topVal = st.top();
    if (topVal >= minEle)
        return (int)topVal;
    else
        return (int)minEle;  // actual top value is the current minimum
}

// Get Min operation
int getMin() {
    if (st.empty()) {
        cout << "Stack is empty\n";
        return -1;
    }
    return (int)minEle;
}

// Driver code
int main() {
    push(5);
    push(3);
    push(7);
    push(2);

    cout << "Min: " << getMin() << endl; // 2
    pop();
    cout << "Min: " << getMin() << endl; // 3
    pop();
    cout << "Min: " << getMin() << endl; // 3
    pop();
    cout << "Min: " << getMin() << endl; // 5

    return 0;
}
