#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int a[n][m];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        // Step 1: Find the minimum element in the row
        int rowMin = a[i][0];
        int colIndex = 0;
        for (int j = 1; j < m; j++) {
            if (a[i][j] < rowMin) {
                rowMin = a[i][j];
                colIndex = j;
            }
        }

        // Step 2: Check if this element is the maximum in its column
        bool isSaddle = true;
        for (int k = 0; k < n; k++) {
            if (a[k][colIndex] > rowMin) {
                isSaddle = false;
                break;
            }
        }

        if (isSaddle) {
            cout << "Saddle Point found: " << rowMin << " at position (" << i << "," << colIndex << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No Saddle Point exists in the matrix.\n";
    }

    return 0;
}
