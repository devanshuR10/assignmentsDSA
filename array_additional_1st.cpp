/*input int k  int array
find the differnce k and find all such pairs
Find two numbers in an array whose difference equals K. Given an array arr[] and a positive
integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j])
is equal to k

*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int arr[5]={1,2,4,5,6};
  int k=2;
  int n=5;
  int count=0;
   int i = 0, j = 1, count1 = 0;
  for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
          if(arr[i]-arr[j]==k){
              count++;
              cout<<arr[i]<<" "<<arr[j]<<endl;
          }
      }
      
  }
  cout<<"total number of pairs "<<count;

    return 0;
    
    
    sort(arr,arr+5);
    
      while(i < n && j < n) {
        if(i != j && arr[j] - arr[i] == k) {
            cout << arr[i] << " " << arr[j] << endl;
            count1++;
            i++; j++;
        }
        else if(arr[j] - arr[i] < k) {
            j++;
        }
        else {
            i++;
        }
    }
     cout << "Total number of pairs: " << count1 << endl;
    return 0;
    
}
