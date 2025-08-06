#include<iostream>
using namespace std;
//input
void input (int arr[] ,int n){
	
	
for	(int i=0;i<n;i++){
		cout<<i+1<<")element\n";
		cin>>arr[i];
	}
}
//display
void display(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<i+1<<" )element\n";
        cout<<arr[i]<<"\n";
    }
    
}
//insert
void insert(int arr[], int &n){
    int element;
    cout<<"enter the element to insert   ";
    cin>>element;
    int pos;
    cout<<"enter the postion to insert";
    cin>>pos;
    
    pos=pos-1;
    
    int temp=element;
    
    for(int i=pos;i<n;i++){
         int current = arr[i];  
        arr[i] = temp;        
        temp = current;  
            
        }
        
      n++;  
    
    
    
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
        
    }
}
    
//search
void search(int  arr[],int n){
    int sec;
    cout<<"enter the element to search";
    cin>>sec;
    
    for(int i=0;i<n;i++){
        if(arr[i]==sec){
            cout<<"element found at "<<i+1;
        }
        
    }
    
    
}

//delete

void delete1(int  arr[], int &n){
    int del;
    cout<<" enter an element to delete ";
    cin>>del;
    int pos;
    
    for(int i=0;i<n;i++){
        if(arr[i]==del){
            pos=i;
            break;
        }
        
    }
    
    if(pos==-1){
        cout<<"element not found";
        return;
    }
    
    for(int i=pos;i<n-1;i++){
     arr[i]=arr[i+1];
    }
   n--; 
    cout<<"element deleeted successfully\n";

    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
        
    }
}


int main(){

int n=6;
int arr[100]={};
input(arr,n);
display(arr,n);
insert( arr,n);
delete1(arr,n);
search(arr,n);

	return 0;
}
