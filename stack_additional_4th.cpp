#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> answer(n, 0);  // initialize with 0 (if no warmer day found)
    stack<int> st; // stack to store indices

    for (int i = 0; i < n; i++) {
        // check if current temperature is greater than temperature at index on stack top
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int prevIndex = st.top();
            st.pop();
            answer[prevIndex] = i - prevIndex; // difference in days
        }
        st.push(i); // push current day index
    }

    return answer;
}

int main() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = dailyTemperatures(temperatures);

    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
