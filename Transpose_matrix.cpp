#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int a[n][m], transpose[m][n];

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
