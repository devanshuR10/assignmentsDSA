#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {1,2,2,3,3,4,5,6,7,5};
    int n = 10;

    sort(arr, arr + n);

    int distinctCount = 1; // first element is always distinct
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            distinctCount++;
        }
    }

    cout << "Total distinct elements = " << distinctCount;
    return 0;
}
