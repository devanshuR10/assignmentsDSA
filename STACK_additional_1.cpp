#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int> &A) {
    stack<int> st;
    vector<int> result;

    for (int i = 0; i < A.size(); i++) {
        // Pop until a smaller element is found
        while (!st.empty() && st.top() >= A[i]) {
            st.pop();
        }

        if (st.empty()) {
            result.push_back(-1); // No smaller element to the left
        } else {
            result.push_back(st.top()); // Nearest smaller element
        }

        // Push current element for next iterations
        st.push(A[i]);
    }

    return result;
}

int main() {
    vector<int> A = {4, 5, 2, 10, 8};
    vector<int> ans = nearestSmallerToLeft(A);

    cout << "Nearest Smaller to Left: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
