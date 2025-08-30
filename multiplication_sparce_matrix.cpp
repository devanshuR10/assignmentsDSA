#include<iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int m, n, p; 
    int n1, n2;
    Element A[50], B[50], C[100]; // C = result

    cout << "Enter dimensions of Matrix A (rows cols): ";
    cin >> m >> n;

    cout << "Enter dimensions of Matrix B (rows cols): ";
    cin >> n >> p;  // rows of B must = cols of A

    cout << "\nEnter number of non-zero elements in Matrix A: ";
    cin >> n1;
    cout << "Enter elements of Matrix A (row col value):\n";
    for(int i = 0; i < n1; i++) {
        cin >> A[i].row >> A[i].col >> A[i].val;
    }

    cout << "\nEnter number of non-zero elements in Matrix B: ";
    cin >> n2;
    cout << "Enter elements of Matrix B (row col value):\n";
    for(int i = 0; i < n2; i++) {
        cin >> B[i].row >> B[i].col >> B[i].val;
    }

    // --- Multiplication ---
    int k = 0;
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(A[i].col == B[j].row) {
                int r = A[i].row;
                int c = B[j].col;
                int v = A[i].val * B[j].val;

                // check if C already has entry at (r, c)
                bool found = false;
                for(int x = 0; x < k; x++) {
                    if(C[x].row == r && C[x].col == c) {
                        C[x].val += v;
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    C[k].row = r;
                    C[k].col = c;
                    C[k].val = v;
                    k++;
                }
            }
        }
    }

    // --- Print Result ---
    cout << "\nResultant Sparse Matrix (Triplet form):\n";
    cout << "Row  Col  Val\n";
    for(int i = 0; i < k; i++) {
        cout << C[i].row << "    " << C[i].col << "    " << C[i].val << endl;
    }

    return 0;
}
