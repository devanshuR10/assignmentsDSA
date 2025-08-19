#include <iostream>
#include <vector>
using namespace std;

int findMissingFormula(vector<int>& arr) {
    int n = arr.size();
    int first = arr[0];
    int last = arr[n - 1];

    // Total number of terms if no number was missing
    int totalTerms = last - first + 1;

    // Expected sum of AP
    int expectedSum = totalTerms * (first + last) / 2;

    // Actual sum of array
    int actualSum = 0;
    for (int num : arr) {
        actualSum += num;
    }

    // Missing number
    return expectedSum - actualSum;
}

int main() {
    vector<int> arr = {4, 5, 6, 8, 9};
    cout << "Missing number: " << findMissingFormula(arr) << endl;
    return 0;
}
