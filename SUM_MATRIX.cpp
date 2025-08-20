#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int a[n][m], b[n][m], sum[n][m];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    // Addition
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Resultant Matrix (Sum):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
