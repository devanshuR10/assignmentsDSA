// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swapAdjecent(int arr[],int n)
{
    
    if (n%2==0){
    for(int i =0 ;i<n;i++){
        int temp =arr[i];
         arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
    }
    else
    {
        for(int i =0 ;i<n-1;i++){
        int temp =arr[i];
         arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
    }
    
    
}
int main() {
  int arr[5]={1,2,3,4,5};
  int  n=5;
  swapAdjecent( arr,  n);
   for(int i : arr){
       cout<<i<<" ";
   }
    return 0;
}
