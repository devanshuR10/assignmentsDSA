//reverse an array
#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    
    for(int i=0;i<n/2;i++){
        
        int temp=arr[i]
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
        
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
}

int main() {
   int arr[6]={1,2,3,4,5,6};
   reverse(arr,6);
    return 0;
}
