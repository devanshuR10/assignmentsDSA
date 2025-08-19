// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,7,4,3};

int count=0;
   for(int i=0;i<6;i++){
       for(int j=i+1;j<6;j++){
           if(arr[i]>arr[j]){
               count++;
           }
       }
   }
cout<<count;
    return 0;
}
