#include<iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int n1, n2;
    Element A[20], B[20], C[40];  // C is result

    int rows, cols;

    cout << "Enter total rows and columns of matrices: ";
    cin >> rows >> cols;

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

    // Addition
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(A[i].row == B[j].row && A[i].col == B[j].col) {
            // same position → add values
            C[k].row = A[i].row;
            C[k].col = A[i].col;
            C[k].val = A[i].val + B[j].val;
            i++; j++; k++;
        }
        else if(A[i].row < B[j].row || (A[i].row == B[j].row && A[i].col < B[j].col)) {
            // A element comes first
            C[k++] = A[i++];
        }
        else {
            // B element comes first
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements
    while(i < n1) C[k++] = A[i++];
    while(j < n2) C[k++] = B[j++];

    int n3 = k;

    // Print Result
    cout << "\nResultant Sparse Matrix (Triplet form):\n";
    cout << "Row  Col  Val\n";
    for(int x = 0; x < n3; x++) {
        cout << C[x].row << "    " << C[x].col << "    " << C[x].val << endl;
    }

    return 0;
}
