//to remeve dublicate iin array
#include<iostream>
using namespace std;
//remove dublicat
void removeDUB(int arr[], int &n ){
    for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j]){
                 for(int k=j;k<n-1;k++){
                     arr[k]=arr[k+1];
                 }
                 n--;
             }
             else{
                 j++;
             }
         }
    
        
    }
    
    
    
}
int main(){
    int arr[100];
    int n=6;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<" ";
    }
    
    removeDUB(arr,n);
    
     for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    
    return 0;
}