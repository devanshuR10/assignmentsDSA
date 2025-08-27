#include <iostream>
#include <vector>
using namespace std;

// Function to sort array of 0s, 1s and 2s using Dutch National Flag Algorithm
void dutchNationalFlag(vector<int> &arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements (only 0s, 1s, 2s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dutchNationalFlag(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
