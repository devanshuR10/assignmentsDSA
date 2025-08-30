#include<iostream>
using namespace std;
int main(){
    int arr[3];  
    
    cout << "Enter three diagonal elements: ";
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    cout << "\nDiagonal Matrix (3x3):" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                cout << arr[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
